; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0011bdb8 entry ram:0011bdb8
ram:0011bdb8	001685700280ebc8	ldb r5,[0x8002c8eb]
ram:0011bdc0	0020830f0000f803	add r3,r0,0x3f8
ram:0011bdc8	250d1100	brne r5,0x0,0x0011bdec
ram:0011bdcc	f0138400	ldb r4,[r3,0xf0]
ram:0011bdd0	4c240080	cmp r4,0x0
ram:0011bdd4	e07c	jeq_s [blink]
ram:0011bdd6	00d9	mov_s r1,0x0
ram:0011bdd8	f01b4200	stb r1,[r3,0xf0]
ram:0011bddc	001e407003808478	st r1,[0x80037884]
ram:0011bde4	2120c007	j.d [blink]
ram:0011bde8	f31b4200	_stb r1,[r3,0xf3]
ram:0011bdec	80201f0f	add r0,r0,0x7fc
ram:0011bdf0	3c18988f000000f5	st.as 0xf500,[r0,-0xc4]
ram:0011bdf8	3e18988f000000f5	st.as 0xf500,[r0,-0xc2]
ram:0011be00	3f18988f000040f5	st.as 0xf540,[r0,-0xc1]
ram:0011be08	4018988f000080f5	st.as 0xf580,[r0,-0xc0]
ram:0011be10	4118988f0000c0f5	st.as 0xf5c0,[r0,-0xbf]
ram:0011be18	01da	mov_s r2,0x1
ram:0011be1a	f31b8200	stb r2,[r3,0xf3]
ram:0011be1e	f01b8200	stb r2,[r3,0xf0]
ram:0011be22	001e807003808478	st r2,[0x80037884]
ram:0011be2a	e07e	j_s [blink]
