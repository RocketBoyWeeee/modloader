// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>
#include "CTimer.h"
#include "CStatusText.h"


#pragma pack(push, 1)
struct CStatusTexts	// sizeof = 0x152
{
	CTimer timer;
	CStatusText field_40[4];
	BYTE field_150;
	BYTE timerPaused;
};
#pragma pack(pop)

static_assert(sizeof(CStatusTexts) == 0x152, "Incorrect struct size: CStatusTexts");