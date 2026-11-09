; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0010dc20 entry ram:0010dc20
ram:0010dc20	dc1c48b3	st.aw r13,[sp,-0x24]
ram:0010dc24	041cc037	st blink,[sp,0x4]
ram:0010dc28	42c6	st_s r14,[sp,0x8]
ram:0010dc2a	43c7	st_s r15,[sp,0xc]
ram:0010dc2c	101c0034	st r16,[sp,0x10]
ram:0010dc30	141c4034	st r17,[sp,0x14]
ram:0010dc34	181c8034	st r18,[sp,0x18]
ram:0010dc38	1c1cc034	st r19,[sp,0x1c]
ram:0010dc3c	201c0035	st r20,[sp,0x20]
ram:0010dc40	a2c1	sub_s sp,sp,0x8
ram:0010dc42	00100600	ld r6,[r0]
ram:0010dc46	7a70	mov_s r19,r0
ram:0010dc48	1c161000	ld r16,[r6,0x1c]
ram:0010dc4c	5a71	mov_s r18,r1
ram:0010dc4e	30208d2f0000203b	ld r13,[r16, 0x3b20]
ram:0010dc56	0020912f0000803f	add r17,r16,0x3f80
ram:0010dc5e	00208e2f0000e437	add r14,r16,0x37e4
ram:0010dc66	55214f2e	add2 r15,r17,0x39
ram:0010dc6a	3020832f0000a840	ld r3,[r16, 0x40a8]
ram:0010dc72	3020812f00008c46	ld r1,[r16, 0x468c]
ram:0010dc7a	01e3	add_s r3,r3,0x1
ram:0010dc7c	0c234080	cmp r3,r1
ram:0010dc80	3420842f00002240	ldh r4,[r16, 0x4022]
ram:0010dc88	0020942f0000c03f	add r20,r16,0x3fc0
ram:0010dc90	10002400	bn.d 0x0010dca0
ram:0010dc94	4a254000	_mov r5,0x1
ram:0010dc98	450cd200	brlt r4,0x3,0x0010dcdc
ram:0010dc9c	29000000	b 0x0010dcc4
ram:0010dca0	3d0cf200	brlt.d r4,0x3,0x0010dcdc
ram:0010dca4	de194221	_stb r5,[r17,0xde]
ram:0010dca8	04128120	ldb r1,[r18,0x4]
ram:0010dcac	0a20800f1c00400d	mov r0,0x1c0d40
ram:0010dcb4	2220800f0e0060e2	jl 0x000ee260
ram:0010dcbc	62140621	ldh r6,[r20,0x62]
ram:0010dcc0	1d0ed200	brlt r6,0x3,0x0010dcdc
ram:0010dcc4	04128120	ldb r1,[r18,0x4]
ram:0010dcc8	dd118220	ldb r2,[r17,0xdd]
ram:0010dccc	0a20800f1c00700d	mov r0,0x1c0d70
ram:0010dcd4	2220800f0e0060e2	jl 0x000ee260
ram:0010dcdc	4a210020	mov r17,0x0
ram:0010dce0	001c4034	st r17,[sp]
ram:0010dce4	041c4034	st r17,[sp,0x4]
ram:0010dce8	0385	ld_s r0,[r13,0xc]
ram:0010dcea	8b71	mov_s r1,sp
ram:0010dcec	30208b0f00001430	ld r11,[r0, 0x3014]
ram:0010dcf4	0a244024	mov r20,r17
ram:0010dcf8	0019c002	st r11,[r1]
ram:0010dcfc	0c150a10	ld r10,[r13,0xc]
ram:0010dd00	30228a1f00001830	ld r10,[r10, 0x3018]
ram:0010dd08	6a70	mov_s r0,r19
ram:0010dd0a	04198002	st r10,[r1,0x4]
ram:0010dd0e	00c3	ld_s r3,[sp,0x0]
ram:0010dd10	01c2	ld_s r2,[sp,0x4]
ram:0010dd12	241ac020	st r3,[r18,0x24]
ram:0010dd16	281a8020	st r2,[r18,0x28]
ram:0010dd1a	28120320	ld r3,[r18,0x28]
ram:0010dd1e	24120920	ld r9,[r18,0x24]
ram:0010dd22	841ac020	st r3,[r18,0x84]
ram:0010dd26	801a4022	st r9,[r18,0x80]
ram:0010dd2a	3020812f00007446	ld r1,[r16, 0x4674]
ram:0010dd32	3020822f00007846	ld r2,[r16, 0x4678]
ram:0010dd3a	01db	mov_s r3,0x1
ram:0010dd3c	10120821	ldh r8,[r18,0x10]
ram:0010dd40	260defff	bl.d 0x0010da64
ram:0010dd44	44200418	_and r4,r8,0x20
ram:0010dd48	24170710	ld r7,[r15,0x24]
ram:0010dd4c	341ac021	st r7,[r18,0x34]
ram:0010dd50	14170610	ld r6,[r15,0x14]
ram:0010dd54	2c1a8021	st r6,[r18,0x2c]
ram:0010dd58	18170510	ld r5,[r15,0x18]
ram:0010dd5c	301a4021	st r5,[r18,0x30]
ram:0010dd60	cf160b16	ld.as r11,[r14,0xcf]
ram:0010dd64	001c4034	st r17,[sp]
ram:0010dd68	041c0035	st r20,[sp,0x4]
ram:0010dd6c	0c130710	ld r7,[r11,0xc]
ram:0010dd70	0a200017	mov r8,sp
ram:0010dd74	3027840f00001430	ld r4,[r7, 0x3014]
ram:0010dd7c	00208c2f00005440	add r12,r16,0x4054
ram:0010dd84	00180011	st r4,[r8]
ram:0010dd88	0c130110	ld r1,[r11,0xc]
ram:0010dd8c	3021850f00001830	ld r5,[r1, 0x3018]
ram:0010dd94	04184011	st r5,[r8,0x4]
ram:0010dd98	00140930	ld r9,[sp]
ram:0010dd9c	04140430	ld r4,[sp,0x4]
ram:0010dda0	881a4022	st r9,[r18,0x88]
ram:0010dda4	8c1a0021	st r4,[r18,0x8c]
ram:0010dda8	3020822f00005440	ld r2,[r16, 0x4054]
ram:0010ddb0	01e2	add_s r2,r2,0x1
ram:0010ddb2	a2c0	add_s sp,sp,0x8
ram:0010ddb4	04141f30	ld blink,[sp,0x4]
ram:0010ddb8	02c6	ld_s r14,[sp,0x8]
ram:0010ddba	03c7	ld_s r15,[sp,0xc]
ram:0010ddbc	10141030	ld r16,[sp,0x10]
ram:0010ddc0	14141130	ld r17,[sp,0x14]
ram:0010ddc4	18141230	ld r18,[sp,0x18]
ram:0010ddc8	1c141330	ld r19,[sp,0x1c]
ram:0010ddcc	20141430	ld r20,[sp,0x20]
ram:0010ddd0	24140d34	ld.ab r13,[sp,0x24]
ram:0010ddd4	2120c007	j.d [blink]
ram:0010ddd8	001c8010	_st r2,[r12]
