#ifndef __DRALLY_DISPLAY_H
#define __DRALLY_DISPLAY_H

#if defined(PSVITA)
#define W_WIDTH 	320 // PSVita specific width
#define W_HEIGHT 	200 // PSVita specific height
#elif defined(SWITCH)
#define W_WIDTH 	1280 // Switch specific width (720p)
#define W_HEIGHT 	720  // Switch specific height (720p)
#else // Default for other platforms (e.g., PC)
#define W_WIDTH 	1024//800//640
#define W_HEIGHT 	768//600//480
#endif // defined(PSVITA) || defined(SWITCH)

enum { VGA3, VGA13, VESA101 };
enum { W_SHRINK, W_LETTERBOX};


void dRally_Display_init(int mode);
void dRally_Display_clean(void);

#endif // __DRALLY_DISPLAY
