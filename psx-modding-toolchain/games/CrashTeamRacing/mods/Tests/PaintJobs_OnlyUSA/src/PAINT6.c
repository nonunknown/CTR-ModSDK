#include <common.h>

struct Texture
{
	const short * front;
	const short * back;
	const short * floor;
	const short * brown;
	const short * motorside;
	const short * motortop;
	const short * bridge;
	const short * exhaust;
};

short brown_dingo[16] __attribute__ ((section (".data"))) = {
0x1cc,0x1ab,0x18a,0x148,0xe5,0xa4,0x214d,0x190b,0x2d8f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,};
short motortop_dingo[16] __attribute__ ((section (".data"))) = {
0x2b2,0x314,0x250,0x24c2,0x1462,0x8c5,0x1cc,0x2d03,0x528,0x755,0x3b8,0x1bda,0x3d88,0x4e2d,0x3545,0x41a9,};
short floor_dingo[16] __attribute__ ((section (".data"))) = {
0x84,0x128,0x22e,0x18a,0x270,0x2f4,0x2d2,0x291,0x169,0x20d,0x20d,0xc5,0x1cc,0x83,0x20,0x106,};
short motorside_dingo[16] __attribute__ ((section (".data"))) = {
0x20d,0x250,0x2b2,0x128,0xc42,0x1ca2,0x2905,0x314,0x4186,0x49ea,0x524f,0x820,0x2d3,0x377,0x3da,0x33dd,};
short front_dingo[16] __attribute__ ((section (".data"))) = {
0x1ce6,0x35ee,0x4737,0x677c,0x1cc,0x1ce,0x271,0x2d3,0xb56,0x377,0x314,0x33db,0x128,0xa4,0x3ab3,0x4f38,};
short back_dingo[16] __attribute__ ((section (".data"))) = {
0xc42,0x18c5,0x1908,0x218b,0x2dad,0x216a,0xa4,0xe6,0x128,0x18a,0x1ec,0x1ee,0x1ab,0x9ee,0x83,0x21,};
short bridge_dingo[16] __attribute__ ((section (".data"))) = {
0x18a3,0x2926,0x106,0x271,0x314,0x169,0x2d3,0x377,0x3dca,0x22e,0x3d9,0x1bdc,0x4a2e,0x5ed3,0x5271,0x6f57,};
short exhaust_dingo[16] __attribute__ ((section (".data"))) = {
0x169,0x20d,0x132,0x314,0x4630,0x56b3,0x5ed6,0x4a52,0x6b37,0x779c,0x6f59,0x41ec,0x318a,0x18c5,0x2528,0xc63,};

struct Texture PAINT6[] __attribute__ ((section (".sdata"))) = {
	[0] =
	{
		.front = front_dingo,
		.back = back_dingo,
		.floor = floor_dingo,
		.brown = brown_dingo,
		.motorside = motorside_dingo,
		.motortop = motortop_dingo,
		.bridge = bridge_dingo,
		.exhaust = exhaust_dingo,
	},
};