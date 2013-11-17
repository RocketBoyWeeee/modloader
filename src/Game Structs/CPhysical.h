// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>
#include "RwV3D.h"
#include "CEntity.h"


#pragma pack(push, 1)
struct CPhysical	// sizeof = 0x138
{
	CEntity __parent;
	DWORD field_38;
	DWORD field_3C;
	DWORD immunities;
	RwV3D m_vVelocity;
	RwV3D m_vAngularVelocity;
	RwV3D m_vAcceleration;
	RwV3D m_vAngularAcceleration;
	RwV3D m_vForce;
	RwV3D m_vTorque;
	DWORD m_fMass;
	DWORD m_fTurnMass;
	DWORD m_fVelocityFrequency;
	DWORD fAirResistance;
	DWORD m_fElasticity;
	DWORD m_fBuoyancyConstant;
	RwV3D field_A4;
	DWORD field_B0;
	DWORD field_B4;
	BYTE field_B8;
	BYTE field_B9;
	BYTE SurfaceType;
	BYTE field_BB;
	DWORD field_BC[6];
	DWORD field_D4;
	DWORD field_D8;
	DWORD field_DC;
	RwV3D field_E0;
	RwV3D field_EC;
	WORD field_F8;
	WORD field_FA;
	DWORD field_FC;
	DWORD field_100;
	DWORD field_104;
	DWORD field_108;
	DWORD field_10C;
	DWORD field_110;
	DWORD field_114;
	DWORD field_118;
	DWORD field_11C;
	DWORD field_120;
	DWORD field_124;
	DWORD field_128;
	DWORD field_12C;
	DWORD field_130;
	DWORD field_134;
};
#pragma pack(pop)

static_assert(sizeof(CPhysical) == 0x138, "Incorrect struct size: CPhysical");