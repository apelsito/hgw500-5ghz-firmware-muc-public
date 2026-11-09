; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000f98ac entry ram:000f98ac
ram:000f98ac	f81c48b3	st.aw r13,[sp,-0x8]
ram:000f98b0	041c8033	st r14,[sp,0x4]
ram:000f98b4	eb76	mov_s r14,blink
ram:000f98b6	80201f0f	add r0,r0,0x7fc
ram:000f98ba	0c100500	ld r5,[r0,0xc]
ram:000f98be	00dd	mov_s r13,0x0
ram:000f98c0	410d3000	breq.d r5,0x0,0x000f9900
ram:000f98c4	00194001	_st r5,[r1]
ram:000f98c8	04150200	ld r2,[r5,0x4]
ram:000f98cc	110a3100	brne.d r2,0x0,0x000f98dc
ram:000f98d0	0c188000	_st r2,[r0,0xc]
ram:000f98d4	40200303	add r3,r0,0xc
ram:000f98d8	1018c000	st r3,[r0,0x10]
ram:000f98dc	00110400	ld r4,[r1]
ram:000f98e0	00140d00	ld r13,[r4]
ram:000f98e4	4c250090	cmp r13,0x0
ram:000f98e8	ca22820f00006c00	mov.ne r2,0x6c
ram:000f98f0	ca212200	mov.ne r1,0x0
ram:000f98f4	ca204203	mov.ne r0,r13
ram:000f98f8	e220820f0e0080ea	jlne 0x000eea80
ram:000f9900	a970	mov_s r0,r13
ram:000f9902	fb76	mov_s blink,r14
ram:000f9904	01c6	ld_s r14,[sp,0x4]
ram:000f9906	e07f	j_s.d [blink]
ram:000f9908	08140d34	_ld.ab r13,[sp,0x8]
