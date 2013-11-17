// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>
#include "0x20.h"
#include "0x10.h"
#include "0x40.h"
#include "CDoor.h"
#include "0x80.h"
#include "CVehicle.h"
#include "0x8.h"


#pragma pack(push, 1)
struct CTrain	// sizeof = 0x6AC
{
	CVehicle __parent;
	WORD NodeIndex;
	WORD _pad1;
	DWORD CruiseSpeed;
	DWORD CurrentRailDistance;
	DWORD Lenght;
	DWORD field_5B0;
	DWORD field_5B4;
	BYTE Flags1;
	0x8 ;[=];
	0x10 ;[=];
	0x20 ;[=];
	0x40 ;[=];
	0x80 ;[=];
	BYTE Flags2;
	WORD field_5BA;
	DWORD field_5BC;
	BYTE TrackId;
	BYTE field_5C1;
	BYTE field_5C2;
	BYTE field_5C3;
	BYTE field_5C4;
	BYTE field_5C5;
	BYTE field_5C6;
	BYTE field_5C7;
	BYTE field_5C8;
	BYTE field_5C9;
	BYTE field_5CA;
	BYTE PassagerFlags;
	DWORD pPassager;
	DWORD pPrevCarriage;
	DWORD pNextCarriage;
	CDoor doors[6];
	DWORD myFrames[17];
};
#pragma pack(pop)

static_assert(sizeof(CTrain) == 0x6AC, "Incorrect struct size: CTrain");