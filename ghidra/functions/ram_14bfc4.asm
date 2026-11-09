; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0014bfc4 entry ram:0014bfc4
ram:0014bfc4	00110700	ld r7,[r1]
ram:0014bfc8	412f0502	lsr r5,r7,0x8
ram:0014bfcc	5325c500	bmsk r5,r5,0x3
ram:0014bfd0	49250501	min r5,r5,0x4
ram:0014bfd4	412f0703	lsr r7,r7,0xc
ram:0014bfd8	5327c700	bmsk r7,r7,0x3
ram:0014bfdc	1d0f1301	brge r7,0x4,0x0014bff8
ram:0014bfe0	40254800	add r8,r5,0x1
ram:0014bfe4	4c200091	cmp r8,0x4
ram:0014bfe8	20002a00	bge.d 0x0014c008
ram:0014bfec	4a220001	_mov r2,0x4
ram:0014bff0	19002000	b.d 0x0014c008
ram:0014bff4	2f220702	_extb r2,r8
ram:0014bff8	4a220001	mov r2,0x4
ram:0014bffc	40254800	add r8,r5,0x1
ram:0014c000	f1083291	brlt.d r8,0x4,0x0014bff0
ram:0014c004	0a278000	_mov r7,r2
ram:0014c008	3020830f0000400d	ld r3,[r0, 0xd40]
ram:0014c010	00208c0f0000400d	add r12,r0,0xd40
ram:0014c018	3020840f0000440d	ld r4,[r0, 0xd44]
ram:0014c020	3020860f0000480d	ld r6,[r0, 0xd48]
ram:0014c028	7a62	add_s r2,r2,r3
ram:0014c02a	40a4	st_s r2,[r12,0x0]
ram:0014c02c	00208c0f0000440d	add r12,r0,0xd44
ram:0014c034	00244401	add r4,r4,r5
ram:0014c038	001c0011	st r4,[r12]
ram:0014c03c	0026c601	add r6,r6,r7
ram:0014c040	00208c0f0000480d	add r12,r0,0xd48
ram:0014c048	001c8011	st r6,[r12]
ram:0014c04c	3020820f00004c0d	ld r2,[r0, 0xd4c]
ram:0014c054	3c89	ldb_s r1,[r1,0x1c]
ram:0014c056	00208c0f00004c0d	add r12,r0,0xd4c
ram:0014c05e	5961	add_s r1,r1,r2
ram:0014c060	2120c007	j.d [blink]
ram:0014c064	001c4010	_st r1,[r12]
