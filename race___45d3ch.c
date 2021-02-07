#include "drally.h"

	extern byte ___1a51d0h[];
	extern byte ___1a3fc0h[];
	extern byte ___243ce8h[];
	extern byte ___1a42c0h[];
	extern byte ___1a54d0h[];
	extern byte ___243d80h[];
	extern byte ___196e74h[];
	extern byte ___196e78h[];
	extern byte ___243898h[];
	extern byte ___243308h[];
	extern byte ___2432ech[];
	extern byte ___2432f8h[];
	extern byte ___243304h[];
	extern byte ___2432f4h[];
	extern byte ___2432f0h[];
	extern byte ___196e70h[];
	extern byte ___243874h[];
	extern byte ___243894h[];
	extern byte ___243878h[];
	extern byte ___243330h[];
	extern byte VGA13_ACTIVESCREEN[];

void __DISPLAY_SET_PALETTE_COLOR(dword b, dword g, dword r, dword n);
void dRally_Sound_setMasterVolume(dword vol);
void __VGA13_PRESENTSCREEN__(void);
void race___46738h__VGA13_PRESENTCLEARSCREEN(void);
void ___58c60h(void);

double dR_Math_sin(double);
double dR_Math_cos(double);

void race___45d3ch(void){

	double 	d_tmp;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp, rr, gg, bb, nn;
	byte 	esp[0x50];


		memcpy(___1a3fc0h, ___1a51d0h, 0x300);
		ebx = D(___243ce8h);
		eax = 4*ebx;
		eax += ebx;
		eax += eax;
		edi = eax+0x18;
		edx ^= edx;
		eax += 0xf;
		D(esp+0x1c) = edi;
		D(esp+0x18) = eax;
		D(esp+0x20) = eax;
		ecx = 0x100;
___45d9dh:
		ebx ^= ebx;
		esi ^= esi;
		D(esp+0x10) = ebx;
___45da5h:
		eax = D(esp+0x10);
		if((int)eax < (int)D(esp+0x20)) goto ___45e32h;
		if((int)eax > (int)D(esp+0x1c)) goto ___45e32h;
		eax = eax+2*eax;
		ebx ^= ebx;
		L(ebx) = B(eax+___1a3fc0h);
		ebx = ebx*edx;
		ebx += 0x80;
		ebx = (int)ebx>>0x8;
		D(esp+0xc) = ebx;
		ebx ^= ebx;
		L(ebx) = B(eax+___1a3fc0h+1);
		ebx = ebx*edx;
		ebx += 0x80;
		ebx = (int)ebx>>0x8;
		L(eax) = B(eax+___1a3fc0h+2);
		D(esp+0x8) = ebx;
		FPUSH(90.0f);
		FPUSH((int)D(esp+0xc));
		ST(0) = ST(0)/ST(1);
		FPUSH((int)D(esp+0x8));
		ST(0) = ST(0)/ST(2);
		eax &= 0xff;
		eax = eax*edx;
		eax += 0x80;
		eax = (int)eax>>0x8;
		D(esp+0x3c) = eax;
		FPUSH((int)D(esp+0x3c));
		ST(3) = ST(0)/ST(3); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(esi+___1a42c0h) = (float)FPOP();
		F32(esi+___1a42c0h+4) = (float)FPOP();
		F32(esi+___1a42c0h+8) = (float)FPOP();
___45e32h:
		eax = D(esp+0x10);
		if((int)eax < (int)D(esp+0x18)) goto ___45e44h;
		if((int)edi >= (int)eax) goto ___45ed7h;
___45e44h:
		ebx = D(esp+0x10);
		ebx = ebx+2*ebx;
		eax ^= eax;
		L(eax) = B(ebx+___1a3fc0h+1);
		D(esp+0x44) = eax;
		FPUSH((short)W(esp+0x44));
		eax ^= eax;
		ST(0) = ST(0)*58.8;
		L(eax) = B(ebx+___1a3fc0h);
		D(esp+0x44) = eax;
		FPUSH((short)W(esp+0x44));
		eax ^= eax;
		ST(0) = ST(0)*29.9;
		L(eax) = B(ebx+___1a3fc0h+2);
		ST(1) = ST(1)+ST(0); FPOP();
		D(esp+0x44) = eax;
		FPUSH((short)W(esp+0x44));
		ST(0) = ST(0)*11.3;
		ST(1) = ST(1)+ST(0); FPOP();
		ST(0) = ST(0)/100.0;
		ST(0) = (int)ST(0);
		D(esp+0x14) = (int)FPOP();
		eax = D(esp+0x14);
		eax = eax*edx;
		eax += 0x80;
		eax = (int)eax>>0x8;
		D(esp+0xc) = eax;
		FPUSH((int)D(esp+0xc));
		ST(0) = ST(0)/90.0;
		F32(esp+0x40) = (float)FPOP();
		eax = D(esp+0x40);
		D(esi+___1a42c0h) = eax;
		D(esi+___1a42c0h+4) = eax;
		D(esi+___1a42c0h+8) = eax;
___45ed7h:
		ebx = D(esp+0x10);
		ebx++;
		esi += 0xc;
		D(esp+0x10) = ebx;
		if((int)ecx > (int)ebx) goto ___45da5h;
		edx += 0x8;
		if((int)edx < 0x100) goto ___45d9dh;
		race___46738h__VGA13_PRESENTCLEARSCREEN();
		
		edx = ___1a54d0h;
		ebx = 0;
		D(esp+0x28) = ___1a54d0h+0xc800;

		while(1){

			memcpy(edx, D(___243d80h)+ebx+0xa0, 0x100);
			ebx += 0x200;
		
			edx += 0x100;
			if(edx == D(esp+0x28)) break;
		}

		eax = ___1a54d0h+0xfb00;
		edx = ___1a54d0h+0xc900;
		ebx = 0;
		D(esp+0x2c) = eax;

		while(1){

			memcpy(edx, D(___243d80h)+ebx+0x60, 0x40);
			edx += 0x40;
			ebx += 0x200;
		
			if(edx == D(esp+0x2c)) break;
		}

		ebx = 0x100;
		eax = ___1a54d0h+0xc800;
		edx = 0;
		edi = 0x3f666666;
		memset(eax, edx, ebx);
		eax = 0x3f800000;
		D(___196e74h) = edi;
		edx ^= edx;
		D(___196e78h) = eax;
		D(___243898h) = edx;
___45fd0h:
		ebx ^= ebx;
		esi ^= esi;
		D(esp+0x14) = ebx;
___45fd8h:
		FPUSH(F32(esi+___1a42c0h));
		eax ^= eax;
		ST(0) = ST(0)*(double)F32(___196e78h);
		L(eax) = B(esp+0x14);
		ST(0) = (int)ST(0);
		nn = eax;
		D(esp+0x40) = (int)FPOP();
		L(eax) = B(esp+0x40);
		FPUSH(F32(esi+___1a42c0h+4));
		eax &= 0xff;
		ST(0) = ST(0)*(double)F32(___196e78h);
		rr = eax;
		ST(0) = (int)ST(0);
		D(esp+0x40) = (int)FPOP();
		L(eax) = B(esp+0x40);
		FPUSH(F32(esi+___1a42c0h+8));
		eax &= 0xff;
		ST(0) = ST(0)*(double)F32(___196e78h);
		gg = eax;
		ST(0) = (int)ST(0);
		D(esp+0x40) = (int)FPOP();
		L(eax) = B(esp+0x40);
		eax &= 0xff;
		bb = eax;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
		ecx = D(esp+0x14);
		ecx++;
		esi += 0xc;
		D(esp+0x14) = ecx;
		if((int)ecx < 0x100) goto ___45fd8h;
		FPUSH(F32(___196e78h));
		ST(0) = (int)ST(0);
		D(esp+0x40) = (int)FPOP();
		eax = 0x2d8*D(esp+0x40);
		if((int)eax <= 0xffff) goto ___46078h;
		eax = 0xffff;
___46078h:
		dRally_Sound_setMasterVolume(eax);
		FPUSH(F32(___196e78h));
		ST(0) = ST(0)*create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40);
		ST(0) = ST(0)/180.0;
		FPUSH(ST(0));
		ST(0) = dR_Math_sin(ST(0));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = dR_Math_cos(ST(0));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*200.0;
		ST(0) = 51200.0/ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*170.0;
		ebx = VGA13_ACTIVESCREEN+0x40;
		edx = VGA13_ACTIVESCREEN;
		ecx ^= ecx;
		D(___243308h) = ebx;
		D(___2432ech) = ecx;
		ebx = 0xc940;
		ST(0) = (int)ST(0);
		D(___2432f8h) = (int)FPOP();
		ST(0) = (int)ST(0);
		D(___243304h) = (int)FPOP();
