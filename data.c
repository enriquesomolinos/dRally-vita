#include "drally.h"

typedef char char80[80];

const char80 ___18beb2h[10] = {
    [0] = "",
    [1] = "[Congratulations, driver.",
    [2] = "",
    [3] = "You've made it through the hot rod road-hell",
    [4] = "Purgatory. [You are #1.{ Now you must",
    [5] = "challenge the demon king of the race, [the",
    [6] = "[Adversary{, for the Grail, for the throne,",
    [7] = "for the hand of the Queen Road. [Winner takes",
    [8] = "[it all.{ Dig it, you have to.",
    [9] = "",
};

const __BYTE__ ___196abch[] = {
// << Easy
    0,  // "Suburbia"
    7,  // "Holocaust"
// << Medium
    5,  // "Oasis"
    3,  // "Rock Zone"
    4,  // "Snake Alley"
// Easy >>
// << Hard
    2,  // "Utopia"
    8,  // "Bogota"
    1,  // "Downtown"
// Medium >>
    6,  // "Velodrome"
// Hard >>

// << Easy
    9,  // "West End"
    16, // "Toxic Dump"
// << Medium
    14, // "Palm Side"
    12, // "Hell Mountain"
    13, // "Desert Run"
// Easy >>
// << Hard
    11, // "Complex"
    17, // "Borneo"
    10, // "Newark"
// Medium >>
    15, // "Eidolon"
// Hard >>

    16,
    17,
    18,
    0,
    0,
    0
};

const __DWORD__ ___196af4h[9] = {
    [0] = 0x24410,
    [1] = 0x244a0,
    [2] = 0x24530,
    [3] = 0x26c38,
    [4] = 0x26cc8,
    [5] = 0x26d58,
    [6] = 0x29460,
    [7] = 0x294f0,
    [8] = 0x29580
};

__DWORD__ ___185a14h_UseWeapons = 1;
__DWORD__ ___185a18h = 0;
__DWORD__ ChatMaximized = 0;
//extern __DWORD__ __attribute((alias("ChatMaximized"))) ___185a1ch;
__DWORD__ ___185a20h = 0;
__DWORD__ ___185a24h = 0;
__DWORD__ ___185a28h = 0;
__DWORD__ ___185a2ch = 0;
__DWORD__ ___185a30h = 0;
__DWORD__ ___185a34h = 0;
__DWORD__ ___185a38h_delay = 0;
__DWORD__ ___185a3ch = 0;
__DWORD__ ___185a40h = 0;
__DWORD__ ___185a44h = 0;
__DWORD__ ___185a48h = 0;
__DWORD__ ___185a4ch = 0;
__DWORD__ ___185a50h = 0;
__DWORD__ MP_MONEY = 10000;
__DWORD__ ___185a58h = 0;

__DWORD__ ___196a74h = 1;
__DWORD__ ___196a78h = 0;
__DWORD__ ___196a7ch = 0;
__DWORD__ ___196a80h = 0;
__DWORD__ ___196a84h = 0;
__DWORD__ ___196a88h = 0;

__DWORD__ ___196a90h_modem_dialing = 1;
__DWORD__ ___196a94h_difficulty = 1;
__DWORD__ ___196a98h = 0;
__DWORD__ ___196a9ch = 0;
__DWORD__ ___196aa0h = 0;
__DWORD__ ___196aa4h = 0;
__DWORD__ ___196aa8h = 0;
__DWORD__ ___196aach = 0;
int PLAYER_LAPPED = 0;
__DWORD__ ___196ab4h = 0;
__DWORD__ ___196ab8h = 0;

__DWORD__ ___196ad4h = 0;
__DWORD__ ___196ad8h = 0x1ff;
__DWORD__ ___196adch = 2;
__DWORD__ ___196ae0h = 0;
__DWORD__ ___196ae4h = 0;
__DWORD__ ___196ae8h = 0;
__DWORD__ ___196aech = 0;
__DWORD__ ___196af0h = 0;

__DWORD__ ___196b18h = 0xffffffff;
__DWORD__ ___196b1ch = 0xffffffff;
__DWORD__ ___196b20h = 0xffffffff;
__DWORD__ ___196b24h = 5;

__DWORD__ ___196bd8h = 0;
__DWORD__ ___196bdch = 0;

__DWORD__ ___196d84h = 1;
int CURRENT_VIEWPORT_W = 320;
int CURRENT_VIEWPORT_CENTER_X = 0x64;
int CURRENT_VIEWPORT_H = 200;
int CURRENT_VIEWPORT_CENTER_Y = 0x64;
int CURRENT_VIEWPORT_X = 0;
__DWORD__ ___196da0h = 1;
__DWORD__ ___196da4h = 1;
__DWORD__ ___196da8h = 1;
__DWORD__ ___196dach = 0;
__DWORD__ ___196db0h = 1;
__DWORD__ ___196db4h = 1;
__DWORD__ ___196db8h = 0;
__DWORD__ ___196dbch = 0;
__DWORD__ ___196dc0h = 0;
__DWORD__ ___196dc4h = 0;
int TRX_VIEWPORT_TL_X = 0;
int TRX_VIEWPORT_TL_Y = 0;
__DWORD__ ___196dd0h = 0;
int IS_RACE_FINISHED = 0;
__DWORD__ ___196dd8h = 0;
int ___196ddch = 0;
__DWORD__ ___196de0h = 0;
__DWORD__ ___196de4h = 0;
__DWORD__ ___196de8h = 0;
__DWORD__ ___196dech = 0;
int IS_LAP_RECORD = 0;
__DWORD__ ___196df4h = 0;
__DWORD__ ___196df8h = 0x28000;

__DWORD__ ___196e60h = 0;
__DWORD__ ___196e64h = 0;
__DWORD__ ___196e68h = 0;

__DWORD__ ___196e70h = 0;
__DWORD__ ___196e74h = 0x3f666666;
__DWORD__ ___196e78h = 0x3f800000;

__DWORD__ ___196efch = 0;

__BYTE__ ___199f3ch = 0;

__BYTE__ ___199f3dh = 0;
__BYTE__ ___199f3eh = 1;
__BYTE__ ___199f3fh = 2;
__BYTE__ ___199f40h = 3;
__BYTE__ ___199f41h = 4;
__BYTE__ ___199f42h = 5;
__BYTE__ ___199f43h = 6;
__BYTE__ ___199f44h = 7;
__BYTE__ ___199f45h = 8;

__DWORD__ ___199f48h = 0;
__DWORD__ ___199f4ch = 0;
__DWORD__ ___199f50h = 0;
__DWORD__ ___199f60h = 0;
__DWORD__ ___199f64h = 0;
__DWORD__ ___199f68h = 0;
__DWORD__ ___199f6ch = 0;
__DWORD__ ___199f70h = 0;
__DWORD__ ___199f74h = 0;
__DWORD__ ___199f78h = 0;

__DWORD__ ___199fa4h = 0;
__DWORD__ ___199fa8h = 0;