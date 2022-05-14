#include "drally.h"

#pragma pack(push,1)
typedef struct racer_s {
	char 	name[0xc];			//	+0
	__DWORD__ 	damage;				// 	+0xc
	int 	engine;				// 	+0x10
	__DWORD__ 	tires;				// 	+0x14
	__DWORD__ 	armor;				//	+0x18
	__DWORD__ 	car;				//	+0x1c
	char 	unk0[0xc];			// 	+0x20
	__DWORD__ 	color;				// 	+0x2c
	int 	money;				//	+0x30
	char 	unk2[0x8];			// 	+0x34
	__DWORD__ 	refund;				// 	+0x3c
	__DWORD__ 	face;				// 	+0x40
	__DWORD__ 	points;				// 	+0x44
	__DWORD__ 	rank;				// 	+0x48
	__DWORD__ 	wins;				// 	+0x4c
	__DWORD__ 	races;				// 	+0x50
	char 	unk3[4];			// 	+0x54
	__DWORD__ 	income;				// 	+0x58
	__DWORD__ 	mines;				// 	+0x5c
	__DWORD__ 	spikes;				// 	+0x60
	__DWORD__ 	rocket_fuel;		// 	+0x64
	__DWORD__ 	sabotage;			//	+0x68
} racer_t;

typedef char char40[40];
typedef char char12[12];
typedef struct cardata_s {
    char12      		name;                           // +000
    __DWORD__   		price;                          // +00C
    char40      		txt_info[6];                    // +010
    char40      		txt_winfo[6];                   // +100
    char40      		txt_bought[6];                  // +1F0
    char40      		txt_engine_upgrades[4][6];      // +2E0
    __DWORD__   		n_engine_upgrades;              // +6A0
    __DWORD__   		n_tire_upgrades;                // +6A4
    __DWORD__   		n_armor_upgrades;               // +6A8
    __DWORD__   		price_engine_upgrades[4];       // +6AC
    __DWORD__   		price_tire_upgrades[4];         // +6BC
    __DWORD__   		price_armor_upgrades[4];        // +6CC
    __SIGNED_DWORD__   	price_repair;                   // +6DC
} cardata_t;
#pragma pack(pop)


	extern __BYTE__ ___196a84h[];
	extern __BYTE__ ___196a98h[];
	extern __BYTE__ ___196a9ch[];
	extern __BYTE__ ___196aa0h[];
	extern __BYTE__ ___185a50h[];
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___185a30h[];
	extern cardata_t ___18e298h[6];
	extern __BYTE__ ___1a1ee8h[];
	extern __BYTE__ ___1a1ec0h[];
	extern __BYTE__ ___1a1ee0h[];
	extern __BYTE__ ___1a1eech[];
	extern __BYTE__ ___1a1ec8h[];
	extern __BYTE__ ___1a1ed0h[];
	extern __BYTE__ ___1a1ee4h[];

#define Racers ___1a01e0h
	extern racer_t ___1a01e0h[];

void ___2ec68h_cdecl(void);
void ___2b318h(void);
int rand_watcom106(void);


const char name_list[0x14][0xb] = {
	"SAM SPEED", "JANE HONDA", "DUKE NUKEM",
	"NASTY NICK",
	"MOTOR MARY", "MAD MAC", "MATT MILER",
	"CLINT WEST",
	"LEE VICE", "DARK RYDER",
	"GREG PECK",
	"SUZY STOCK", "IRON JOHN", "MORI SATO",
	"CHER STONE",
	"DIESEL JOE", "MIC DAIR",
	"LIZ ARDEN",
	"BOGUS BILL", "FARMER TED",
};

void ___2415ch(void){


	long long 	ll_tmp;
	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp, n;
	__BYTE__ 	esp[0x100];

	const __DWORD__ cars[20] = { 5,5,5,4,4,4,4,3,3,3,2,2,2,2,1,1,1,0,0,0 };
	
	memcpy(esp, name_list, 0xdc);
	memset(esp+0xdc, 0, 0x14);

	D(___196a84h) = 0;
	D(___196a98h) = 0;
	D(___196a9ch) = 0;
	D(___196aa0h) = 0;
	D(___185a50h) = 0;
	D(___1a1ef8h) = 0x13;

	___2ec68h_cdecl();
	
	D(___185a30h) = 0;

	n = -1;
	while(++n < 0x14){

		Racers[n].car = cars[n];
		Racers[n].mines = 0;
		Racers[n].spikes = 0;
		Racers[n].rocket_fuel = 0;
		Racers[n].sabotage = 0;
	}

	n = -1;
	while(++n < 0x13){

		Racers[n].points = ((201-(int)(77.0*log10((double)(n+1))))*2-11*n)/4;
		Racers[n].wins = 0;
		Racers[n].races = 0;
		D(Racers[n].unk3) = 0;
		Racers[n].income = 0;
		Racers[n].damage = 0;
		Racers[n].money = rand_watcom106()%0x186a0;
		Racers[n].engine = rand_watcom106()%___18e298h[Racers[n].car].n_engine_upgrades;
		Racers[n].tires = rand_watcom106()%___18e298h[Racers[n].car].n_tire_upgrades;
		Racers[n].armor = rand_watcom106()%___18e298h[Racers[n].car].n_armor_upgrades;
		Racers[n].refund = ___18e298h[Racers[n].car].price;
		Racers[n].rank = n+1;

		edx = n;
		while(B(esp+edx+0xdc)||(edx == Racers[D(___1a1ef8h)].face)) edx++;

		B(esp+edx+0xdc) = 1;
		strcpy(Racers[n].name, esp+0xb*edx);
		Racers[n].face = edx;
		Racers[n].color = edx;
	}

	Racers[D(___1a1ef8h)].damage = 0;
	Racers[D(___1a1ef8h)].engine = 0;
	Racers[D(___1a1ef8h)].armor = 0;
	Racers[D(___1a1ef8h)].tires = 0;
	Racers[D(___1a1ef8h)].car = 0;
	Racers[D(___1a1ef8h)].wins = 0;
	Racers[D(___1a1ef8h)].races = 0;
	D(Racers[D(___1a1ef8h)].unk3) = 0;
	Racers[D(___1a1ef8h)].points = 0;
	Racers[D(___1a1ef8h)].income = 0;
	Racers[D(___1a1ef8h)].money = 495;
	D((__BYTE__ *)Racers[D(___1a1ef8h)].unk2) = 0xffffffff;
	D((__BYTE__ *)Racers[D(___1a1ef8h)].unk2+4) = 0xffffffff;
	Racers[D(___1a1ef8h)].rank = 20;
	Racers[D(___1a1ef8h)].refund = ___18e298h[0].price;
	___2b318h();
	D(___1a1ee8h) = 0;
	D(___1a1ec0h) = 0;
	D(___1a1ee0h) = 0;
	D(___1a1eech) = 0;
	D(___1a1ec8h) = 0;
	D(___1a1ed0h) = 0;
	D(___1a1ee4h) = 1;
}
