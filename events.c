#include "drally.h"

extern void_cb ___2432c8h;

void dRally_Keyboard_make(SDL_Scancode);
void dRally_Keyboard_break(SDL_Scancode);

void IO_Loop(void){
    
    SDL_Event e;

    while(SDL_PollEvent(&e)){

        if(e.type == SDL_KEYDOWN){

            dRally_Keyboard_make(e.key.keysym.scancode);
        }
        else if(e.type == SDL_KEYUP){

            dRally_Keyboard_break(e.key.keysym.scancode);
        }
        else if (e.type == SDL_JOYBUTTONDOWN) {
            printf("SDL_JOYBUTTONDOWN %d", e.jbutton.button);
            dRally_Keyboard_make(e.jbutton.button);
        }
        else if (e.type == SDL_JOYBUTTONUP) {
            printf("SDL_JOYBUTTONUP %d", e.jbutton.button);
            dRally_Keyboard_break(e.jbutton.button);
        }
        else if(e.type == SDL_QUIT){
            printf("[dRally] TODO: exit not handled properly\n");
            ___2432c8h();
        }
        else if (e.type == SDL_JOYAXISMOTION) {
            switch (e.jaxis.axis) {
            case 0:
                if (e.jaxis.value > 20000) {//RIGHT
                    dRally_Keyboard_make(9);
                }
                else if (e.jaxis.value < -20000) {//LEFT
                    dRally_Keyboard_make(7);
                }
                else {
                    dRally_Keyboard_break(9);
                    dRally_Keyboard_break(7);
                }
                break;
            /*case 1:
                if (e.jaxis.value > 20000) {//DOWN
                    dRally_Keyboard_make(6);
                }
                else if (e.jaxis.value < -20000) {//UP
                    dRally_Keyboard_make(8);
                }
                break;*/
            }


        }
    }
}
