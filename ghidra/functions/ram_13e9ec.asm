; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0013e9ec entry ram:0013e9ec
ram:0013e9ec	03108800	ldb r8,[r0,0x3]
ram:0013e9f0	04108400	ldb r4,[r0,0x4]
ram:0013e9f4	05108500	ldb r5,[r0,0x5]
ram:0013e9f8	5d0a3000	breq.d r2,0x0,0x0013ea54
ram:0013e9fc	06108300	_ldb r3,[r0,0x6]
ram:0013ea00	0a26800f1a00d490	mov r6,0x1a90d4
ram:0013ea08	9926c10f	sub3 r6,r6,0x7f
ram:0013ea0c	00208811	add r8,r8,r6
ram:0013ea10	3220871f00007c03	ldb r7,[r8, 0x37c]
ram:0013ea18	00248401	add r4,r4,r6
ram:0013ea1c	00258501	add r5,r5,r6
ram:0013ea20	c073	add_s r3,r3,r6
ram:0013ea22	04274700	and r7,r7,r1
ram:0013ea26	0318c201	stb r7,[r0,0x3]
ram:0013ea2a	3224820f00007c03	ldb r2,[r4, 0x37c]
ram:0013ea32	247a	and_s r2,r2,r1
ram:0013ea34	44a8	stb_s r2,[r0,0x4]
ram:0013ea36	3225820f00007c03	ldb r2,[r5, 0x37c]
ram:0013ea3e	247a	and_s r2,r2,r1
ram:0013ea40	45a8	stb_s r2,[r0,0x5]
ram:0013ea42	3223830f00007c03	ldb r3,[r3, 0x37c]
ram:0013ea4a	247b	and_s r3,r3,r1
ram:0013ea4c	2120c007	j.d [blink]
ram:0013ea50	0618c200	_stb r3,[r0,0x6]
ram:0013ea54	4f20c811	bset r8,r8,0x7
ram:0013ea58	04204810	and r8,r8,r1
ram:0013ea5c	03180202	stb r8,[r0,0x3]
ram:0013ea60	4f24c401	bset r4,r4,0x7
ram:0013ea64	04244400	and r4,r4,r1
ram:0013ea68	04180201	stb r4,[r0,0x4]
ram:0013ea6c	4f25c501	bset r5,r5,0x7
ram:0013ea70	04254500	and r5,r5,r1
ram:0013ea74	05184201	stb r5,[r0,0x5]
ram:0013ea78	87bb	bset_s r3,r3,0x7
ram:0013ea7a	6479	and_s r1,r1,r3
ram:0013ea7c	2120c007	j.d [blink]
ram:0013ea80	06184200	_stb r1,[r0,0x6]
