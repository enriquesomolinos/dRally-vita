#include "drally.h"

	extern byte ___243894h[];
	extern byte ___243330h[];
	extern byte ___243334h[];
	extern byte ___243ca4h[];
	extern byte ___24332ch[];
	extern byte ___243ce8h[];
	extern byte ___1e6fdah[];
	extern byte ___243cd4h[];
	extern byte ___243ca0h[];
	extern byte ___1a10a0h[];
	extern byte ___1a10a8h[];
	extern byte ___1a1094h[];
	extern byte ___1a109ch[];
	extern byte ___182f67h[];
	extern byte ___1a1090h[];
	extern byte ___1a102ch[];
	extern byte ___196d98h[];
	extern byte ___1c9f10h[];
	extern byte ___243d80h[];
	extern byte ___243cf4h[];
	extern byte ___243854h[];
	extern byte ___243d3ch[];
	extern byte ___1de210h[];
	extern byte ___1a1134h[];
	extern byte ___1e6fd8h[];
	extern byte ___243858h[];
	extern byte ___1de598h[];
	extern byte ___182f6fh[];
	extern byte ___182f77h[];
	extern byte ___182f7fh[];
	extern byte ___243d48h[];
	extern byte ___24385ch[];
	extern byte ___243860h[];
	extern byte ___1de580h[];
	extern byte ___1e6fd9h[];
	extern byte ___1c9ec0h[];
	extern byte ___1c9ec4h[];
	extern byte ___1c9ec8h[];
	extern byte ___1c9ecch[];
	extern byte ___1c9ee0h[];
	extern byte ___1c9ef0h[];
	extern byte ___1c9ed0h[];
	extern byte ___1c9f00h[];
	extern byte ___1d8a10h[];
	extern byte ___1d2710h[];
	extern byte ___1c9ee4h[];
	extern byte ___1c9ee8h[];
	extern byte ___1c9eech[];
	extern byte ___1e6f80h[];
	extern byte ___1de584h[];
	extern byte ___182f87h[];
	extern byte ___243338h[];
	extern byte ___2435c4h[];
	extern byte ___1de5ach[];
	extern byte ___1de5b0h[];
	extern byte ___182f8fh[];
	extern byte ___243d34h[];
	extern byte ___1de5a8h[];
	extern byte ___243cdch[];
	extern byte ___243cb8h[];
	extern byte ___1d7810h[];
	extern byte ___1de5b4h[];
	extern byte ___182f97h[];
	extern byte ___182f9fh[];
	extern byte ___1de530h[];
	extern byte ___196de8h[];
	extern byte ___196dech[];
	extern byte ___182ed4h[];
	extern byte ___1de7d0h[];
	extern byte ___196df4h[];
	extern byte ___182fa7h[];
	extern byte ___1d5890h[];
	extern byte ___243d84h[];


void race___40864h(void);
dword ___4256ch_cdecl(dword A1, dword A2, dword A3, dword A4, dword A5, dword A6, dword A7, dword A8);
void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
void ___424c8h_cdecl(dword A1, const char * A2);
double dR_Math_ceil(double);

void race___40f48h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp, P1, P2, P3, P4;
	byte 	esp[0x38];


		eax = D(___243894h);
		edx = D(___243330h);
		eax -= edx;
		D(___243334h) = eax;
		eax = D(___243894h);
		edx = D(___243334h);
		ebx = 0x20000;
		edx <<= 0x10;
		D(___243330h) = eax;
		eax ^= eax;
		eax = (eax >> 0x10)|(edx << 0x10);
		edx = (int)edx>>0x10;
		___idiv32(&eax, &edx, ebx);
		ebx = D(___243ca4h);
		D(___24332ch) = eax;
		if((int)ebx <= 0xbe) goto ___4107dh;
		eax = 0x35e*D(___243ce8h);
		if(D(eax+___1e6fdah) != 0) goto ___4107dh;
		ebx = 0x46;
		eax = D(___243334h);
		edi = D(___243cd4h);
		ebp = D(___243ca0h);
		edi += eax;
		ebp += eax;
		edx = edi;
		eax = edi;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		edx = eax;
		ecx = 0x3c;
		edx = (int)edx>>0x1f;
		ebx = eax;
		___idiv32(&eax, &edx, ecx);
		D(___1a10a0h) = eax;
		edx = ebx;
		eax = ebx;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ecx);
		ebx = 0x46;
		D(___1a10a8h) = edx;
		edx = edi;
		eax = edi;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		D(esp) = edx;
		edx = ebp;
		eax = ebp;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		edx = eax;
		edx = (int)edx>>0x1f;
		ebx = eax;
		___idiv32(&eax, &edx, ecx);
		D(___1a1094h) = eax;
		edx = ebx;
		eax = ebx;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ecx);
		ebx = 0x46;
		D(___1a109ch) = edx;
		edx = ebp;
		eax = ebp;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		FPUSH(F64(___182f67h));
		FPUSH((int)D(esp));
		ST(0) = ST(0)*ST(1);
		D(esp) = edx;
		FPUSH((int)D(esp));
		ST(2) = ST(2)*ST(0); FPOP();
		D(___243cd4h) = edi;
		D(___243ca0h) = ebp;
		ST(0) = (int)ST(0);
		D(___1a1090h) = (int)FPOP();
		ST(0) = (int)ST(0);
		D(___1a102ch) = (int)FPOP();