___460e0h:
		FPUSH(F32(___196e78h));
		ST(0) = ST(0)/1.4;
		esi = ebx;
		ST(0) = (int)ST(0);
		D(esp+0x40) = (int)FPOP();
		edi = D(esp+0x40);
		esi -= edi;
		ecx = edi;
		esi = ___1a54d0h+esi;
		edi = edx;
		ebx += 0x40;
		memcpy(edi, esi, ecx);
		edx += 0x140;
		if(ebx != 0xfb40) goto ___460e0h;
		__VGA13_PRESENTSCREEN__();
		eax ^= eax;
		D(esp+0x10) = eax;
___4612eh:
		eax = D(___2432ech);
		L(eax) = 0;
		D(___2432f4h) = eax;
		if((int)eax <= 0xc800) goto ___4614bh;
		D(___2432f4h) = 0xc800;
___4614bh:
		eax = D(___2432f4h);
		ecx = D(___2432f8h);
		eax = eax*ecx;
		edx = eax;
		ebx = D(___243308h);
		edx = (int)edx>>0x10;
		eax = (int)eax>>0x11;
		D(___2432f0h) = edx;
		edx = eax-0xa;
		ebx += edx;
		L(ecx) = 0xa;
		L(eax) = 0;
___46176h:
		if((short)X(edx) < 0) goto ___4617dh;
		B(ebx) = L(eax);
