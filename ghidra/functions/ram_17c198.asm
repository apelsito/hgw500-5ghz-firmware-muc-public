; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0017c198 entry ram:0017c198
ram:0017c198	40280403	asl r4,r0,0xc
ram:0017c19c	4a230000	mov r3,0x0
ram:0017c1a0	3668	asl_s r1,r0,0x6
ram:0017c1a2	0224840ff51900f0	sub r4,r4,0x19f5f000
ram:0017c1aa	3479	add1_s r1,r1,r1
ram:0017c1ac	0a27800f21007015	mov r7,0x211570
ram:0017c1b4	4a220002	mov r2,0x8
ram:0017c1b8	136b	asl_s r0,r3,0x3
ram:0017c1ba	4a210010	mov r9,0x0
ram:0017c1be	1478	add1_s r0,r0,r0
ram:0017c1c0	3860	add_s r0,r0,r1
ram:0017c1c2	e070	add_s r0,r0,r7
ram:0017c1c4	16204502	add3 r5,r0,r9
ram:0017c1c8	00150800	ld r8,[r5]
ram:0017c1cc	40214910	add r9,r9,0x1
ram:0017c1d0	001c0002	st r8,[r4]
ram:0017c1d4	04150600	ld r6,[r5,0x4]
ram:0017c1d8	041c8001	st r6,[r4,0x4]
ram:0017c1dc	e909f290	brlt.d r9,0x3,0x0017c1c4
ram:0017c1e0	40240402	_add r4,r4,0x8
ram:0017c1e4	40240408	add r4,r4,0x20
ram:0017c1e8	61ba	sub_s r2,r2,0x1
ram:0017c1ea	80e2	cmp_s r2,0x0
ram:0017c1ec	e120ce07	jls.d [blink]
ram:0017c1f0	40234300	_add r3,r3,0x1
ram:0017c1f4	e2f1	b_s 0x0017c1b8
