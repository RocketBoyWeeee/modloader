// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>
#include "CString.h"


#pragma pack(push, 1)
struct VehicleReportTable	// sizeof = 0xA28
{
	WORD field_0[4];
	WORD field_8[24];
	CString mapZones[194];
	WORD field_648[196];
	BYTE field_7D0[200];
	WORD _vehicleReportSounds[46];
	BYTE _flags[52];
	WORD _colors[128];
};
#pragma pack(pop)

static_assert(sizeof(VehicleReportTable) == 0xA28, "Incorrect struct size: VehicleReportTable");