___4617dh:
		ebx++;
		X(edx)++;
		L(ecx)--;
		if(L(ecx)) goto ___46176h;
		edx = 0xff;
		esi = D(___2432f0h);
		ebx = D(___2432f4h);
		eax = D(___243308h);
		ebx--;
		edi = esi;
		edx -= esi;
		edi = (int)edi>>0x1;
		ebx = ___1a54d0h+ebx;
		edi += eax;
		ecx = 0x100;
___461aeh:
		L(eax) = B(ebx);
		H(edx) += L(edx);
		B(edi) = L(eax);
		edi += !!(H(edx) < L(edx));
		ebx++;
		ecx--;
		if(ecx) goto ___461aeh;
		eax = D(___2432f0h);
		esi = D(esp+0x10);
		eax = (int)eax>>0x1;
		edx = D(___2432f0h);
		eax += 0xff;
		ebx = D(___243308h);
		eax -= edx;
		esi++;
		edx = eax;
		D(esp+0x10) = esi;
		ebx += edx;
		L(ecx) = 0xa;
		L(eax) = 0;
___461e6h:
		if((short)X(edx) > 0xff) goto ___461f6h;
		B(ebx) = L(eax);
		ebx++;
		X(edx)++;
		L(ecx)--;
		if(L(ecx)) goto ___461e6h;
___461f6h:
		ebx = D(___243308h);
		eax = D(___243304h);
		ecx = D(___2432ech);
		ebx += 0x140;
		ecx += eax;
		D(___243308h) = ebx;
		D(___2432ech) = ecx;
		if((int)esi < 0xc8) goto ___4612eh;
		__VGA13_PRESENTSCREEN__();
		if(D(___196e78h) == 0x42b40000) goto ___462afh;
		ebx ^= ebx;
		D(esp+0x14) = ebx;
		if((int)D(___243898h) < 0) goto ___46275h;
		FPUSH(F32(___196e74h));
		FPUSH(1.02);
