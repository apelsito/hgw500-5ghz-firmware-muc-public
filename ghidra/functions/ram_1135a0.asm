; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001135a0 entry ram:001135a0
ram:001135a0	0a24800f028064c9	mov r4,0x8002c964
ram:001135a8	1908b000	breq.d r0,0x2,0x001135c0
ram:001135ac	4a250000	_mov r5,0x0
ram:001135b0	7268	asl_s r3,r0,0x2
ram:001135b2	747b	add1_s r3,r3,r3
ram:001135b4	8073	add_s r3,r3,r4
ram:001135b6	281b4001	st r5,[r3,0x28]
ram:001135ba	e07f	j_s.d [blink]
ram:001135bc	2c1b4001	_st r5,[r3,0x2c]
ram:001135c0	a872	mov_s r2,r5
ram:001135c2	326a	asl_s r1,r2,0x2
ram:001135c4	3479	add1_s r1,r1,r1
ram:001135c6	01e2	add_s r2,r2,0x1
ram:001135c8	8071	add_s r1,r1,r4
ram:001135ca	40194001	st r5,[r1,0x40]
ram:001135ce	44194001	st r5,[r1,0x44]
ram:001135d2	326a	asl_s r1,r2,0x2
ram:001135d4	3479	add1_s r1,r1,r1
ram:001135d6	01e2	add_s r2,r2,0x1
ram:001135d8	8071	add_s r1,r1,r4
ram:001135da	40194001	st r5,[r1,0x40]
ram:001135de	44194001	st r5,[r1,0x44]
ram:001135e2	e07e	j_s [blink]
