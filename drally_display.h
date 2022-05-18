#ifndef __DRALLY_DISPLAY_H
#define __DRALLY_DISPLAY_H

#ifdef PSVITA
#define W_WIDTH 	320//1024//800//1024//640
#define W_HEIGHT 	200//768//600//768//480
#endif // PSVITA
#ifndef PSVITA
#define W_WIDTH 	1024//800//640
#define W_HEIGHT 	768//600//480
#endif 

enum { VGA3, VGA13, VESA101 };
enum { W_SHRINK, W_LETTERBOX};


void dRally_Display_init(int mode);
void dRally_Display_clean(void);

#endif // __DRALLY_DISPLAY