___46252h:
		FPUSH(ST(1));
		edi = D(esp+0x14);
		FPUSH(ST(0));
		edi++;
		ST(0) = ST(0)*ST(2);
		D(esp+0x14) = edi;
		ST(1) = ST(0); FPOP();
		ST(2) = ST(0); FPOP();
		if((int)edi <= (int)D(___243898h)) goto ___46252h;
		ST(0) = ST(0); FPOP();
		F32(___196e74h) = (float)FPOP();
___46275h:
		FPUSH(F32(___196e74h));
		ST(0) = ST(0)+(double)F32(___196e78h);
		F32(___196e78h) = (float)FPOP();
		if((int)D(___196e78h) <= (int)0x42b40000) goto ___4629dh;
		D(___196e78h) = 0x42b40000;
___4629dh:
		esi ^= esi;
		D(___243898h) = esi;
		___58c60h();
		goto ___45fd0h;
___462afh:
		esi ^= esi;
		D(esp+0x10) = esi;
___462b5h:
		edi = D(esp+0x10);
		edi++;
		___58c60h();
		D(esp+0x10) = edi;
		if((int)edi < 0x14) goto ___462b5h;
		edx ^= edx;
		edi = 0x100;
		D(esp+0x30) = edx;
___462d3h:
		eax ^= eax;
		D(esp+0x10) = eax;
		eax = D(esp+0x30);
		esi ^= esi;
		D(esp+0x48) = eax;
___462e3h:
		eax ^= eax;
		L(eax) = B(esi+___1a3fc0h);
		D(esp+0x44) = eax;
		eax ^= eax;
		L(eax) = B(esi+___1a3fc0h);
		eax = eax*edi;
		FPUSH(1.7);
		FPUSH((short)W(esp+0x44));
		ST(0) = ST(0)*ST(1);
		FPUSH((int)D(esp+0x48));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		ST(0) = (int)ST(0);
		D(esp+0x40) = (int)FPOP();
		eax += D(esp+0x40);
		eax += 0x80;
		eax = (int)eax>>0x8;
		D(esp+0xc) = eax;
		eax ^= eax;
		L(eax) = B(esi+___1a3fc0h+1);
		D(esp+0x44) = eax;
		eax ^= eax;
		L(eax) = B(esi+___1a3fc0h+1);
		eax = eax*edi;
		FPUSH((short)W(esp+0x44));
		ST(0) = ST(0)*ST(2);
		ST(0) = ST(0)*ST(1);
		ST(0) = (int)ST(0);
		D(esp+0x40) = (int)FPOP();
		eax += D(esp+0x40);
		eax += 0x80;
		eax = (int)eax>>0x8;
		D(esp+0x8) = eax;
		eax ^= eax;
		L(eax) = B(esi+___1a3fc0h+2);
		D(esp+0x44) = eax;
		eax ^= eax;
		L(eax) = B(esi+___1a3fc0h+2);
		eax = eax*edi;
		FPUSH((short)W(esp+0x44));
		ST(2) = ST(2)*ST(0); FPOP();
		ST(1) = ST(1)*ST(0); FPOP();
		ST(0) = (int)ST(0);
		D(esp+0x40) = (int)FPOP();
		eax += D(esp+0x40);
		eax += 0x80;
		eax = (int)eax>>0x8;
		D(esp+0x3c) = eax;
		if((int)D(esp+0xc) <= 0x3f) goto ___463a6h;
		D(esp+0xc) = 0x3f;
___463a6h:
		if((int)D(esp+8) <= 0x3f) goto ___463b5h;
		D(esp+8) = 0x3f;
___463b5h:
		if((int)D(esp+0x3c) <= 0x3f) goto ___463c4h;
		D(esp+0x3c) = 0x3f;
