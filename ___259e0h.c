#include "drally.h"

typedef byte img96x64_t[0x40][0x60];

#define COOXY(x,y) (0x280*(y)+(x))

	extern img96x64_t * ___1a1e7ch;
	extern byte * ___1a112ch__VESA101_ACTIVESCREEN_PTR;

void bpk_decode2(void *, void *);

void ___259e0h_cdecl(int dx, int dy, int aFrameIdx, void * aEncoded, int * aOffsets){

	int 	x, y, offset;

	offset = 0;
	while(aFrameIdx--) offset += aOffsets[aFrameIdx];

	bpk_decode2(___1a1e7ch, aEncoded+offset);

	y = -1;
	while(++y < 0x40){

		x = -1;
		while(++x < 0x60){

			___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(dx+x, dy+y)] = (*___1a1e7ch)[y][x];
		}
	}
}
