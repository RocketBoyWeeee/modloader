// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>
#include "CPhysical.h"


#pragma pack(push, 1)
struct CObject	// sizeof = 0x174
{
	CPhysical __parent;
	DWORD pMeInDynamicList;
	BYTE field_13C;
	BYTE field_13D;
	BYTE _undefined_0;
	BYTE _undefined_1;
	DWORD field_140;
	BYTE m_nbColDamageEffect;
	BYTE field_145;
	BYTE _undefined_2;
	BYTE GarageThisDoorIsAttachedTo;
	BYTE _undefined_3;
	BYTE _undefined_4;
	BYTE _undefined_5;
	BYTE _undefined_6;
	BYTE _undefined_7;
	BYTE _undefined_8;
	BYTE _undefined_9;
	BYTE _undefined_10;
	DWORD field_150;
	DWORD field_154;
	DWORD field_158;
	BYTE _undefined_11;
	BYTE _undefined_12;
	BYTE _undefined_13;
	BYTE _undefined_14;
	DWORD m_pObjectInfo;
	BYTE _undefined_15;
	BYTE _undefined_16;
	BYTE _undefined_17;
	BYTE _undefined_18;
	BYTE _undefined_19;
	BYTE _undefined_20;
	BYTE _undefined_21;
	BYTE _undefined_22;
	BYTE _undefined_23;
	BYTE _undefined_24;
	BYTE _undefined_25;
	BYTE _undefined_26;
	DWORD field_170;
};
#pragma pack(pop)

static_assert(sizeof(CObject) == 0x174, "Incorrect struct size: CObject");