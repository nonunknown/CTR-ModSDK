#include <common.h>

void OtherFX_Play(int sfxID, int flag);

void MM_Cheat_MaxWumpa()
{
	// enable infinite wumpa seeds cheat
	sdata->gGT->gameMode2 |= 0x200;
	
	// play cheat sound
	OtherFX_Play(0x67, 1);
	return;
}