

# Death Rally Vita - Performance & Control Edition

An optimized performance and control fork of **Death Rally** for the PlayStation Vita.

## 👥 Credits & Acknowledgments

This project is based on the incredible work of the original developers and the open-source community:

* **Original PS Vita Port:** Developed by **Enrique Somolinos**.
* **Open Source Engine:** Based on the source code reconstruction by **urxp**.

---

## 🎮 Installation Guide

### Step 1: Install the Game App

Download and install the `.vpk` file on your PlayStation Vita using VitaShell.

### Step 2: Prepare the Data Files

Download the DERA00002.zip from the Releases section.

Extract it in ux0:data/

This creates:

`ux0:data/DERA00002/DATA/`

with the required configuration.

### Step 3: Copy the Original Game Files

Open your legally obtained Death Rally installation on your PC.

Copy the required original game files into:

`ux0:data/DERA00002/DATA/`

### Step 4: Move the Cinematic Files

Inside the `DATA` folder, locate the three `.HAF` files used by the game's cinematics.

Move them into the `CINEM` folder.

The resulting structure should look like:

```text
ux0:data/DERA00002/DATA/
    ├── CINEM/
    │   ├── ENDANI.HAF
    │   ├── ENDANI0.HAF
    │   └── SANIM.HAF
    ├── CDROM.INI
    ├── ENGINE.BPA
    ├── IBFILES.BPA
    ├── MENU.BPA
    ├── MUSICS.BPA
    └── TR[0-9].BPA

🎮 Native Control Layout

Once the custom dr.cfg is installed, the controls are mapped as follows:

D-Pad: Smooth and continuous steering.
R Trigger: Accelerate.
L Trigger: Brake / Reverse.
X (Cross): Nitro / Turbo and menu confirmation.
Square (□): Shoot main weapons. exit race "y" key
Circle (○): Drop mines.
Triangle (△): Horn / space 
Bypassing the Name / Save Profile Screens

The original game expects keyboard input for some text-entry screens.

On the Vita:

Press Triangle (△) when the game asks for a name.
Press X (Cross) to confirm.

This allows the profile/save screen to be bypassed without an external keyboard.

📦 Required Original Game Files

This VPK does not contain copyrighted game assets such as graphics, music, or levels.

You must provide the original Death Rally game files legally.

The original PC/Steam version can be used to obtain the required files.

Required files

Copy the required .BPA files and IBOUNDS.DAT into:

ux0:data/DERA00002/DATA/

🛠️ Changelog
Performance
Removed the legacy artificial frame delays from __GET_FRAME_COUNTER, improving input responsiveness and frame pacing.
Added ARM NEON compiler optimizations for the Vita hardware.
Improved overall performance of vehicle physics and rendering.
Controls
Fixed the legacy D-Pad tap-steering behavior.
D-Pad steering is now smooth and continuous while the direction is held.
Added native Vita button mappings for acceleration, braking, weapons, mines and turbo.
Added a shortcut for exiting/retiring from the race pause menu.
Gameplay Fixes
Fixed the pickup spawning logic so turbos, ammunition and other race items can spawn correctly during races.
Fixed a crash occurring after defeating the Adversary and completing the final cinematic, before the final race-results screen.