___4107dh:
		if((int)D(___196d98h) >= 0x40) goto ___4108bh;
		race___40864h();
___4108bh:
		ebx = ___1c9f10h;
		edx ^= edx;
		ebp = 0x10;
___41097h:
		eax = D(___243d80h);
		ecx = D(___196d98h);
		esi = ebx;
		edi = eax+edx;
		ebx += 0x40;
		eax = 0x40;
		edi += 0x60;
		eax -= ecx;
		ecx = ebp;
		edi -= eax;
		edx += 0x200;
		while(ecx--||++ecx){ D(edi) = D(esi); edi += 4; esi += 4; }
		if(edx != 0x19000) goto ___41097h;
		esi = D(___243cf4h);
		ebp ^= ebp;
		if((int)esi <= 0) goto ___41159h;
		D(esp+0x1c) = ebp;
		edi ^= edi;
___410deh:
		eax = 0x35e*D(edi+___243854h);
		if(D(eax+___1e6fdah) == 0) goto ___4113eh;
		ecx = D(esp+0x1c);
		eax = 0x40;
		edx = 0x16;
		ebx = D(___243d80h);
		esi = D(___196d98h);
		ebx += 0x9c64;
		eax -= esi;
		esi = D(___243d3ch);
		ebx += ecx;
		ecx = 0x1c;
		ebx -= eax;
___41122h:
		H(ecx) = L(edx);
___41124h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___4112ch;
		B(ebx) = L(eax);
___4112ch:
		ebx++;
		esi++;
		H(ecx)--;
		if(H(ecx)) goto ___41124h;
		ebx += 0x200;
		ebx -= edx;
		L(ecx)--;
		if(L(ecx)) goto ___41122h;
___4113eh:
		eax = D(esp+0x1c);
		edx = D(___243cf4h);
		edi += 0x4;
		eax += 0x4000;
		ebp++;
		D(esp+0x1c) = eax;
		if((int)ebp < (int)edx) goto ___410deh;
___41159h:
		eax = D(___243cf4h);
		eax--;
		D(esp+0x10) = eax;
		if((int)eax >= 3) goto ___411f7h;
		eax <<= 0xe;
		eax += 0xd060;
		D(esp+0x30) = eax;
		ebp = 0x40;
___4117dh:
		edi ^= edi;
		esi = D(esp+0x30);
		D(esp+0x34) = edi;
___41187h:
		ebx = 0x2;
		edx = edi;
		eax = edi;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		if((int)edx >= 0x40) goto ___411c4h;
		ecx = D(esp+0x34);
___4119eh:
		ebx = D(___196d98h);
		eax = ebp;
		eax -= ebx;
		ebx = esi;
		ebx -= eax;
		eax = ebx;
		ebx = D(___243d80h);
		eax += ebx;
		eax += ecx;
		B(edx+eax) = 0;
		edx += 0x2;
		if((int)edx < 0x40) goto ___4119eh;
___411c4h:
		ecx = D(esp+0x34);
		ecx += 0x200;
		edi++;
		D(esp+0x34) = ecx;
		if((int)edi < 0x20) goto ___41187h;
		edi = D(esp+0x30);
		eax = D(esp+0x10);
		edi += 0x4000;
		eax++;
		D(esp+0x30) = edi;
		D(esp+0x10) = eax;
		if((int)edi < 0x19060) goto ___4117dh;
___411f7h:
		ebx = 0x40;
		eax = D(___243d80h);
		ecx = D(___196d98h);
		eax += 0xb475;
		ebx -= ecx;
		esi = ___1de210h;
		eax -= ebx;
		edx = D(___1a1134h);
		ebx = eax;
		eax = 4*edx;
		ebp = 0x1;
		eax += edx;
		ecx = 0xa;
		eax <<= 0x4;
		edx = 0x8;
		esi += eax;
		edi = 0xf400;
		goto ___4126dh;
