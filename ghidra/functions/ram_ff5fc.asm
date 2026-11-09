; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000ff5fc entry ram:000ff5fc
ram:000ff5fc	5f100306	ld.as r3,[r0,0x5f]
ram:000ff600	001b800fabaaabaa	st 0xaaabaaab,[r3]
ram:000ff608	041b800fc771c771	st 0x71c771c7,[r3,0x4]
ram:000ff610	081b800f55555555	st 0x55555555,[r3,0x8]
ram:000ff618	0c1b800fe438e438	st 0x38e438e4,[r3,0xc]
ram:000ff620	101b800fab2aab2a	st 0x2aab2aab,[r3,0x10]
ram:000ff628	141b800f721c721c	st 0x1c721c72,[r3,0x14]
ram:000ff630	181b800f55155515	st 0x15551555,[r3,0x18]
ram:000ff638	1c1b800ff712f712	st 0x12f712f7,[r3,0x1c]
ram:000ff640	201b800f00800080	st 0x80008000,[r3,0x20]
ram:000ff648	241b800f00400040	st 0x40004000,[r3,0x24]
ram:000ff650	4023010a	add r1,r3,0x28
ram:000ff654	0019800f46174617	st 0x17461746,[r1]
ram:000ff65c	0419800fa30ba30b	st 0xba30ba3,[r1,0x4]
ram:000ff664	4380	ld_s r2,[r0,0xc]
ram:000ff666	00228c0f00006004	add r12,r2,0x460
ram:000ff66e	60a4	st_s r3,[r12,0x0]
ram:000ff670	e07e	j_s [blink]
