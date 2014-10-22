#include "RegisterClasses.h"
#include "../../Common/RegisterArc.h"
#include "../../Archive/7z/7zHandler.h"
#include "../../../../C/7zCrc.h"

static bool registered = false;
/*

static IInArchive *CreateArc() { return new NArchive::N7z::CHandler; }
#ifndef EXTRACT_ONLY
static IOutArchive *CreateArcOut() { return new NArchive::N7z::CHandler; }
#else
#define CreateArcOut 0
#endif

static CArcInfo g_ArcInfo =
  { L"7z", L"7z", 0, 7, {'7', 'z', 0xBC, 0xAF, 0x27, 0x1C}, 6, false, CreateArc, CreateArcOut };

REGISTER_ARC(7z)
*/


void Register7z();
void RegisterCodecBcj2();
void RegisterCodecBcj();
void RegisterCodecCopy();
void RegisterCodecLzma2();
void RegisterCodecLzma();
void RegisterCodecPpmd();

void RegisterClasses() {
	if (registered)
		return;
	registered = true;
	// For some reason, calling these functions is enough to have the registration constructors in their files run.
	CrcGenerateTable();
	Register7z();
	RegisterCodecBcj2();
	RegisterCodecBcj();
	RegisterCodecCopy();
	RegisterCodecLzma2();
	RegisterCodecLzma();
	RegisterCodecPpmd();
}