___41241h:
		eax = D(___243d80h);
		eax += edi;
		eax += 0x7a;
		eax -= ebx;
		ebx = eax;
		esi = 0x50*D(___1a1134h);
		ecx = 0xa;
		edx = 0x8;
		ebp++;
		esi = ___1de210h+esi;
		edi += 0x4000;
___4126dh:
		H(ecx) = L(edx);
___4126fh:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___41277h;
		B(ebx) = L(eax);
___41277h:
		ebx++;
		esi++;
		H(ecx)--;
		if(H(ecx)) goto ___4126fh;
		ebx += 0x200;
		ebx -= edx;
		L(ecx)--;
		if(L(ecx)) goto ___4126dh;
		ebx = 0x40;
		edx = D(___196d98h);
		ecx = D(___243cf4h);
		ebx -= edx;
		if((int)ebp < (int)ecx) goto ___41241h;
		eax = D(___243d80h);
		eax += 0xb462;
		eax -= ebx;
		esi = D(___243854h);
		ebx = eax;
		eax = 0x35e*esi;
		edx ^= edx;
		L(edx) = B(eax+___1e6fd8h);
		eax = 4*edx;
		ecx = 0xa;
		eax += edx;
		esi = ___1de210h;
		eax <<= 0x4;
		edx = 0x8;
		esi += eax;
		edi = 0x1;
___412e4h:
		H(ecx) = L(edx);
___412e6h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___412eeh;
		B(ebx) = L(eax);
___412eeh:
		ebx++;
		esi++;
		H(ecx)--;
		if(H(ecx)) goto ___412e6h;
		ebx += 0x200;
		ebx -= edx;
		L(ecx)--;
		if(L(ecx)) goto ___412e4h;
		ebp = D(___243cf4h);
		D(esp+0x24) = edi;
		if((int)ebp <= (int)edi) goto ___4139ah;
		ebp = 0xf400;
		edi = 0x4;
___4131ch:
		ebx = 0x40;
		eax = D(___243d80h);
		edx = D(___196d98h);
		eax += ebp;
		ebx -= edx;
		eax += 0x64;
		eax -= ebx;
		ecx = D(edi+___243854h);
		ebx = eax;
		eax = 0x35e*ecx;
		L(eax) = B(eax+___1e6fd8h);
		eax &= 0xff;
		eax = 0x50*eax;
		esi = ___1de210h;
		ecx = 0xa;
		edx = 0x8;
		esi += eax;
		edi += 0x4;
___41365h:
		H(ecx) = L(edx);
___41367h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___4136fh;
		B(ebx) = L(eax);
___4136fh:
		ebx++;
		esi++;
		H(ecx)--;
		if(H(ecx)) goto ___41367h;
		ebx += 0x200;
		ebx -= edx;
		L(ecx)--;
		if(L(ecx)) goto ___41365h;
		esi = D(esp+0x24);
		ebp += 0x4000;
		esi++;
		edx = D(___243cf4h);
		D(esp+0x24) = esi;
		if((int)esi < (int)edx) goto ___4131ch;
