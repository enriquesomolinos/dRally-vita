#include <stdio.h>
#include <stdlib.h>
//#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>

extern unsigned char LAST_KEY;
extern unsigned char LAST_CHAR;

extern void (*___2432c8h)(void);

void IRQ1_KeyboardISR_EMU(unsigned char);


unsigned char SCANCODE_TABLE[SDL_NUM_SCANCODES] = {0};

void Scancodes_Init(void){

    SCANCODE_TABLE[SDL_SCANCODE_ESCAPE] = 1;
    SCANCODE_TABLE[SDL_SCANCODE_RETURN] = 0x1c;
    SCANCODE_TABLE[SDL_SCANCODE_A] = 0x1e;
    SCANCODE_TABLE[SDL_SCANCODE_B] = 0x30;
    SCANCODE_TABLE[SDL_SCANCODE_C] = 0x2e;
    SCANCODE_TABLE[SDL_SCANCODE_D] = 0x20;
    SCANCODE_TABLE[SDL_SCANCODE_E] = 0x12;
    SCANCODE_TABLE[SDL_SCANCODE_F] = 0x21;
    SCANCODE_TABLE[SDL_SCANCODE_G] = 0x22;
    SCANCODE_TABLE[SDL_SCANCODE_H] = 0x23;
    SCANCODE_TABLE[SDL_SCANCODE_I] = 0x17;
    SCANCODE_TABLE[SDL_SCANCODE_J] = 0x24;
    SCANCODE_TABLE[SDL_SCANCODE_K] = 0x25;
    SCANCODE_TABLE[SDL_SCANCODE_L] = 0x26;
    SCANCODE_TABLE[SDL_SCANCODE_M] = 0x32;
    SCANCODE_TABLE[SDL_SCANCODE_N] = 0x31;
    SCANCODE_TABLE[SDL_SCANCODE_O] = 0x18;
    SCANCODE_TABLE[SDL_SCANCODE_P] = 0x19;
    SCANCODE_TABLE[SDL_SCANCODE_Q] = 0x10;
    SCANCODE_TABLE[SDL_SCANCODE_R] = 0x13;
    SCANCODE_TABLE[SDL_SCANCODE_S] = 0x1f;
    SCANCODE_TABLE[SDL_SCANCODE_T] = 0x14;
    SCANCODE_TABLE[SDL_SCANCODE_U] = 0x16;
    SCANCODE_TABLE[SDL_SCANCODE_V] = 0x2f;
    SCANCODE_TABLE[SDL_SCANCODE_W] = 0x11;
    SCANCODE_TABLE[SDL_SCANCODE_X] = 0x2d;
    SCANCODE_TABLE[SDL_SCANCODE_Y] = 0x15;
    SCANCODE_TABLE[SDL_SCANCODE_Z] = 0x2c;

    SCANCODE_TABLE[SDL_SCANCODE_UP] = 0x48;
    SCANCODE_TABLE[SDL_SCANCODE_LEFT] = 0x4b;
    SCANCODE_TABLE[SDL_SCANCODE_RIGHT] = 0x4d;
    SCANCODE_TABLE[SDL_SCANCODE_DOWN] = 0x50;

	SCANCODE_TABLE[SDL_SCANCODE_BACKSPACE] = 0x0e;
    SCANCODE_TABLE[SDL_SCANCODE_TAB] = 0x0f;
    SCANCODE_TABLE[SDL_SCANCODE_SPACE] = 0x39;

	SCANCODE_TABLE[SDL_SCANCODE_LCTRL] = 0x1d;
    SCANCODE_TABLE[SDL_SCANCODE_LSHIFT] = 0x2a;
    SCANCODE_TABLE[SDL_SCANCODE_RSHIFT] = 0x36;
    SCANCODE_TABLE[SDL_SCANCODE_LALT] = 0x38;
    SCANCODE_TABLE[SDL_SCANCODE_DELETE] = 0x53;


	SCANCODE_TABLE[SDL_SCANCODE_F1] = 0x3b;
    SCANCODE_TABLE[SDL_SCANCODE_F2] = 0x3c;
    SCANCODE_TABLE[SDL_SCANCODE_F3] = 0x3d;
    SCANCODE_TABLE[SDL_SCANCODE_F4] = 0x3e;
    SCANCODE_TABLE[SDL_SCANCODE_F5] = 0x3f;
    SCANCODE_TABLE[SDL_SCANCODE_F6] = 0x40;
    SCANCODE_TABLE[SDL_SCANCODE_F7] = 0x41;
    SCANCODE_TABLE[SDL_SCANCODE_F8] = 0x42;
    SCANCODE_TABLE[SDL_SCANCODE_F9] = 0x43;
    SCANCODE_TABLE[SDL_SCANCODE_F10] = 0x44;
    SCANCODE_TABLE[SDL_SCANCODE_F11] = 0x57;
    SCANCODE_TABLE[SDL_SCANCODE_F12] = 0x58;
	
}

void IO_Loop(void){

    SDL_Event e;

    while(SDL_PollEvent(&e)){

        if(e.type == SDL_KEYDOWN){

            IRQ1_KeyboardISR_EMU(SCANCODE_TABLE[e.key.keysym.scancode]);
        }
        else if(e.type == SDL_KEYUP){
           
            IRQ1_KeyboardISR_EMU(0x80+SCANCODE_TABLE[e.key.keysym.scancode]);
        }
        else if(e.type == SDL_QUIT){
            printf("[dRally] TODO: exit not handled properly\n");
            ___2432c8h();
        }
    }
}
