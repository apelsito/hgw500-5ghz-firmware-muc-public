; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00102688 entry ram:00102688
ram:00102688	40298700	asl r7,r1,0x2
ram:0010268c	0c100400	ld r4,[r0,0xc]
ram:00102690	96270200	add3 r7,r7,0x80
ram:00102694	3024c301	ld r3,[r4, r7]
ram:00102698	0024c401	add r4,r4,r7
ram:0010269c	debb	bmsk_s r3,r3,0x1e
ram:0010269e	001cc000	st r3,[r4]
ram:001026a2	7469	asl_s r3,r1,0x4
ram:001026a4	0027870f10000000	add r7,r7,0x100000
ram:001026ac	7960	add_s r1,r0,r3
ram:001026ae	3189	ldb_s r1,[r1,0x11]
ram:001026b0	0020c800	add r8,r0,r3
ram:001026b4	a0b9	bclr_s r1,r1,0x0
ram:001026b6	0c100600	ld r6,[r0,0xc]
ram:001026ba	11184210	stb r1,[r8,0x11]
ram:001026be	9620c10f	add3 r0,r0,0x7f
ram:001026c2	0020c500	add r5,r0,r3
ram:001026c6	30278201	ld r2,[r7, r6]
ram:001026ca	0026c601	add r6,r6,r7
ram:001026ce	1b63	add_s r3,r3,r0
ram:001026d0	deba	bmsk_s r2,r2,0x1e
ram:001026d2	001e8000	st r2,[r6]
ram:001026d6	75158500	ldb r5,[r5,0x75]
ram:001026da	50250500	bclr r5,r5,0x0
ram:001026de	e07f	j_s.d [blink]
ram:001026e0	751b4201	_stb r5,[r3,0x75]
