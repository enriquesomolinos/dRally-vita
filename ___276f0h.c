#include "drally.h"

	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a1each[];
	extern byte ___1a1ef8h[];
	extern byte ___1a01fch[];
	extern byte ___18e93ch[];
	extern byte ___1a01f4h[];
	extern byte ___1a1eb8h[];
	extern byte ___18643ch[];
	extern byte ___1a0198h[];
	extern byte ___1a1ec0h[];
	extern byte ___18e958h[];
	extern byte ___180728h[];
	extern byte ___191880h[];

void ___259e0h_cdecl(dword, dword, dword, dword, dword);
void ___13094h_cdecl(const char *, dword);
dword ___25180h_cdecl(dword);
void ___12f60h_cdecl(dword, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
char * itoa_watcom106(int value, char * buffer, int radix);

// SHOP TIRES MAX UPGRADE UPDATE
void ___276f0h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp, p5;
	byte 	esp[0x28];


		ecx = 0x60;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1each);
		ebx += 0x278f8;
		edx = ecx;
		L(edx) >>= 0x2;
___2771eh:
		H(ecx) = L(edx);
___27720h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___27720h;
		ebx += 0x280;
		L(edx) <<= 0x2;
		ebx -= edx;
		L(edx) >>= 0x2;
		L(ecx)--;
		if(L(ecx)) goto ___2771eh;
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		edx = 4*eax;
		ebx = D(edx+___1a01fch);
		eax = 8*ebx;
		eax -= ebx;
		eax <<= 0x3;
		eax -= ebx;
		eax <<= 0x5;
		eax = D(eax+___18e93ch);
		ebx = D(edx+___1a01f4h);
		eax--;
		if(eax != ebx) goto ___277ddh;
		ecx = 0x40;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edx = eax;
		eax = D(___1a1eb8h);
		esi = 4*edx;
		ebx += 0x2a0f8;
		esi -= edx;
		eax += 0x6000;
		esi <<= 0xb;
		edx = 0x60;
		esi += eax;
		L(edx) >>= 0x2;
___277b6h:
		H(ecx) = L(edx);
___277b8h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___277b8h;
		ebx += 0x280;
		L(edx) <<= 0x2;
		ebx -= edx;
		L(edx) >>= 0x2;
		L(ecx)--;
		if(L(ecx)) goto ___277b6h;
		goto ___2789fh;
___277ddh:
		eax = 4*ebx;
		eax -= ebx;
		eax <<= 0x4;
		edx = 0x10d;
		eax = ___18643ch+eax;
		ecx = D(ebx*4+___1a0198h);
		p5 = eax;
		ebx = D(___1a1ec0h);
		eax = 0x78;
		___259e0h_cdecl(eax, edx, ebx, ecx, p5);
		edx = D(___1a1ef8h);
		ebx = 8*edx;
		ebx -= edx;
		ebx <<= 0x2;
		ebx -= edx;
		ebx <<= 0x2;
		edx = D(ebx+___1a01fch);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x3;
		eax -= edx;
		edx = eax;
		eax = D(ebx+___1a01f4h);
		edx <<= 0x5;
		ebx = 0xa;
		eax = D(edx+eax*4+___18e958h);
		edx = esp;
		esi = esp;
		eax = itoa_watcom106(eax, edx, ebx);
		X(eax) = W(___180728h);
		edi = esp+0x14;
		W(esp+0x14) = X(eax);
		strcat(edi, esi);
		eax = esp+0x14;
		eax = ___25180h_cdecl(eax);
		edx = eax+0x345f8;
		eax = esp+0x14;
		___12f60h_cdecl(eax, edx);
___2789fh:
		ecx = 0x77;
		ebx = 0x180;
		edx = 0x72;
		eax = 0x90;
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		edx = D(eax*4+___1a01f4h);
		eax = edx;
		eax <<= 0x4;
		eax -= edx;
		eax <<= 0x4;
		edx = 0x136aa;
		eax = ___191880h+eax;
		___13094h_cdecl(eax, edx);
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		edx = D(eax*4+___1a01f4h);
		eax = edx;
		eax <<= 0x4;
		eax -= edx;
		eax <<= 0x4;
		eax = ___191880h+eax;
		edx = 0x15eaa;
		eax += 0x28;
		___13094h_cdecl(eax, edx);
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		edx = D(eax*4+___1a01f4h);
		eax = edx;
		eax <<= 0x4;
		eax -= edx;
		eax <<= 0x4;
		eax = ___191880h+eax;
		edx = 0x186aa;
		eax += 0x50;
		___13094h_cdecl(eax, edx);
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		edx = D(eax*4+___1a01f4h);
		eax = edx;
		eax <<= 0x4;
		eax -= edx;
		eax <<= 0x4;
		eax = ___191880h+eax;
		edx = 0x1aeaa;
		eax += 0x78;
		___13094h_cdecl(eax, edx);
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		edx = D(eax*4+___1a01f4h);
		eax = edx;
		eax <<= 0x4;
		eax -= edx;
		eax <<= 0x4;
		eax = ___191880h+eax;
		edx = 0x1d6aa;
		eax += 0xa0;
		___13094h_cdecl(eax, edx);
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		edx = D(eax*4+___1a01f4h);
		eax = edx;
		eax <<= 0x4;
		eax -= edx;
		eax <<= 0x4;
		eax = ___191880h+eax;
		edx = 0x1feaa;
		eax += 0xc8;
		___13094h_cdecl(eax, edx);
		return;
}
