#include "drally.h"

#pragma pack(1)
typedef struct font_props_s {
	__BYTE__ 	w;
	__BYTE__ 	h;
	__BYTE__ 	props[];
} font_props_t;

	extern font_props_t ___185c0bh;

int ___25138h_cdecl(const char * A1){

	int 	n, offset;

	offset = 0;
	n = -1;
	while(A1[++n]) offset += ___185c0bh.props[A1[n]-0x20];

	return offset;
}
