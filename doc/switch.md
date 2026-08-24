# Nintendo Switch port

This document covers everything specific to the Nintendo Switch port of dRally: building the
homebrew `.nro`, installing it, and how the controls map to the original DOS keyboard scheme.

For the general project description (what dRally is, the required original game assets, etc.)
see the [main README](../README.md).

## Requirements

The Switch build uses [devkitPro](https://devkitpro.org/) (devkitA64 + libnx) and SDL2 via
devkitPro's `portlibs`. You need:

* `devkitA64` (`switch-dev` package group, which includes `libnx`)
* `switch-sdl2`
* `switch-sdl2_net`
* `switch-libpng`
* `switch-libjpeg-turbo`
* `switch-zlib`

The `DEVKITPRO` environment variable must point at your devkitPro install (e.g.
`/opt/devkitpro`) — `Makefile.switch` refuses to run without it.

## Building

### Option A: native devkitPro toolchain

```sh
export DEVKITPRO=/opt/devkitpro
export DEVKITA64=$DEVKITPRO/devkitA64
export PATH=$DEVKITPRO/tools/bin:$DEVKITA64/bin:$PATH

sudo dkp-pacman -Sy
sudo dkp-pacman -S switch-dev switch-sdl2 switch-sdl2_net switch-libpng switch-libjpeg-turbo switch-zlib

make -f Makefile.switch
```

The resulting binary is written to `build/switch/Death_rally_switch.nro`.

### Option B: Docker

A ready-made Ubuntu 20.04 image with devkitPro and the Switch portlibs preinstalled is provided
in [`docker/DockerfileSwitch`](../docker/DockerfileSwitch). This is the same environment used by
the `Makefile Switch` CI workflow, and is the easiest way to reproduce a build without setting up
devkitPro locally.

```sh
docker build -f docker/DockerfileSwitch -t drally-vita-switch-builder .
docker run --rm -it -v "${PWD}:/workspace" -w /workspace drally-vita-switch-builder make -f Makefile.switch
```

`make clean` (also via `-f Makefile.switch`) removes `build/switch` and all intermediate object
files.

### Continuous integration

[`.github/workflows/makefile-switch.yml`](../.github/workflows/makefile-switch.yml) builds the
`.nro` on every push/PR that touches Switch-related files or any `.c`/`.h` source, using the
native toolchain approach above (not the Docker image). Check that workflow if a local build
succeeds but CI doesn't, or vice versa.

## Installing on a Switch

The Switch must be able to run homebrew (custom firmware or the homebrew menu). Then:

* Copy the `.nro` under `sdmc:/switch/drally`
* Copy all the original game assets under `sdmc:/switch/drally` (see the asset layout in the
  [main README](../README.md#you-need-original-game-assets) — filenames/directories must be
  uppercase)
* Copy the `DR.CFG` file under `sdmc:/switch/drally`
* Launch it from the Homebrew Menu (Album applet / hbmenu)

### Diagnosing startup problems

On boot, the Switch build redirects `stdout`/`stderr` to `sdmc:/switch/drally/drally_log.txt` on the SD card
(see [`drally.c`](../drally.c)), so if the game fails to start or crashes immediately, that file
is the first place to look — no network/devkit connection needed. This is also the easiest way to
confirm the raw index of any physical button if you're debugging or remapping controls, since
`events.c` prints every `SDL_JOYBUTTONDOWN`/`SDL_JOYBUTTONUP` to that same log.

Note: since the log lives next to the `.nro`/assets under `sdmc:/switch/drally`, it won't exist
yet on first launch — check that the game was able to create `sdmc:/switch/drally/drally_log.txt`
if you don't see it appear.

## Controls

The Switch build reuses the PS Vita port's control scheme, but the face buttons are mapped
**positionally**, not by label — i.e. by the physical position of the button (top/right/bottom/left)
rather than by the PlayStation-style name used in the shared code (`TRIANGLE`/`CIRCLE`/`CROSS`/
`SQUARE`). See [`drally_keyboard.h`](../drally_keyboard.h) for the raw SDL joystick button index
table (`JOY_BTN_*`) and [`keyboard.c`](../keyboard.c) for the scancode mapping.

| Switch input          | Position | Action                                   |
|------------------------|----------|-------------------------------------------|
| D-Pad Up               | —        | Accelerate                                |
| D-Pad Down             | —        | Brake                                     |
| D-Pad Left / Right     | —        | Steer left / right                        |
| Left stick left/right  | —        | Steer left / right                        |
| X                      | Top      | Horn                                      |
| B                      | Bottom   | Accept / confirm (menus)                  |
| Y                      | Left     | Drop mine                                 |
| A                      | Right    | *(unused — mapped to Delete internally)*  |
| L                      | —        | Machine gun                               |
| R                      | —        | Turbo boost                               |
| Plus (+)               | —        | *(mapped to Delete internally)*           |
| Minus (-)               | —        | Back / Escape (same role as ESC in the original game) |

Notes:

* Only the horizontal axis of the left stick is read (steering). Vertical stick movement does
  nothing — acceleration and braking are D-Pad only (see `events.c`).
* The button index table in `drally_keyboard.h` assumes devkitPro SDL2 reports buttons in libnx's
  `HidNpadButton` order (`A, B, X, Y, StickL, StickR, L, R, ZL, ZR, Plus, Minus, D-Left, D-Up,
  D-Right, D-Down`). If a future devkitPro/SDL2 update changes that order, use the
  `drally_log.txt` button-index logging described above to find the new indices and update the
  `JOY_BTN_*` defines.
* `DR.CFG` remapping only affects the keyboard-style bindings (e.g. default PC keys like `A` for
  accelerate); the D-Pad/analog steering and accelerate/brake described above always work
  regardless of that config, since the game reads the arrow-key scancodes unconditionally.

## Build-time options

`Makefile.switch` compiles with these defines, which affect runtime behavior:

* `-DSWITCH` — enables the Switch-specific code paths (controller mapping, 720p resolution,
  offline log file, etc.)
* `-DDR_LETTERBOX` — renders in letterbox mode (`W_LETTERBOX`) instead of stretching/shrinking
  (`W_SHRINK`) to fit the screen
* `-DDR_MULTIPLAYER` / `-DIPXNET` — enable the IPX-over-UDP multiplayer code; see
  [Work in progress](../README.md#work-in-progress) in the main README, since multiplayer is not
  yet considered stable on any platform

The target resolution on Switch is fixed at 1280x720 (see `drally_display.h`), independent of the
PS Vita and desktop Linux resolutions.

## Known limitations

* Multiplayer is a work in progress across all platforms (see the main README) and hasn't had
  dedicated Switch testing.
* The face-button mapping is positional rather than label-based on purpose — see the Controls
  section above if a button doesn't seem to do what its label suggests.
