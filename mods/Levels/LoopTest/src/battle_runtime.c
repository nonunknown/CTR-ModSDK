#include <common.h>

void RunInitHook()
{
	unsigned int loop;
	unsigned int loop2;
	unsigned int numBytes;
	short rot[3];
	struct Thread* th;
	struct InstDef* def;
	struct GameTracker* gGT;
	struct BattleGame* bg = 0x8000F000;
	gGT = sdata->gGT;
	
	// set battle menubox to use adv cup rows
	*(unsigned int*)(0x80084474 + 0xC) = 0x800844A0;
	
	if(gGT->levelID != 0x14) return;
	
	sdata->ptrActiveMenuBox = 0;
}

struct MenuRow NewRowsMM[3] =
{
	[0] =
	{
		.stringIndex = 0x4D, // time trial
		.rowOnPressUp = 0,
		.rowOnPressDown = 1,
		.rowOnPressLeft = 0,
		.rowOnPressRight = 0,
	},
	
	[1] =
	{
		.stringIndex = 0x50, // battle
		.rowOnPressUp = 0,
		.rowOnPressDown = 1,
		.rowOnPressLeft = 1,
		.rowOnPressRight = 1,
	},
	
	[2] =
	{
		.stringIndex = 0xFFFF,
	}
};

struct MenuRow NewRowsEND[3] =
{
	[0] =
	{
		.stringIndex = 4, // retry
		.rowOnPressUp = 0,
		.rowOnPressDown = 1,
		.rowOnPressLeft = 0,
		.rowOnPressRight = 0,
	},
	
	[1] =
	{
		.stringIndex = 3, // quit
		.rowOnPressUp = 0,
		.rowOnPressDown = 1,
		.rowOnPressLeft = 1,
		.rowOnPressRight = 1,
	},
	
	[2] =
	{
		.stringIndex = 0xFFFF,
	}
};

void RunUpdateHook()
{
	unsigned int loop;
	unsigned int loop2;
	short rot[3];
	struct BattleGame* bg = 0x8000F000;

	// main menu
	if(sdata->ptrActiveMenuBox == &OVR_230.menubox_mainMenu)
	{
		sdata->ptrActiveMenuBox->rows = &NewRowsMM[0];
	}
	
	// battle end of race
	if(sdata->ptrActiveMenuBox == 0x800A01B4)
	{
		sdata->ptrActiveMenuBox->rows = &NewRowsEND[0];
	}
	
	// dont allow pressing Triangle from Battle Setup
	if(
		(sdata->ptrActiveMenuBox == &OVR_230.menubox_battleWeapons) &&
		(sdata->ptrDesiredMenuBox == &OVR_230.menubox_trackSelect)
	  )
	{
		sdata->ptrDesiredMenuBox = &OVR_230.menubox_characterSelect;
	}
	
	// ======= IF Press Select =============
	// driver->0x39C = 0x6400
	// driver->0x39E = 0x6400
	// driver->0x3E4 = 0x6400
	// driver->0x3E2 = 0x7777
}

