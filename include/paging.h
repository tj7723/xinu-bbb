/* paging.h - Paging related definitions */

#define	PDE_PTSEC	0x00000002
#define	PDE_B		0x00000004
#define	PDE_C		0x00000008
#define	PDE_XN		0x00000010
#define	PDE_DOM		0x000001E0
#define	PDE_AP		0x00008C00
#define	PDE_AP0		0x00000000
#define	PDE_AP1		0x00000400
#define	PDE_AP2		0x00000800
#define	PDE_AP3		0x00000C00
#define	PDE_AP4		0x00008000
#define	PDE_AP5		0x00008400
#define	PDE_AP6		0x00008800
#define	PDE_AP7		0x00008C00
#define	PDE_TEX		0x00007000
#define	PDE_TEX0	0x00000000
#define	PDE_TEX1	0x00001000
#define	PDE_TEX2	0x00002000
#define	PDE_TEX3	0x00003000
#define	PDE_TEX4	0x00004000
#define	PDE_TEX5	0x00005000
#define	PDE_TEX6	0x00006000
#define	PDE_TEX7	0x00007000
#define	PDE_S		0x00010000
#define	PDE_NG		0x00020000
#define	PDE_NS		0x00080000
#define	PDE_BASEADDR	0xFFF00000

/* No. of pages reserved for uncached memory */
#define	UCMEM_NPAGES	1

extern	uint32	page_dir[];
