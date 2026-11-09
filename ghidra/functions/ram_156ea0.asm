; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00156ea0 entry ram:00156ea0
ram:00156ea0	2109f101	brne.d r1,0x7,0x00156ec0
ram:00156ea4	42241c32	_sub sp,sp,0x8
ram:00156ea8	4a258001	mov r5,0x6
ram:00156eac	16224001	add3 r0,r2,r5
ram:00156eb0	001b4201	stb r5,[r3]
ram:00156eb4	40e0	add_s r0,r0,0x40
ram:00156eb6	0f78	extb_s r0,r0
ram:00156eb8	2120c007	j.d [blink]
ram:00156ebc	40241c32	_add sp,sp,0x8
ram:00156ec0	e9091081	breq r1,0x4,0x00156ea8
ram:00156ec4	40228500	add r5,r2,0x2
ram:00156ec8	2f254701	extb r5,r5
ram:00156ecc	001b4201	stb r5,[r3]
ram:00156ed0	cf721a0064a5	mov_s r2,0x1aa564
ram:00156ed6	14120400	ld r4,[r2,0x14]
ram:00156eda	6682	ld_s r3,[r2,0x18]
ram:00156edc	001c0031	st r4,[sp]
ram:00156ee0	1d093502	brhs.d r1,0x8,0x00156efc
ram:00156ee4	041cc030	_st r3,[sp,0x4]
ram:00156ee8	32244230	ldb r2,[sp, r1]
ram:00156eec	16224001	add3 r0,r2,r5
ram:00156ef0	40e0	add_s r0,r0,0x40
ram:00156ef2	0f78	extb_s r0,r0
ram:00156ef4	2120c007	j.d [blink]
ram:00156ef8	40241c32	_add sp,sp,0x8
ram:00156efc	00da	mov_s r2,0x0
ram:00156efe	16224001	add3 r0,r2,r5
ram:00156f02	40e0	add_s r0,r0,0x40
ram:00156f04	0f78	extb_s r0,r0
ram:00156f06	e07f	j_s.d [blink]
ram:00156f08	40241c32	_add sp,sp,0x8
