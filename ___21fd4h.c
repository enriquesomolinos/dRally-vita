#include "drally.h"

	extern byte ___1a1138h__VESA101h_DefaultScreenBufferB[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a10c0h[];
	extern byte ___18d492h[];
	extern byte ___185ba9h[];
	extern byte ___1a10cch[];
	extern byte ___19f750h[];
	extern byte ___18e298h[];
	extern byte ___185c7ah[];
	extern byte ___1a10b8h[];
	extern byte ___19f75ch[];
	extern byte ___19f760h[];
	extern byte ___19f764h[];
	extern byte ___181c70h[];
	extern byte ___180724h[];

dword ___1f094h_cdecl(dword);
char * itoa_watcom106(int value, char * buffer, int radix);
char * strupr_watcom106(char * s);
void ___12e78h_cdecl(dword, dword, dword, dword);

void ___21fd4h_cdecl(dword A1){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x6c];


	eax = A1;

		D(esp+0x5c) = eax;
		ebp = 0x14c80;
		ebx = 0x17d;
___21ff5h:
		eax = D(___1a1138h__VESA101h_DefaultScreenBufferB);
		eax += ebp;
		esi = eax+0xe1;
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		eax += ebp;
		ecx = ebx;
		edi = eax+0xe1;
		ebp += 0x280;
		memcpy(edi, esi, ecx);
		if(ebp != 0x19500) goto ___21ff5h;
		ebp = 0x20300;
		edx = 0x170;
___22039h:
		eax = D(___1a1138h__VESA101h_DefaultScreenBufferB);
		eax += ebp;
		esi = eax+0xe0;
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		eax += ebp;
		ecx = edx;
		edi = eax+0xe0;
		ebp += 0x280;
		memcpy(edi, esi, ecx);
		if(ebp != 0x34800) goto ___22039h;
		ecx = 0x44;
		edx = 0x280;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a10c0h);
		ebx += 0x14a00;
___2208fh:
		edi = edx;
___22091h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___22099h;
		B(ebx) = L(eax);
___22099h:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___22091h;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___2208fh;
		edx = D(esp+0x5c);
		eax = edx;
		eax <<= 4;
		esi = ___18d492h;
		eax -= edx;
		edi = esp+0x14;
		esi += eax;
		ecx = 0x1559d;
		strcpy(edi, esi);
		eax = esp+0x14;
		ebx = esp+0x14;
		eax = ___1f094h_cdecl(eax);
		eax = (int)eax>>1;
		edx = ___185ba9h;
		ecx -= eax;
		eax = D(___1a10cch);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		edx = D(esp+0x5c);
		esi = 0x20a02;
		eax = 4*edx;
		D(esp+0x64) = esi;
		eax -= edx;
		ebx = 0x20968;
		eax <<= 3;
		ecx = 0x208e4;
		edx = eax+0x870;
		D(esp+0x58) = ebx;
		ebp = edx;
		edx = ___19f750h+edx;
		D(esp+0x50) = ecx;
		D(esp+0x54) = edx;
		edx = ___18e298h;
		eax -= 0x1b0;
		edx += 0x2260;
		D(esp+0x68) = eax;
		D(esp+0x60) = edx;
___22153h:
		esi = D(esp+0x60);
		edi = esp+0x14;
		ecx = D(esp+0x50);
		ebx = esp+0x14;
		edx = ___185c7ah;
		strcpy(edi, esi);
		eax = esp+0x14;
		esi = D(esp+0x54);
		eax = strupr_watcom106(eax);
		eax = D(___1a10b8h);
		edi = esp+0x14;
		___12e78h_cdecl(eax, edx, ebx, ecx);
		strcpy(edi, esi);
		eax = esp+0x14;
		ecx = D(esp+0x58);
		ebx = esp+0x14;
		edx = ___185c7ah;
		eax = strupr_watcom106(eax);
		eax = D(___1a10b8h);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		ebx = 0xa;
		edx = esp;
		eax = D(ebp+___19f75ch);
		eax = itoa_watcom106(eax, edx, ebx);
		ebx = 0xa;
		edx = esp+0x3c;
		eax = D(ebp+___19f760h);
		eax = itoa_watcom106(eax, edx, ebx);
		ebx = 0xa;
		edx = esp+0x28;
		eax = D(ebp+___19f764h);
		edi = esp;
		eax = itoa_watcom106(eax, edx, ebx);
		ecx = strlen(edi);
		if(ecx != 1) goto ___22234h;
		L(eax) = B(esp);
		L(edx) = 0;
		B(esp+1) = L(eax);
		H(eax) = 0x30;
		B(esp+2) = L(edx);
		B(esp) = H(eax);
___22234h:
		edi = esp+0x3c;
		ecx = strlen(edi);
		if(ecx != 1) goto ___2225bh;
		H(edx) = 0x30;
		L(eax) = B(esp+0x3c);
		L(ebx) = 0;
		B(esp+0x3c) = H(edx);
		B(esp+0x3e) = L(ebx);
		B(esp+0x3d) = L(eax);
___2225bh:
		edi = esp+0x28;
		ecx = strlen(edi);
		if(ecx != 1) goto ___22282h;
		H(ebx) = 0x30;
		L(eax) = B(esp+0x28);
		L(ecx) = 0;
		B(esp+0x28) = H(ebx);
		B(esp+0x2a) = L(ecx);
		B(esp+0x29) = L(eax);
___22282h:
		esi = esp;
		edi = esp+0x14;
		strcpy(edi, esi);
		esi = ___181c70h;
		edi = esp+0x14;
		strcat(edi, esi);
		esi = esp+0x3c;
		edi = esp+0x14;
		ebx = esp+0x14;
		strcat(edi, esi);
		esi = ___180724h;
		edi = esp+0x14;
		edx = ___185c7ah;
		strcat(edi, esi);
		esi = esp+0x28;
		edi = esp+0x14;
		ebp -= 0x1b0;
		strcat(edi, esi);
		ecx = D(esp+0x64);
		edi = D(esp+0x58);
		eax = D(___1a10b8h);
		esi = D(esp+0x68);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		eax = D(esp+0x54);
		edx = D(esp+0x50);
		ebx = D(esp+0x60);
		edi += 0x3700;
		ecx = D(esp+0x64);
		D(esp+0x58) = edi;
		eax -= 0x1b0;
		edx += 0x3700;
		ebx -= 0x6e0;
		ecx += 0x3700;
		D(esp+0x54) = eax;
		D(esp+0x50) = edx;
		D(esp+0x60) = ebx;
		D(esp+0x64) = ecx;
		if(ebp != esi) goto ___22153h;

		return;
}