___463c4h:
		eax = 0xa*D(___243ce8h);
		ecx = D(esp+0x10);
		edx = eax+0xf;
		if((int)edx > (int)ecx) goto ___463feh;
		eax += 0x18;
		if((int)eax < (int)ecx) goto ___463feh;
		eax ^= eax;
		L(eax) = B(esp+0x10);
		nn = eax;
		eax ^= eax;
		L(eax) = B(esp+0xc);
		rr = eax;
		eax ^= eax;
		L(eax) = B(esp+0x8);
		gg = eax;
		eax ^= eax;
		L(eax) = B(esp+0x3c);
		bb = eax;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
___463feh:
		ebx = D(esp+0x10);
		ebx++;
		esi += 0x3;
		D(esp+0x10) = ebx;
		if((int)ebx < 0x100) goto ___462e3h;
		ebx = D(esp+0x30);
		___58c60h();
		ebx += 0x32;
		edi -= 0x32;
		D(esp+0x30) = ebx;
		if((int)edi >= 0) goto ___462d3h;
		esi ^= esi;
		ecx = 0x100;
		D(esp+0x34) = esi;
		D(esp+0x4c) = ecx;
___46440h:
		edi = D(esp+0x34);
		ebx ^= ebx;
		esi ^= esi;
		D(esp+0x10) = ebx;
___4644ch:
		eax ^= eax;
		L(eax) = B(esi+___1a3fc0h);
		D(esp+0x44) = eax;
		eax ^= eax;
		L(eax) = B(esi+___1a3fc0h);
		eax = eax*edi;
		FPUSH(1.7);
		FPUSH((short)W(esp+0x44));
		ST(0) = ST(0)*ST(1);
		FPUSH((int)D(esp+0x4c));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		ST(0) = (int)ST(0);
		D(esp+0x40) = (int)FPOP();
		eax += D(esp+0x40);
		eax += 0x80;
		eax = (int)eax>>0x8;
		D(esp+0xc) = eax;
		eax ^= eax;
		L(eax) = B(esi+___1a3fc0h+1);
		D(esp+0x44) = eax;
		eax ^= eax;
		L(eax) = B(esi+___1a3fc0h+1);
		eax = eax*edi;
		FPUSH((short)W(esp+0x44));
		ST(0) = ST(0)*ST(2);
		ST(0) = ST(0)*ST(1);
		ST(0) = (int)ST(0);
		D(esp+0x40) = (int)FPOP();
		eax += D(esp+0x40);
		eax += 0x80;
		eax = (int)eax>>0x8;
		D(esp+0x8) = eax;
		eax ^= eax;
		L(eax) = B(esi+___1a3fc0h+2);
		D(esp+0x44) = eax;
		eax ^= eax;
		L(eax) = B(esi+___1a3fc0h+2);
		eax = eax*edi;
		FPUSH((short)W(esp+0x44));
		ST(2) = ST(2)*ST(0); FPOP();
		ST(1) = ST(1)*ST(0); FPOP();
		ST(0) = (int)ST(0);
		D(esp+0x40) = (int)FPOP();
		eax += D(esp+0x40);
		eax += 0x80;
		eax = (int)eax>>0x8;
		D(esp+0x3c) = eax;
		if((int)D(esp+0xc) <= 0x3f) goto ___4650fh;
		D(esp+0xc) = 0x3f;
___4650fh:
		if((int)D(esp+8) <= 0x3f) goto ___4651eh;
		D(esp+8) = 0x3f;
___4651eh:
		if((int)D(esp+0x3c) <= 0x3f) goto ___4652dh;
		D(esp+0x3c) = 0x3f;
___4652dh:
		eax = 0xa*D(___243ce8h);
		ecx = D(esp+0x10);
		edx = eax+0xf;
		if((int)edx > (int)ecx) goto ___46567h;
		eax += 0x18;
		if((int)eax < (int)ecx) goto ___46567h;
		eax ^= eax;
		L(eax) = B(esp+0x10);
		nn = eax;
		eax ^= eax;
		L(eax) = B(esp+0xc);
		rr = eax;
		eax ^= eax;
		L(eax) = B(esp+0x8);
		gg = eax;
		eax ^= eax;
		L(eax) = B(esp+0x3c);
		bb = eax;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
