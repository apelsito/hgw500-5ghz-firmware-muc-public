; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001026e4 entry ram:001026e4
ram:001026e4	40298700	asl r7,r1,0x2
ram:001026e8	0c100400	ld r4,[r0,0xc]
ram:001026ec	96270200	add3 r7,r7,0x80
ram:001026f0	3024c301	ld r3,[r4, r7]
ram:001026f4	0024c401	add r4,r4,r7
ram:001026f8	9fbb	bset_s r3,r3,0x1f
ram:001026fa	001cc000	st r3,[r4]
ram:001026fe	7469	asl_s r3,r1,0x4
ram:00102700	0027870f10000000	add r7,r7,0x100000
ram:00102708	7960	add_s r1,r0,r3
ram:0010270a	3189	ldb_s r1,[r1,0x11]
ram:0010270c	0020c800	add r8,r0,r3
ram:00102710	80b9	bset_s r1,r1,0x0
ram:00102712	0c100600	ld r6,[r0,0xc]
ram:00102716	11184210	stb r1,[r8,0x11]
ram:0010271a	9620c10f	add3 r0,r0,0x7f
ram:0010271e	0020c500	add r5,r0,r3
ram:00102722	30278201	ld r2,[r7, r6]
ram:00102726	0026c601	add r6,r6,r7
ram:0010272a	1b63	add_s r3,r3,r0
ram:0010272c	9fba	bset_s r2,r2,0x1f
ram:0010272e	001e8000	st r2,[r6]
ram:00102732	75158500	ldb r5,[r5,0x75]
ram:00102736	4f250500	bset r5,r5,0x0
ram:0010273a	e07f	j_s.d [blink]
ram:0010273c	751b4201	_stb r5,[r3,0x75]
