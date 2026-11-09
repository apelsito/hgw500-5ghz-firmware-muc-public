; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00137dac entry ram:00137dac
ram:00137dac	f81c48b3	st.aw r13,[sp,-0x8]
ram:00137db0	041c8033	st r14,[sp,0x4]
ram:00137db4	3420820f00003a04	ldh r2,[r0, 0x43a]
ram:00137dbc	0aba	asl_s r2,r2,0xa
ram:00137dbe	eb76	mov_s r14,blink
ram:00137dc0	557a	add2_s r2,r2,r2
ram:00137dc2	1c2682706210d34d	mpyhu r2,0x10624dd3,r2
ram:00137dca	26ba	lsr_s r2,r2,0x6
ram:00137dcc	0c22808fff7ffeff	cmp r2,0x7ffffffe
ram:00137dd4	24002e00	bls.d 0x00137df8
ram:00137dd8	0a210000	_mov r1,r0
ram:00137ddc	cf72ff7ffeff	mov_s r2,0x7ffffffe
ram:00137de2	3021800f00009c5b	ld r0,[r1, 0x5b9c]
ram:00137dea	00218d0f0000d457	add r13,r1,0x57d4
ram:00137df2	9ee8	brne_s r0,0,0x00137e2c
ram:00137df4	19000000	b 0x00137e0c
ram:00137df8	3021800f00009c5b	ld r0,[r1, 0x5b9c]
ram:00137e00	00218d0f0000d457	add r13,r1,0x57d4
ram:00137e08	80e0	cmp_s r0,0x0
ram:00137e0a	12f4	bne_s 0x00137e2c
ram:00137e0c	cf73130064a7	mov_s r3,0x13a764
ram:00137e12	4870	mov_s r0,r2
ram:00137e14	4a220000	mov r2,0x0
ram:00137e18	4a24c000	mov r4,0x3
ram:00137e1c	2220800f0f00107c	jl 0x000f7c10
ram:00137e24	15002000	b.d 0x00137e38
ram:00137e28	f21d1810	_st.as r0,[r13,0xf2]
ram:00137e2c	0a218000	mov r1,r2
ram:00137e30	2220800f0f00a07d	jl 0x000f7da0
ram:00137e38	fb76	mov_s blink,r14
ram:00137e3a	01c6	ld_s r14,[sp,0x4]
ram:00137e3c	2120c007	j.d [blink]
ram:00137e40	08140d34	_ld.ab r13,[sp,0x8]
