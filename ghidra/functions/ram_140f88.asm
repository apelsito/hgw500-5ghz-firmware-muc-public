; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00140f88 entry ram:00140f88
ram:00140f88	f81c48b3	st.aw r13,[sp,-0x8]
ram:00140f8c	041c8033	st r14,[sp,0x4]
ram:00140f90	04100800	ld r8,[r0,0x4]
ram:00140f94	0875	mov_s r13,r0
ram:00140f96	00100710	ld r7,[r8]
ram:00140f9a	eb76	mov_s r14,blink
ram:00140f9c	1c170600	ld r6,[r7,0x1c]
ram:00140fa0	03118b00	ldb r11,[r1,0x3]
ram:00140fa4	0a24800f1a00d490	mov r4,0x1a90d4
ram:00140fac	9924c10f	sub3 r4,r4,0x7f
ram:00140fb0	3026800f0000203b	ld r0,[r6, 0x3b20]
ram:00140fb8	00230b11	add r11,r11,r4
ram:00140fbc	64158610	ldb r6,[r13,0x64]
ram:00140fc0	32238a1f00007c03	ldb r10,[r11, 0x37c]
ram:00140fc8	7d0e3000	breq.d r6,0x0,0x00141044
ram:00140fcc	4a250000	_mov r5,0x0
ram:00140fd0	422a0311	asr r3,r10,0x4
ram:00140fd4	53234300	bmsk r3,r3,0x1
ram:00140fd8	210abf11	bbit1.d r10,0x6,0x00140ff8
ram:00140fdc	5322c210	_bmsk r2,r10,0x3
ram:00140fe0	84e3	cmp_s r3,0x4
ram:00140fe2	cc22ab82	cmp.lt r2,0xa
ram:00140fe6	4af6	bge_s 0x00140ff8
ram:00140fe8	7b63	add_s r3,r3,r3
ram:00140fea	757b	add2_s r3,r3,r3
ram:00140fec	0022c200	add r2,r2,r3
ram:00140ff0	3222850f1a00e88c	ldb r5,[r2, 0x1a8ce8]
ram:00140ff8	00250501	add r5,r5,r4
ram:00140ffc	1f118400	ldb r4,[r1,0x1f]
ram:00141000	3225820f00007c03	ldb r2,[r5, 0x37c]
ram:00141008	4a230000	mov r3,0x0
ram:0014100c	3225811f00007c06	ldb r1,[r13, 0x67c]
ram:00141014	2220800f1000e034	jl 0x001034e0
ram:0014101c	0a27800f0380e08e	mov r7,0x80038ee0
ram:00141024	00170500	ld r5,[r7]
ram:00141028	04170900	ld r9,[r7,0x4]
ram:0014102c	00258c1f0000680d	add r12,r13,0xd68
ram:00141034	001c4011	st r5,[r12]
ram:00141038	00258c1f00006c0d	add r12,r13,0xd6c
ram:00141040	001c4012	st r9,[r12]
ram:00141044	fb76	mov_s blink,r14
ram:00141046	01c6	ld_s r14,[sp,0x4]
ram:00141048	2120c007	j.d [blink]
ram:0014104c	08140d34	_ld.ab r13,[sp,0x8]
