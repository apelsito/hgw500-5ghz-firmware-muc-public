; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0012fa50 entry ram:0012fa50
ram:0012fa50	f81c48b3	st.aw r13,[sp,-0x8]
ram:0012fa54	041c8033	st r14,[sp,0x4]
ram:0012fa58	a2c1	sub_s sp,sp,0x8
ram:0012fa5a	eb76	mov_s r14,blink
ram:0012fa5c	0875	mov_s r13,r0
ram:0012fa5e	4a248072	mov lp_count,0xa
ram:0012fa62	c7700000b43f	add_s r0,r0,0x3fb4
ram:0012fa68	a8200002	lp 0x0012fa78
ram:0012fa6c	00100800	ld r8,[r0]
ram:0012fa70	31081110	brne r8,0x0,0x0012faa0
ram:0012fa74	40200001	add r0,r0,0x4
ram:0012fa78	3025801f0000203b	ld r0,[r13, 0x3b20]
ram:0012fa80	02d9	mov_s r1,0x2
ram:0012fa82	2220800f1000e032	jl 0x001032e0
ram:0012fa8a	3025801f0000203b	ld r0,[r13, 0x3b20]
ram:0012fa92	01d9	mov_s r1,0x1
ram:0012fa94	2220800f1000e032	jl 0x001032e0
ram:0012fa9c	79000000	b 0x0012fb14
ram:0012faa0	3025841f0000203b	ld r4,[r13, 0x3b20]
ram:0012faa8	cf730380f477	mov_s r3,0x800377f4
ram:0012faae	0c140500	ld r5,[r4,0xc]
ram:0012fab2	0a260007	mov r6,sp
ram:0012fab6	3025820f00001430	ld r2,[r5, 0x3014]
ram:0012fabe	4a270000	mov r7,0x0
ram:0012fac2	041ec001	st r7,[r6,0x4]
ram:0012fac6	001e8000	st r2,[r6]
ram:0012faca	3183	ld_s r1,[r3,0x44]
ram:0012facc	cf7200001027	mov_s r2,0x2710
ram:0012fad2	0a24800f00007017	mov r4,0x1770
ram:0012fada	01e1	add_s r1,r1,0x1
ram:0012fadc	31a3	st_s r1,[r3,0x44]
ram:0012fade	3025801f0000203b	ld r0,[r13, 0x3b20]
ram:0012fae6	00c3	ld_s r3,[sp,0x0]
ram:0012fae8	02d9	mov_s r1,0x2
ram:0012faea	2220800f10003032	jl 0x00103230
ram:0012faf2	3025801f0000203b	ld r0,[r13, 0x3b20]
ram:0012fafa	00c3	ld_s r3,[sp,0x0]
ram:0012fafc	01d9	mov_s r1,0x1
ram:0012fafe	cf7200001027	mov_s r2,0x2710
ram:0012fb04	0a24800f0000a00f	mov r4,0xfa0
ram:0012fb0c	2220800f10003032	jl 0x00103230
ram:0012fb14	fb76	mov_s blink,r14
ram:0012fb16	a2c0	add_s sp,sp,0x8
ram:0012fb18	01c6	ld_s r14,[sp,0x4]
ram:0012fb1a	08140d34	ld.ab r13,[sp,0x8]
ram:0012fb1e	e07f	j_s.d [blink]
ram:0012fb20	4a200000	_mov r0,0x0
