#include "drally.h"


dword ___61bb8h(dword A1){
/*
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		mov     ecx, eax
		lea     ebx, [eax+4]
		mov     eax, ebx
		call    near inp_
		mov     edi, eax
		mov     edx, 10h
		mov     eax, ebx
		call    near outp_
		lea     esi, [ecx+6]
		mov     eax, esi
		call    near inp_
		test    al, 0f0h
		je      short ___61bf6h
		xor     eax, eax
		jmp     near ___61cc9h
___61bf6h:
		mov     edx, 1fh
		mov     eax, ebx
		call    near outp_
		mov     eax, esi
		call    near inp_
		and     eax, 0f0h
		cmp     eax, dword 0f0h
		je      short ___61c1dh
		xor     eax, eax
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___61c1dh:
		mov     edx, edi
		mov     eax, ebx
		call    near outp_
		lea     ebx, [ecx+7]
		mov     eax, ebx
		call    near inp_
		mov     esi, eax
		mov     edx, 55h
		mov     eax, ebx
		call    near outp_
		mov     eax, ebx
		call    near inp_
		cmp     eax, byte 55h
		je      short ___61c55h
		mov     eax, 1
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___61c55h:
		mov     edx, 0aah
		mov     eax, ebx
		call    near outp_
		mov     eax, ebx
		call    near inp_
		cmp     eax, dword 0aah
		je      short ___61c7ah
		mov     eax, 1
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___61c7ah:
		mov     edx, esi
		mov     eax, ebx
		call    near outp_
		lea     ebx, [ecx+2]
		mov     edx, 1
		mov     eax, ebx
		call    near outp_
		mov     eax, ebx
		call    near inp_
		mov     ecx, eax
		xor     edx, edx
		mov     eax, ebx
		call    near outp_
		test    cl, 80h
		jne     short ___61cb4h
		mov     eax, 2
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___61cb4h:
		test    cl, 40h
		jne     short ___61cc4h
		mov     eax, 3
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___61cc4h:
		mov     eax, 4
___61cc9h:
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
*/
    return 4;
}