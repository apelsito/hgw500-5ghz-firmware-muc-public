; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00157cd0 entry ram:00157cd0
ram:00157cd0	f1c0	push_s blink
ram:00157cd2	0a23801f18004cc2	mov r11,0x18c24c
ram:00157cda	00130211	ldh r2,[r11]
ram:00157cde	a2c1	sub_s sp,sp,0x8
ram:00157ce0	150a3000	breq.d r2,0x0,0x00157cf4
ram:00157ce4	0a240000	_mov r4,r0
ram:00157ce8	bd091100	brne r1,0x0,0x00157da4
ram:00157cec	bd002000	b.d 0x00157da8
ram:00157cf0	4a204002	_mov r0,0x9
ram:00157cf4	0a21801f1a0064a5	mov r9,0x1aa564
ram:00157cfc	1c110a10	ld r10,[r9,0x1c]
ram:00157d00	20110811	ldh r8,[r9,0x20]
ram:00157d04	4a250000	mov r5,0x0
ram:00157d08	001c8032	st r10,[sp]
ram:00157d0c	041c0432	sth r8,[sp,0x4]
ram:00157d10	a872	mov_s r2,r5
ram:00157d12	32244631	ldb r6,[sp, r5]
ram:00157d16	40254500	add r5,r5,0x1
ram:00157d1a	2f254701	extb r5,r5
ram:00157d1e	0f228701	bset r7,r2,r6
ram:00157d22	2f22c801	extw r2,r7
ram:00157d26	001bc411	sth r7,[r11]
ram:00157d2a	32244631	ldb r6,[sp, r5]
ram:00157d2e	40254500	add r5,r5,0x1
ram:00157d32	2f254701	extb r5,r5
ram:00157d36	0f228701	bset r7,r2,r6
ram:00157d3a	2f22c801	extw r2,r7
ram:00157d3e	001bc411	sth r7,[r11]
ram:00157d42	32244631	ldb r6,[sp, r5]
ram:00157d46	40254500	add r5,r5,0x1
ram:00157d4a	2f254701	extb r5,r5
ram:00157d4e	0f228701	bset r7,r2,r6
ram:00157d52	2f22c801	extw r2,r7
ram:00157d56	001bc411	sth r7,[r11]
ram:00157d5a	32244631	ldb r6,[sp, r5]
ram:00157d5e	40254500	add r5,r5,0x1
ram:00157d62	2f254701	extb r5,r5
ram:00157d66	0f228701	bset r7,r2,r6
ram:00157d6a	2f22c801	extw r2,r7
ram:00157d6e	001bc411	sth r7,[r11]
ram:00157d72	32244631	ldb r6,[sp, r5]
ram:00157d76	40254500	add r5,r5,0x1
ram:00157d7a	2f254701	extb r5,r5
ram:00157d7e	0f228701	bset r7,r2,r6
ram:00157d82	2f22c801	extw r2,r7
ram:00157d86	001bc411	sth r7,[r11]
ram:00157d8a	32244631	ldb r6,[sp, r5]
ram:00157d8e	40254500	add r5,r5,0x1
ram:00157d92	2f254701	extb r5,r5
ram:00157d96	0f228701	bset r7,r2,r6
ram:00157d9a	2f22c801	extw r2,r7
ram:00157d9e	001bc411	sth r7,[r11]
ram:00157da2	a4f1	b_s 0x00157ce8
ram:00157da4	4a200002	mov r0,0x8
ram:00157da8	8871	mov_s r1,r4
ram:00157daa	00db	mov_s r3,0x0
ram:00157dac	020e2fff	bl.d 0x001563ac
ram:00157db0	4a244000	_mov r4,0x1
ram:00157db4	40241c32	add sp,sp,0x8
ram:00157db8	04141f34	ld.ab blink,[sp,0x4]
ram:00157dbc	e07e	j_s [blink]
