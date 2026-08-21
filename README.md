# Death Rally Vita - Performance & Control Edition

An optimized performance and control fork of **Death Rally** for the PlayStation Vita.

## 👥 Credits & Acknowledgments
This project is a performance-focused fork and would not be possible without the incredible work of the original developers:
* **Original PS Vita Port:** Developed by **Enrique Somolinos** ([@enriquesomolinos](https://github.com)). Check out the original repository here: [enriquesomolinos/dRally-vita](https://github.com/dRally-vita).
* **Open Source Engine:** Based on the source code reconstruction by **urxp** ([urxp/dRally](https://github.com)).

---

## 💾 Installation & Custom Layout Configuration
This fork includes a pre-configured `dr.cfg` file with an optimized, modern handheld button layout. To apply these controls:

1. Copy the **`dr.cfg`** file from this repository.
2. Transfer it to your PS Vita and paste it inside the game's data folder:  
   `ux0:data/DERA00002/`
3. Overwrite the existing file if prompted.

---

## 🎮 Native Control Layout
Once the custom `dr.cfg` is placed in the data folder, the handheld controls will map as follows:

* **D-Pad:** Smooth and continuous steering (fixed the legacy tap-steering bug).
* **R Trigger:** Accelerate.
* **L Trigger:** Brake / Reverse.
* **X (Cross):** Nitro / Turbo (Also acts as Keypad-Enter for general menu navigation).
* **Square (□):** Shoot main weapons.
* **Circle (○):** Drop mines.
* **Triangle (△):** Horn / Native Exit Shortcut (Sends 'Y' key to instantly quit races in the pause overlay).

---

## 📋 How to bypass the Name / Save Profile screens
Since the native Vita OS keyboard cannot bind to this specific DOS emulator layout, follow these simple steps to easily bypass the profile creation or save-game text fields:

1. When the game prompts you to type a name, press **Triangle (△)** (this injects a character/space into the empty text box).
2. Press **X (Cross)** to accept and confirm (sends `Keypad-Enter`).
3. Your profile or save slot will be instantly created or updated without needing a physical keyboard.
Usa el código con precaución.Paso 2: Guardar los cambiosBaja hasta el final de la página en GitHub y haz clic en el botón verde "Commit changes..." para salvar la documentación definitiva.Con esta estructura en inglés puro, el tutorial de instalación de la ruta ux0:data/DERA00002/ y la guía del truco de guardado, tu proyecto tiene una presentación de nivel profesional. Quedó completamente listo para recibir a todos los usuarios de VitaDB. ¡Trabajo culminado por todo lo alto! 🏎️💨🏁


---

## 📦 Required Original Game Files (Legal Notice)
This VPK does not contain any copyrighted game assets (graphics, music, or levels). To play, you must provide the original MS-DOS game files legally. 

**Steam Version Compatibility:**
The files from the official **Steam version** of *Death Rally* (Classic) work perfectly. 

### How to install game assets:
1. Purchase and download *Death Rally* on Steam.
2. Go to the game's installation folder on your PC.
3. Copy all the **`.BPA`** extension files and the **`IBOUNDS.DAT`** file.
4. Transfer them to your PS Vita and place them inside:  
   `ux0:data/DERA00002/` (alongside your custom `dr.cfg`).



🛠️ Changelog / Implemented Improvements:True Vertical Fullscreen (Letterbox Removed): Completely removed the legacy MS-DOS -DDR_LETTERBOX flag. Races now utilize the full vertical height of the PS Vita screen through automatic hardware scaling (960x544), eliminating the top and bottom black bars.Vectorized Math Optimizations (NEON Instructions): Compiled using aggressive performance flags (-Ofast, -mfpu=neon, and -mcpu=cortex-a9). This forces the Vita's ARM CPU to compute vehicle physics, rotation, and missile trajectories vectorially and simultaneously, stabilizing frame pacing.Input Lag Elimination (MS-DOS Delays Removed): Disabled legacy artificial frame timers (SDL_Delay) within the main update loop (__GET_FRAME_COUNTER). The CPU now processes frame rendering freely, ensuring buttons and direction inputs respond instantly to touch.Fluent & Continuous D-Pad Steering Fix: Completely rewrote the horizontal axis tracking logic inside events.c. This permanently fixes the native bug that caused the car to only "tap-steer" short distances. Vehicles now drift and turn smoothly and continuously as long as the D-Pad direction is held down.Ergonomic Control Remapping:Associated the MS-DOS Y (Yes) key to the Square (□) button as a dual action during races. This provides an immediate shortcut to accept race retirement inside the pause overlay, preventing players from getting trapped in that screen.Modern Code Toolchain Compatibility (C23 Standard): Fixed a syntactic conflict in db_ipx.c by removing a redundant boolean redefinition (typedef int bool), adapting the codebase flawlessly to the latest VitaSDK toolchain revisions.
