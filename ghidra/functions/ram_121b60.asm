; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00121b60 entry ram:00121b60
ram:00121b60	f81c48b3	st.aw r13,[sp,-0x8]
ram:00121b64	041c8033	st r14,[sp,0x4]
ram:00121b68	eb76	mov_s r14,blink
ram:00121b6a	a481	ld_s r13,[r1,0x10]
ram:00121b6c	0780	ld_s r0,[r0,0x1c]
ram:00121b6e	40250114	add r1,r13,0x10
ram:00121b72	2220800f110098a5	jl 0x0011a598
ram:00121b7a	88e8	brne_s r0,0,0x00121b88
ram:00121b7c	4a264000	mov r6,0x1
ram:00121b80	29002000	b.d 0x00121ba8
ram:00121b84	0c1d8011	_st r6,[r13,0xc]
ram:00121b88	e2100506	ld.as r5,[r0,0xe2]
ram:00121b8c	85100206	ld.as r2,[r0,0x85]
ram:00121b90	a0150300	ld r3,[r5,0xa0]
ram:00121b94	412ac107	lsr r1,r2,0x1f
ram:00121b98	c6ba	bmsk_s r2,r2,0x6
ram:00121b9a	4a240000	mov r4,0x0
ram:00121b9e	62a5	st_s r3,[r13,0x8]
ram:00121ba0	21a5	st_s r1,[r13,0x4]
ram:00121ba2	40a5	st_s r2,[r13,0x0]
ram:00121ba4	0c1d0011	st r4,[r13,0xc]
ram:00121ba8	fb76	mov_s blink,r14
ram:00121baa	01c6	ld_s r14,[sp,0x4]
ram:00121bac	2120c007	j.d [blink]
ram:00121bb0	08140d34	_ld.ab r13,[sp,0x8]