___4139ah:
		if((int)D(___243cf4h) <= 1) goto ___41444h;
		edx = D(___243858h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		FPUSH((int)D(4*eax+___1de598h));
		ST(0) = ST(0)*F64(___182f6fh);
		ST(0) = dR_Math_ceil(ST(0));
		ST(0) = ST(0)/F64(___182f77h);
		ebp = 0xd000;
		ST(0) = F64(___182f7fh)-ST(0);
		edx ^= edx;
		ST(0) = (int)ST(0);
		D(esp+0x2c) = (int)FPOP();
		ebx = 0x40;
___413f4h:
		ecx = D(esp+0x2c);
		esi = D(___243d48h);
		eax = D(___243d80h);
		edi = ebx;
		esi += edx;
		eax += ebp;
		esi += 0x40;
		eax += 0xa0;
		esi -= ecx;
		eax -= ecx;
		edi -= D(___196d98h);
		ebp += 0x200;
		eax -= edi;
		ecx = D(esp+0x2c);
		edi = eax;
		edx += 0x40;
		memcpy(edi, esi, ecx);
		if(edx != 0x240) goto ___413f4h;
___41444h:
		if((int)D(___243cf4h) <= 2) goto ___414f0h;
		edx = D(___24385ch);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		FPUSH((int)D(4*eax+___1de598h));
		ST(0) = ST(0)*F64(___182f6fh);
		ST(0) = dR_Math_ceil(ST(0));
		ST(0) = ST(0)/F64(___182f77h);
		ebx = 0x11000;
		ST(0) = F64(___182f7fh)-ST(0);
		edx ^= edx;
		ST(0) = (int)ST(0);
		D(esp+0x28) = (int)FPOP();
		ebp = 0x40;
___4149eh:
		edi = D(esp+0x28);
		esi = D(___243d48h);
		eax = D(___243d80h);
		ecx = D(___196d98h);
		esi += edx;
		eax += ebx;
		esi += 0x40;
		eax += 0xa0;
		esi -= edi;
		eax -= edi;
		edi = ebp;
		edi -= ecx;
		ebx += 0x200;
		eax -= edi;
		ecx = D(esp+0x28);
		edi = eax;
		edx += 0x40;
		memcpy(edi, esi, ecx);
		if(edx != 0x240) goto ___4149eh;
___414f0h:
		if((int)D(___243cf4h) <= 3) goto ___4159ch;
		edx = D(___243860h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		FPUSH((int)D(4*eax+___1de598h));
		ST(0) = ST(0)*F64(___182f6fh);
		ST(0) = dR_Math_ceil(ST(0));
		ST(0) = ST(0)/F64(___182f77h);
		ebx = 0x15000;
		ST(0) = F64(___182f7fh)-ST(0);
		edx ^= edx;
		ST(0) = (int)ST(0);
		D(esp+0x20) = (int)FPOP();
		ebp = 0x40;
___4154ah:
		edi = D(esp+0x20);
		esi = D(___243d48h);
		eax = D(___243d80h);
		ecx = D(___196d98h);
		esi += edx;
		eax += ebx;
		esi += 0x40;
		eax += 0xa0;
		esi -= edi;
		eax -= edi;
		edi = ebp;
		edi -= ecx;
		ebx += 0x200;
		eax -= edi;
		ecx = D(esp+0x20);
		edi = eax;
		edx += 0x40;
		memcpy(edi, esi, ecx);
		if(edx != 0x240) goto ___4154ah;
___4159ch:
		edx = D(___243854h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		eax <<= 0x2;
		eax = ___1de580h+eax;
		edx = eax+0x44;
		esi = D(___196d98h);
		eax = 0x40;
		ebx = 0x463;
		eax -= esi;
		ebx -= eax;
		eax = ebx;
		___424c8h_cdecl(eax, edx);
		ebx = 0x1;
		if((int)ebx >= (int)D(___243cf4h)) goto ___4162bh;
		ecx = 0x4;
		esi = 0xd463;
___415edh:
		eax = 0x94*D(ecx+___243854h);
		eax = ___1de580h+eax;
		edx = eax+0x44;
		edi = D(___196d98h);
		eax = 0x40;
		eax -= edi;
		edi = esi;
		edi -= eax;
		ecx += 0x4;
		eax = edi;
		ebx++;
		___424c8h_cdecl(eax, edx);
		ebp = D(___243cf4h);
		esi += 0x4000;
		if((int)ebx < (int)ebp) goto ___415edh;
___4162bh:
		eax = 0x35e*D(___243854h);
		L(eax) = B(eax+___1e6fd9h);
		eax &= 0xff;
		ebx = D(___243858h);
		D(___1c9ec0h) = eax;
		eax = 0x35e*ebx;
		L(eax) = B(eax+___1e6fd9h);
		eax &= 0xff;
		ecx = D(___24385ch);
		D(___1c9ec4h) = eax;
		eax = 0x35e*ecx;
		L(eax) = B(eax+___1e6fd9h);
		eax &= 0xff;
		esi = D(___243860h);
		D(___1c9ec8h) = eax;
		eax = 0x35e*esi;
		L(eax) = B(eax+___1e6fd9h);
		esi = 0x8000;
		ecx = 0xffffffff;
		eax &= 0xff;
		ebx ^= ebx;
		D(___1c9ecch) = eax;
___416a5h:
		edi = D(ebx+___1c9ee0h);
		if((int)edi <= (int)D(ebx+___1c9ec0h)) goto ___416e8h;
		eax = edi+ecx;
		eax = 7*eax;
		eax <<= 0x10;
		D(ebx+___1c9ef0h) = eax;
		eax = D(ebx+___1c9ec0h);
		eax += ecx;
		eax = 7*eax;
		ebp = D(ebx+___1c9ec0h);
		D(ebx+___1c9ed0h) = eax;
		eax = edi;
		eax -= ebp;
		eax = 0-eax;
		eax <<= 0x10;
		D(ebx+___1c9f00h) = eax;
___416e8h:
		edx = D(ebx+___1c9ee0h);
		if((int)edx >= (int)D(ebx+___1c9ec0h)) goto ___41727h;
		eax = edx+ecx;
		eax = 7*eax;
		eax <<= 0x10;
		D(ebx+___1c9ef0h) = eax;
		eax = D(ebx+___1c9ec0h);
		eax += ecx;
		eax = 7*eax;
		D(ebx+___1c9ed0h) = eax;
		eax = D(ebx+___1c9ec0h);
		eax -= edx;
		eax <<= 0x10;
		D(ebx+___1c9f00h) = eax;
___41727h:
		eax = D(ebx+___1c9f00h);
		eax += esi;
		eax = (int)eax>>0x10;
		if((int)eax <= 0) goto ___41770h;
		edx = D(___24332ch);
		eax = D(ebx+___1c9f00h);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax >> 0x10)|(edx << 0x10);
		edi = D(ebx+___1c9ef0h);
		edi += eax;
		D(ebx+___1c9ef0h) = edi;
		eax = edi+esi;
		ebp = D(ebx+___1c9ed0h);
		eax = (int)eax>>0x10;
		if((int)eax <= (int)ebp) goto ___417bch;
		goto ___417a8h;
___41770h:
		edx = D(___24332ch);
		eax = D(ebx+___1c9f00h);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax >> 0x10)|(edx << 0x10);
		ebp = D(ebx+___1c9ef0h);
		ebp += eax;
		D(ebx+___1c9ef0h) = ebp;
		eax = esi+ebp;
		edx = D(ebx+___1c9ed0h);
		eax = (int)eax>>0x10;
		if((int)eax >= (int)edx) goto ___417bch;
___417a8h:
		eax = D(ebx+___1c9ec0h);
		eax += ecx;
		eax = 7*eax;
		eax <<= 0x10;
		D(ebx+___1c9ef0h) = eax;
___417bch:
		ebx += 0x4;
		if(ebx != 0x10) goto ___416a5h;
		ebx = 0x40;
		eax = D(___243d80h);
		edx = D(___196d98h);
		eax += 0x9080;
		ebx -= edx;
		eax -= ebx;
		ebx = eax;
		eax = D(___1c9ef0h);
		eax += 0x8000;
		esi = ___1d8a10h;
		eax = (int)eax>>0x10;
		ecx = 0x20;
		eax <<= 0xa;
		edx = ecx;
		esi += eax;
		ebp = 0x1;
		L(edx) >>= 2;
___41809h:
		H(ecx) = L(edx);
___4180bh:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___4180bh;
		ebx += 0x200;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___41809h;
		if((int)ebp >= (int)D(___243cf4h)) goto ___418cah;
		eax = 0xe000;
		edi = 0x4;
		D(esp+0x18) = eax;
___41845h:
		ebx = 0x40;
		ebx -= D(___196d98h);
		esi = D(edi+___1c9ef0h);
		esi += 0x8000;
		esi = (int)esi>>0x10;
		esi = 0x240*esi;
		ecx = D(esp+0x18);
		eax = D(___243d80h);
		eax += ecx;
		eax += 0x88;
		ecx = 0x18;
		eax -= ebx;
		edx = ecx;
		ebx = eax;
		esi = ___1d2710h+esi;
		edi += 0x4;
		L(edx) >>= 2;
___4188ch:
		H(ecx) = L(edx);
___4188eh:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___4188eh;
		ebx += 0x200;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___4188ch;
		eax = D(esp+0x18);
		ebp++;
		eax += 0x4000;
		edx = D(___243cf4h);
		D(esp+0x18) = eax;
		if((int)ebp < (int)edx) goto ___41845h;
___418cah:
		eax = 0x35e*D(___243854h);
		L(eax) = B(eax+___1e6fd9h);
		eax &= 0xff;
		ecx = D(___243858h);
		D(___1c9ee0h) = eax;
		eax = 0x35e*ecx;
		L(eax) = B(eax+___1e6fd9h);
		eax &= 0xff;
		esi = D(___24385ch);
		D(___1c9ee4h) = eax;
		eax = 0x35e*esi;
		L(eax) = B(eax+___1e6fd9h);
		eax &= 0xff;
		edi = D(___243860h);
		D(___1c9ee8h) = eax;
		eax = 0x35e*edi;
		L(eax) = B(eax+___1e6fd9h);
		ebp = D(___243ce8h);
		ebx = 0x35e*ebp;
		eax &= 0xff;
		D(___1c9eech) = eax;
		eax = 8*ebp;
		eax += ebp;
		eax <<= 0x2;
		eax += ebp;
		FPUSH(F32(ebx+___1e6f80h));
		ST(0) = ST(0)/(double)F32(4*eax+___1de584h);
		ST(0) = ST(0)*F64(___182f87h);
		ST(0) = (int)ST(0);
		D(esp) = (int)FPOP();
		eax = D(esp);
		eax++;
		if((int)eax >= 1) goto ___4197bh;
		eax = 0x1;
___4197bh:
		ebp = 4*eax;
		goto ___419f0h;
___41984h:
		ebx = 0x21;
		eax = D(ebp+___243338h);
		edi = D(___243d80h);
		ebx -= eax;
		eax <<= 0x9;
		edi += eax;
		edx = D(ebp+___2435c4h);
		edi += 0x60;
		edi += edx;
		eax = 0x20;
		edi -= ecx;
		ecx ^= ecx;
		ebp += 0x4;
		H(ecx) = L(ecx);
		L(ecx) = L(ebx);
		L(eax) -= L(edx);
		X(eax) <<= 8;
		X(edx) = (short)X(eax)>>0xf;
		___idiv16(&eax, &edx, X(ebx));
		X(esi) = X(eax);
		eax ^= eax;
___419c7h:
		X(eax) += X(esi);
		X(edx) = (short)X(eax)>>0xf;
		edx <<= 0x10;
		X(edx) = (short)X(eax)>>0xf;
		L(edx) = H(eax);
		if((signed char)B(edi+edx) < 0x40) goto ___419dch;
		B(edi+edx) = H(ecx);
___419dch:
		edi++;
		if((signed char)B(edi+edx) < 0x40) goto ___419e6h;
		B(edi+edx) = H(ecx);
___419e6h:
		edi += 0x1ff;
		L(ecx)--;
		if(L(ecx)) goto ___419c7h;
___419f0h:
		ecx = 0x40;
		ecx -= D(___196d98h);
		if((int)ebp < 0x288) goto ___41984h;
		edx = D(___243ce8h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		edx += eax;
		edx <<= 0x2;
		ebx = D(edx+___1de5ach);
		if((int)ebx == 0) goto ___41afdh;
		FPUSH((int)D(edx+___1de5b0h));
		ST(0) = ST(0)*F64(___182f8fh);
		ST(0) = (int)ST(0);
		D(esp+0xc) = (int)FPOP();
		if((int)D(esp+0xc) >= 0) goto ___41a4ah;
		ebp ^= ebp;
		D(esp+0xc) = ebp;
___41a4ah:
		edx = 0x37;
		ecx = 0x40;
		edi = 0x3;
		eax = D(___243d80h);
		esi = D(___196d98h);
		ebx ^= ebx;
		eax += 0x5e64;
		ecx -= esi;
		L(ebx) = B(esp+0xc);
		eax -= ecx;
		edx -= ebx;
		ebx += eax;
		eax ^= eax;
		ebp ^= ebp;
		if(edx == 0) goto ___41a92h;
___41a7fh:
		ecx = edx;
___41a81h:
		B(ebx) = L(eax);
		ebx++;
		ecx--;
		if(ecx) goto ___41a81h;
		ebx += 0x200;
		ebx -= edx;
		edi--;
		if(edi) goto ___41a7fh;
___41a92h:
		edi ^= edi;
		goto ___41ae5h;
___41a96h:
		edx = 0x8;
		eax = D(___243d80h);
		ecx = D(___196d98h);
		eax += 0x5200;
		esi = D(___243d34h);
		ebx = eax+ebp;
		edi++;
		eax = 0x40;
		ebx += 0x60;
		eax -= ecx;
		ecx = 0x6;
		ebx -= eax;
		ebp += 0x8;
___41ac9h:
		H(ecx) = L(edx);
___41acbh:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___41ad3h;
		B(ebx) = L(eax);
___41ad3h:
		ebx++;
		esi++;
		H(ecx)--;
		if(H(ecx)) goto ___41acbh;
		ebx += 0x200;
		ebx -= edx;
		L(ecx)--;
		if(L(ecx)) goto ___41ac9h;
___41ae5h:
		eax = 0x94*D(___243ce8h);
		if((int)edi >= (int)D(eax+___1de5a8h)) goto ___41cebh;
		goto ___41a96h;
___41afdh:
		edx = 0x587b;
		edx -= ecx;
		if((int)D(___243cdch) <= 0) goto ___41c12h;
		P1 = ebx;
		P2 = 0xfffffffa;
		eax = D(___243cb8h);
		P3 = edx;
		edx = eax;
		ebx = 0x46;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		edx = eax;
		ebx = 0x3c;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		P4 = 0x10;
		ebx = 0x6;
		ecx = eax;
		eax = ___1d7810h;
		edx = ebx;
		eax = ___4256ch_cdecl(eax, edx, ebx, ecx, P4, P3, P2, P1);
		P1 = 0;
		eax = 0x40;
		ebp = D(___196d98h);
		edx = 0x5889;
		eax -= ebp;
		P2 = 6;
		edx -= eax;
		eax = D(___243cb8h);
		P3 = edx;
		edx = eax;
		ebx = 0x46;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		edx = eax;
		ebx = 0x3c;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		P4 = 0x10;
		ebx = 0x6;
		eax = ___1d7810h;
		ecx = edx;
		edx = ebx;
		eax = ___4256ch_cdecl(eax, edx, ebx, ecx, P4, P3, P2, P1);
		eax = 0x40;
		edx = D(___196d98h);
		P1 = 0;
		eax -= edx;
		edx = 0x5897;
		P2 = 6;
		edx -= eax;
		eax = D(___243cb8h);
		P3 = edx;
		edx = eax;
		ebx = 0x46;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		D(esp) = edx;
		FPUSH((int)D(esp));
		ST(0) = ST(0)*F64(___182f67h);
		P4 = 0x10;
		ebx = 0x6;
		eax = ___1d7810h;
		edx = ebx;
		ST(0) = (int)ST(0);
		D(esp) = (int)FPOP();
		ecx = D(esp);
		eax = ___4256ch_cdecl(eax, edx, ebx, ecx, P4, P3, P2, P1);
		eax = D(___243334h);
		ebx = D(___243cdch);
		ebx -= eax;
		D(___243cdch) = ebx;
		if((int)ebx >= 0) goto ___41cebh;
		esi ^= esi;
		D(___243cdch) = esi;
		goto ___41cebh;
___41c12h:
		P1 = ebx;
		P2 = 0xfffffffa;
		eax = D(___243ca0h);
		P3 = edx;
		edx = eax;
		ebx = 0x46;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		edx = eax;
		ebx = 0x3c;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		P4 = 0x10;
		ebx = 0x6;
		ecx = eax;
		eax = ___1d7810h;
		edx = ebx;
		eax = ___4256ch_cdecl(eax, edx, ebx, ecx, P4, P3, P2, P1);
		P1 = 0;
		eax = 0x40;
		esi = D(___196d98h);
		edx = 0x5889;
		eax -= esi;
		P2 = 6;
		edx -= eax;
		eax = D(___243ca0h);
		P3 = edx;
		edx = eax;
		ebx = 0x46;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		edx = eax;
		ebx = 0x3c;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		P4 = 0x10;
		ebx = 0x6;
		eax = ___1d7810h;
		ecx = edx;
		edx = ebx;
		eax = ___4256ch_cdecl(eax, edx, ebx, ecx, P4, P3, P2, P1);
		P1 = 0;
		eax = 0x40;
		edi = D(___196d98h);
		edx = 0x5897;
		eax -= edi;
		P2 = 6;
		edx -= eax;
		eax = D(___243ca0h);
		P3 = edx;
		edx = eax;
		ebx = 0x46;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		D(esp) = edx;
		FPUSH((int)D(esp));
		ST(0) = ST(0)*F64(___182f67h);
		P4 = 0x10;
		ebx = 0x6;
		eax = ___1d7810h;
		edx = ebx;
		ST(0) = (int)ST(0);
		D(esp) = (int)FPOP();
		ecx = D(esp);
		eax = ___4256ch_cdecl(eax, edx, ebx, ecx, P4, P3, P2, P1);
___41cebh:
		edx = D(___243ce8h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		FPUSH((int)D(4*eax+___1de5b4h));
		ST(0) = ST(0)*F64(___182f97h);
		ST(0) = (int)ST(0);
		D(esp+4) = (int)FPOP();
		if((int)D(esp+4) >= 0) goto ___41d22h;
		edi ^= edi;
		D(esp+0x4) = edi;
___41d22h:
		edx = 0x3a;
		ecx = 0x40;
		edi = 0x7;
		ebx = D(___243d80h);
		ebp = D(___196d98h);
		eax ^= eax;
		ebx += 0x4464;
		ecx -= ebp;
		L(eax) = B(esp+4);
		ebx -= ecx;
		edx -= eax;
		ebx += eax;
		eax ^= eax;
		if(edx == 0) goto ___41d6fh;
___41d57h:
		ecx = edx;
___41d59h:
		if((signed char)B(ebx) < 0x40) goto ___41d60h;
		B(ebx) = L(eax);
___41d60h:
		ebx++;
		ecx--;
		if(ecx) goto ___41d59h;
		ebx += 0x200;
		ebx -= edx;
		edi--;
		if(edi) goto ___41d57h;
___41d6fh:
		edx = D(___243ce8h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		FPUSH((int)D(4*eax+___1de598h));
		ST(0) = ST(0)*F64(___182f6fh);
		ebx = 0xa;
		ST(0) = dR_Math_ceil(ST(0));
		P1 = 0xfffffff0;
		eax = 0x40;
		edx = D(___196d98h);
		ST(0) = F64(___182f9fh)-ST(0);
		P2 = 0xfffffff8;
		eax -= edx;
		edx = 0x8e6e;
		ST(0) = (int)ST(0);
		edx -= eax;
		D(esp) = (int)FPOP();
		P3 = edx;
		ecx = D(esp);
		eax = ___1de210h;
		P4 = 0;
		edx = 0x8;
		esi = ___1de530h;
		eax = ___4256ch_cdecl(eax, edx, ebx, ecx, P4, P3, P2, P1);
		ecx = 0xa;
		ebx = D(___243d80h);
		edx = 0x8;
		ebx += eax;
___41df4h:
		H(ecx) = L(edx);
___41df6h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___41dfeh;
		B(ebx) = L(eax);
___41dfeh:
		ebx++;
		esi++;
		H(ecx)--;
		if(H(ecx)) goto ___41df6h;
		ebx += 0x200;
		ebx -= edx;
		L(ecx)--;
		if(L(ecx)) goto ___41df4h;
		edx = D(___243ce8h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		if((int)D(4*eax+___1de598h) >= 0x5000) goto ___41e64h;
		if(D(___196de8h) != 0) goto ___41e5ah;
		ecx = 0x10000;
		edx = 0x1;
		eax = 0x2;
		ebx ^= ebx;
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x50000, 0x8000);
___41e5ah:
		D(___196de8h) = 1;
___41e64h:
		edx = D(___243ce8h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		if((int)D(4*eax+___1de598h) >= 0x2800) goto ___41eb8h;
		if(D(___196dech) != 0) goto ___41eaeh;
		ecx = 0x10000;
		edx = 0x1;
		eax = 0x2;
		ebx ^= ebx;
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x50000, 0x8000);
___41eaeh:
		D(___196dech) = 1;
___41eb8h:
		edx = D(___243ce8h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		if(D(4*eax+___1de598h) != 0) goto ___41f32h;
		edx = D(___243ce8h);
		eax = 4*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		eax <<= 0x2;
		edx = ___182ed4h;
		eax = ___1de7d0h+eax;
		eax = strcmp(eax, edx);
		if(eax) goto ___41f32h;
		ebx = D(___196df4h);
		if(ebx) goto ___41f28h;
		ecx = 0x10000;
		edx = 0x20;
		eax = 0x2;
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x50000, 0x8000);
___41f28h:
		D(___196df4h) = 1;
___41f32h:
		edx = D(___243ce8h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		FPUSH((int)D(4*eax+___1de598h));
		ST(0) = ST(0)/F64(___182fa7h);
		ST(0) = dR_Math_ceil(ST(0));
		ST(0) = (int)ST(0);
		D(esp+8) = (int)FPOP();
		if((int)D(esp+8) >= 0) goto ___41f74h;
		edi ^= edi;
		D(esp+0x8) = edi;
___41f74h:
		eax = 0x40;
		ebx = D(___243d80h);
		ebp = D(___196d98h);
		ebx += 0x6460;
		eax -= ebp;
		edx = D(esp+0x8);
		ebx -= eax;
		eax = 4*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		esi = 0x1a40;
		eax <<= 0x6;
		ecx = 0x15;
		esi -= eax;
		edx = 0x40;
		esi = ___1d5890h+esi;
		L(edx) >>= 2;
___41fbeh:
		H(ecx) = L(edx);
___41fc0h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___41fc0h;
		ebx += 0x200;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___41fbeh;
		eax = D(___243cf4h);
		edi ^= edi;
		if((int)eax <= 0) goto ___42072h;
		ebp = 0x9000;
		D(esp+0x14) = edi;
___41ff8h:
		eax = D(esp+0x14);
		eax = 0x94*D(eax+___243854h);
		if((int)D(eax+___1de598h) > 0) goto ___42056h;
		ebx = 0x40;
		edx = 0x40;
		eax = D(___243d80h);
		ecx = D(___196d98h);
		eax += ebp;
		ebx -= ecx;
		eax += 0x60;
		esi = D(___243d84h);
		eax -= ebx;
		ecx = 0x20;
		ebx = eax;
___4203ah:
		H(ecx) = L(edx);
___4203ch:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___42044h;
		B(ebx) = L(eax);
___42044h:
		ebx++;
		esi++;
		H(ecx)--;
		if(H(ecx)) goto ___4203ch;
		ebx += 0x200;
		ebx -= edx;
		L(ecx)--;
		if(L(ecx)) goto ___4203ah;
___42056h:
		edx = D(esp+0x14);
		ebx = D(___243cf4h);
		ebp += 0x4000;
		edx += 0x4;
		edi++;
		D(esp+0x14) = edx;
		if((int)edi < (int)ebx) goto ___41ff8h;
___42072h:
		return;
}
