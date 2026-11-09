; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0011bca8 entry ram:0011bca8
ram:0011bca8	f81c48b3	st.aw r13,[sp,-0x8]
ram:0011bcac	041c8033	st r14,[sp,0x4]
ram:0011bcb0	eb76	mov_s r14,blink
ram:0011bcb2	0875	mov_s r13,r0
ram:0011bcb4	01d9	mov_s r1,0x1
ram:0011bcb6	2220800f130094d8	jl 0x0013d894
ram:0011bcbe	2695	ldw_s r1,[r13,0xc]
ram:0011bcc0	1078	extw_s r0,r0
ram:0011bcc2	2eb9	lsr_s r1,r1,0xe
ram:0011bcc4	c0b9	bmsk_s r1,r1,0x0
ram:0011bcc6	2220800f0e00843a	jl 0x000e3a84
ram:0011bcce	0016017018004cc1	ld r1,[0x18c14c]
ram:0011bcd6	9870	mov_s r4,r0
ram:0011bcd8	b5093300	brge.d r1,0x0,0x0011bd8c
ram:0011bcdc	4a200000	_mov r0,0x0
ram:0011bce0	0a25800f1800fcd1	mov r5,0x18d1fc
ram:0011bce8	00160b70180080c1	ld r11,[0x18c180]
ram:0011bcf0	3225811f00008306	ldb r1,[r13, 0x683]
ram:0011bcf8	250c1301	brge r4,0x4,0x0011bd1c
ram:0011bcfc	2f240701	extb r4,r4
ram:0011bd00	150b3010	breq.d r11,0x0,0x0011bd14
ram:0011bd04	14240201	_add1 r2,r4,r4
ram:0011bd08	30258a1f0000280d	ld r10,[r13, 0xd28]
ram:0011bd10	4d0a1110	brne r10,0x0,0x0011bd5c
ram:0011bd14	65002000	b.d 0x0011bd78
ram:0011bd18	4a230000	_mov r3,0x0
ram:0011bd1c	110b1110	brne r11,0x0,0x0011bd2c
ram:0011bd20	4a230000	mov r3,0x0
ram:0011bd24	55002000	b.d 0x0011bd78
ram:0011bd28	0a220000	_mov r2,r0
ram:0011bd2c	3025821f0000280d	ld r2,[r13, 0xd28]
ram:0011bd34	ed0a1080	breq r2,0x0,0x0011bd20
ram:0011bd38	3225861f0000e804	ldb r6,[r13, 0x4e8]
ram:0011bd40	e10ef180	brne.d r6,0x3,0x0011bd20
ram:0011bd44	9625c11f	_add3 r13,r13,0x7f
ram:0011bd48	f8158710	ldb r7,[r13,0xf8]
ram:0011bd4c	290f3000	breq.d r7,0x0,0x0011bd74
ram:0011bd50	0a220000	_mov r2,r0
ram:0011bd54	45002000	b.d 0x0011bd98
ram:0011bd58	0a240000	_mov r4,r0
ram:0011bd5c	3225891f0000e804	ldb r9,[r13, 0x4e8]
ram:0011bd64	b109f190	brne.d r9,0x3,0x0011bd14
ram:0011bd68	9625c11f	_add3 r13,r13,0x7f
ram:0011bd6c	f8158810	ldb r8,[r13,0xf8]
ram:0011bd70	29081110	brne r8,0x0,0x0011bd98
ram:0011bd74	4a234000	mov r3,0x1
ram:0011bd78	02bb	asl_s r3,r3,0x2
ram:0011bd7a	82e1	cmp_s r1,0x2
ram:0011bd7c	747b	add1_s r3,r3,r3
ram:0011bd7e	7a62	add_s r2,r2,r3
ram:0011bd80	ca210900	mov.gt r1,r0
ram:0011bd84	00218100	add r1,r1,r2
ram:0011bd88	32254000	ldb r0,[r5, r1]
ram:0011bd8c	fb76	mov_s blink,r14
ram:0011bd8e	01c6	ld_s r14,[sp,0x4]
ram:0011bd90	2120c007	j.d [blink]
ram:0011bd94	08140d34	_ld.ab r13,[sp,0x8]
ram:0011bd98	dd0c1180	brne r4,0x0,0x0011bd74
ram:0011bd9c	dd07efff	b.d 0x0011bd78
ram:0011bda0	4a230000	_mov r3,0x0
