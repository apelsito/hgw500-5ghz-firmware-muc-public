; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0017148c entry ram:0017148c
ram:0017148c	8c200480	cmp r0,0x100
ram:00171490	4a260070	nop
ram:00171494	e020c607	jnc [blink]
ram:00171498	8c200280	cmp r0,0x80
ram:0017149c	e020c507	jc [blink]
ram:001714a0	82200100	sub r0,r0,0x40
ram:001714a4	8c200280	cmp r0,0x80
ram:001714a8	96f7	blo_s 0x001714d4
ram:001714aa	0a27800f18007cc3	mov r7,0x18c37c
ram:001714b2	08170200	ld r2,[r7,0x8]
ram:001714b6	0a26800f04e68004	mov r6,0xe6040480
ram:001714be	82200100	sub r0,r0,0x40
ram:001714c2	86ba	bset_s r2,r2,0x6
ram:001714c4	3a1e9880	st.as r2,[r6,-0xc6]
ram:001714c8	081f8000	st r2,[r7,0x8]
ram:001714cc	2120c007	j.d [blink]
ram:001714d0	1c1f8000	_st r2,[r7,0x1c]
ram:001714d4	cf7318007cc3	mov_s r3,0x18c37c
ram:001714da	2283	ld_s r1,[r3,0x8]
ram:001714dc	0a24800f04e68004	mov r4,0xe6040480
ram:001714e4	a6b9	bclr_s r1,r1,0x6
ram:001714e6	3a1c5880	st.as r1,[r4,-0xc6]
ram:001714ea	22a3	st_s r1,[r3,0x8]
ram:001714ec	27a3	st_s r1,[r3,0x1c]
ram:001714ee	3a140586	ld.as r5,[r4,-0xc6]
ram:001714f2	e07f	j_s.d [blink]
ram:001714f4	201b4001	_st r5,[r3,0x20]
