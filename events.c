#include "drally.h"

extern void_cb ___2432c8h;

void dRally_Keyboard_make(SDL_Scancode);
void dRally_Keyboard_break(SDL_Scancode);

/* Variables de estado para evitar que el D-Pad se quede trabado o deje de girar */
static int dpad_left_pressed = 0;
static int dpad_right_pressed = 0;

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
            
            /* Todos los botones envían su señal original de fábrica de forma pura */
            dRally_Keyboard_make(e.jbutton.button);
            
            /* FIX DEFINITIVO: TRIÁNGULO (Botón 3) añade la tecla 'Y' (Scancode 28) para abandonar carrera */
            if(e.jbutton.button == 3){
                dRally_Keyboard_make(28); 
            }
        } 
        else if (e.type == SDL_JOYBUTTONUP) {
            printf("SDL_JOYBUTTONUP %d", e.jbutton.button);
            dRally_Keyboard_break(e.jbutton.button);
            
            /* Liberamos la 'Y' al soltar el Triángulo físico */
            if(e.jbutton.button == 3){
                dRally_Keyboard_break(28);
            }
        } 
        else if(e.type == SDL_QUIT){
            printf("[dRally] TODO: exit not handled properly\n");
            ___2432c8h();
        } 
        else if (e.type == SDL_JOYAXISMOTION) {
            switch (e.jaxis.axis) {
                case 0: /* Tu D-Pad continuo y perfecto para las curvas */
                    if (e.jaxis.value > 20000) { // GIRO A LA DERECHA
                        if (!dpad_right_pressed) {
                            if (dpad_left_pressed) { 
                                dRally_Keyboard_break(7);
                                dpad_left_pressed = 0;
                            }
                            dRally_Keyboard_make(9); 
                            dpad_right_pressed = 1;
                        }
                    } 
                    else if (e.jaxis.value < -20000) { // GIRO A LA IZQUIERDA
                        if (!dpad_left_pressed) {
                            if (dpad_right_pressed) { 
                                dRally_Keyboard_break(9);
                                dpad_right_pressed = 0;
                            }
                            dRally_Keyboard_make(7); 
                            dpad_left_pressed = 1;
                        }
                    } 
                    else { // EL DPAD REGRESA AL CENTRO
                        if (dpad_right_pressed) {
                            dRally_Keyboard_break(9);
                            dpad_right_pressed = 0;
                        }
                        if (dpad_left_pressed) {
                            dRally_Keyboard_break(7);
                            dpad_left_pressed = 0;
                        }
                    }
                    break;
            }
        }
    }
}
