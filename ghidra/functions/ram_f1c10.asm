; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000f1c10 entry ram:000f1c10
ram:000f1c10	0a27800f1c004cb2	mov r7,0x1cb24c
ram:000f1c18	48170300	ld r3,[r7,0x48]
ram:000f1c1c	1ceb	breq_s r3,0,0x000f1c54
ram:000f1c1e	4a240078	mov lp_count,0x20
ram:000f1c22	00d8	mov_s r0,0x0
ram:000f1c24	a8200006	lp 0x000f1c54
ram:000f1c28	9c68	asr_s r12,r0,0x4
ram:000f1c2a	3bbc	lsr_s r12,r12,0x1b
ram:000f1c2c	00240410	add r4,r12,r0
ram:000f1c30	422c4601	asr r6,r4,0x5
ram:000f1c34	53240401	bmsk r4,r4,0x4
ram:000f1c38	15278501	add2 r5,r7,r6
ram:000f1c3c	02240403	sub r4,r4,r12
ram:000f1c40	002e027100000100	asl r2,0x1,r4
ram:000f1c48	44150100	ld r1,[r5,0x44]
ram:000f1c4c	0b224080	tst r2,r1
ram:000f1c50	06f2	beq_s 0x000f1c5c
ram:000f1c52	01e0	add_s r0,r0,0x1
ram:000f1c54	2120c007	j.d [blink]
ram:000f1c58	8a20ff0f	_mov r0,-0x1
ram:000f1c5c	4579	or_s r1,r1,r2
ram:000f1c5e	441d4000	st r1,[r5,0x44]
ram:000f1c62	61bb	sub_s r3,r3,0x1
ram:000f1c64	2120c007	j.d [blink]
ram:000f1c68	481fc000	_st r3,[r7,0x48]
