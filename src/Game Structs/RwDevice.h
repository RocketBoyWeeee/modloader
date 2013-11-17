// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>


#pragma pack(push, 1)
struct RwDevice	// sizeof = 0x38
{
	DWORD gammaCorrection;
	DWORD fpSystem;
	DWORD zBufferNear;
	DWORD zBufferFar;
	DWORD fpRenderStateSet;
	DWORD fpRenderStateGet;
	DWORD fpIm2DRenderLine;
	DWORD fpIm2DRenderTriangle;
	DWORD fpIm2DRenderPrimitive;
	DWORD fpIm2DRenderIndexedPrimitive;
	DWORD fpIm3DRenderLine;
	DWORD fpIm3DRenderTriangle;
	DWORD fpIm3DRenderPrimitive;
	DWORD fpIm3DRenderIndexedPrimitive;
};
#pragma pack(pop)

static_assert(sizeof(RwDevice) == 0x38, "Incorrect struct size: RwDevice");