; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00151ca0 entry ram:00151ca0
ram:00151ca0	4c200080	cmp r0,0x0
ram:00151ca4	4a260070	nop
ram:00151ca8	e07c	jeq_s [blink]
ram:00151caa	30208a0f00005046	ld r10,[r0, 0x4650]
ram:00151cb2	4c220090	cmp r10,0x0
ram:00151cb6	e07c	jeq_s [blink]
ram:00151cb8	90e1	cmp_s r1,0x10
ram:00151cba	cc216284	cmp.ne r1,0x11
ram:00151cbe	04f2	beq_s 0x00151cc4
ram:00151cc0	92e1	cmp_s r1,0x12
ram:00151cc2	e07d	jne_s [blink]
ram:00151cc4	cf721900342d	mov_s r2,0x192d34
ram:00151cca	357a	add2_s r2,r2,r1
ram:00151ccc	00120400	ld r4,[r2]
ram:00151cd0	4c240080	cmp r4,0x0
ram:00151cd4	e07c	jeq_s [blink]
ram:00151cd6	0a21801f0380e08e	mov r9,0x80038ee0
ram:00151cde	00110110	ld r1,[r9]
ram:00151ce2	04110710	ld r7,[r9,0x4]
ram:00151ce6	14120810	ld r8,[r10,0x14]
ram:00151cea	8071	add_s r1,r1,r4
ram:00151cec	0c204090	cmp r8,r1
ram:00151cf0	e020c307	jp [blink]
ram:00151cf4	04120510	ld r5,[r10,0x4]
ram:00151cf8	4c250080	cmp r5,0x0
ram:00151cfc	e07d	jne_s [blink]
ram:00151cfe	00110310	ld r3,[r9]
ram:00151d02	04110610	ld r6,[r9,0x4]
ram:00151d06	8073	add_s r3,r3,r4
ram:00151d08	2120c007	j.d [blink]
ram:00151d0c	141ac010	_st r3,[r10,0x14]
