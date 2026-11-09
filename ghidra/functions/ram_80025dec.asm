; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_80025dec entry ram:80025dec
ram:80025dec	0016067018002cc0	ld r6,[0x18c02c]
ram:80025df4	590e1000	breq r6,0x0,0x80025e4c
ram:80025df8	0a25800f00200200	mov r5,0x20000002
ram:80025e00	0a24807f0000ffff	mov lp_count,0xffff
ram:80025e08	0a24800f00e00400	mov r4,0xe0000004
ram:80025e10	a820c002	lp 0x80025e26
ram:80025e14	5b1c5801	st.as r5,[r4,0x5b]
ram:80025e18	5b140106	ld.as r1,[r4,0x5b]
ram:80025e1c	c3b9	bmsk_s r1,r1,0x3
ram:80025e1e	82e1	cmp_s r1,0x2
ram:80025e20	16f2	beq_s 0x80025e4c
ram:80025e22	e078	nop_s
ram:80025e24	e078	nop_s
ram:80025e26	00db	mov_s r3,0x0
ram:80025e28	5b1c5801	st.as r5,[r4,0x5b]
ram:80025e2c	5b140006	ld.as r0,[r4,0x5b]
ram:80025e30	c3b8	bmsk_s r0,r0,0x3
ram:80025e32	19089000	breq r0,0x2,0x80025e48
ram:80025e36	01e3	add_s r3,r3,0x1
ram:80025e38	f10b848f0000ffff	brlo r3,0xffff,0x80025e28
ram:80025e40	00da	mov_s r2,0x0
ram:80025e42	73ea	breq_s r2,0,0x80025e26
ram:80025e44	09000000	b 0x80025e4c
ram:80025e48	01da	mov_s r2,0x1
ram:80025e4a	6fea	breq_s r2,0,0x80025e26
ram:80025e4c	2120c007	j.d [blink]
ram:80025e50	4a204000	_mov r0,0x1