___46567h:
		ebx = D(esp+0x10);
		ebx++;
		esi += 0x3;
		D(esp+0x10) = ebx;
		if((int)ebx < 0x100) goto ___4644ch;
		___58c60h();
		esi = D(esp+0x34);
		edi = D(esp+0x4c);
		esi += 0xa;
		edi -= 0xa;
		D(esp+0x34) = esi;
		D(esp+0x4c) = edi;
		if((int)edi >= 0) goto ___46440h;
		edx ^= edx;
		D(esp+0x10) = edx;
___465a8h:
		ecx = D(esp+0x10);
		ecx++;
		___58c60h();
		D(esp+0x10) = ecx;
		if((int)ecx < 0x32) goto ___465a8h;
		eax = 0x100;
		edi ^= edi;
		D(esp+0x38) = eax;
___465c6h:
		esi ^= esi;
		eax = D(esp+0x38);
		D(esp+0x10) = esi;
		D(esp+0x24) = eax;
___465d4h:
		eax = 0xa*D(___243ce8h);
		ebx = D(esp+0x10);
		edx = eax+0xf;
		if((int)edx > (int)ebx) goto ___465f1h;
		eax += 0x18;
		if((int)eax >= (int)ebx) goto ___466c1h;
___465f1h:
		eax ^= eax;
		L(eax) = B(esi+___1a3fc0h+1);
		D(esp+0x44) = eax;
		FPUSH((short)W(esp+0x44));
		eax ^= eax;
		ST(0) = ST(0)*58.8;
		L(eax) = B(esi+___1a3fc0h);
		D(esp+0x44) = eax;
		FPUSH((short)W(esp+0x44));
		eax ^= eax;
		ST(0) = ST(0)*29.9;
		L(eax) = B(esi+___1a3fc0h+2);
		ST(1) = ST(1)+ST(0); FPOP();
		D(esp+0x44) = eax;
		FPUSH((short)W(esp+0x44));
		ST(0) = ST(0)*11.3;
		ST(1) = ST(1)+ST(0); FPOP();
		ST(0) = ST(0)/100.0;
		eax ^= eax;
		L(eax) = B(esi+___1a3fc0h);
		edx = eax;
		edx = edx*edi;
		ebx = D(esp+0x24);
		ST(0) = (int)ST(0);
		D(esp+0x14) = (int)FPOP();
		eax = D(esp+0x14);
		eax = eax*ebx;
		edx += eax;
		edx += 0x80;
		edx = (int)edx>>0x8;
		D(esp+0xc) = edx;
		edx ^= edx;
		L(edx) = B(esi+___1a3fc0h+1);
		edx = edx*edi;
		edx += eax;
		edx += 0x80;
		edx = (int)edx>>0x8;
		D(esp+0x8) = edx;
		edx ^= edx;
		L(edx) = B(esi+___1a3fc0h+2);
		edx = edx*edi;
		eax += edx;
		eax += 0x80;
		eax = (int)eax>>0x8;
		D(esp+0x3c) = eax;
		eax ^= eax;
		L(eax) = B(esp+0x10);
		nn = eax;
		eax ^= eax;
		L(eax) = B(esp+0xc);
		rr = eax;
		eax ^= eax;
		L(eax) = B(esp+0x8);
		gg = eax;
		eax ^= eax;
		L(eax) = B(esp+0x3c);
		bb = eax;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
___466c1h:
		ecx = D(esp+0x10);
		ecx++;
		esi += 0x3;
		D(esp+0x10) = ecx;
		if((int)ecx < 0x100) goto ___465d4h;
		edx = D(esp+0x38);
		___58c60h();
		edx -= 0x8;
		edi += 0x8;
		D(esp+0x38) = edx;
		if((int)edi < 0x100) goto ___465c6h;
		ebx = 0x3f;
		ecx ^= ecx;
		D(___196e70h) = ebx;
		D(___243898h) = ecx;
		eax = D(___243898h);
		D(___243874h) = eax;
		D(___243894h) = ecx;
		eax = D(___243878h);
		D(___243894h) = eax;
		eax = D(___243894h);
		D(___243330h) = eax;
		return;
}
