; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0010e254 entry ram:0010e254
ram:0010e254	e41c48b3	st.aw r13,[sp,-0x1c]
ram:0010e258	041cc037	st blink,[sp,0x4]
ram:0010e25c	42c6	st_s r14,[sp,0x8]
ram:0010e25e	43c7	st_s r15,[sp,0xc]
ram:0010e260	101c0034	st r16,[sp,0x10]
ram:0010e264	141c4034	st r17,[sp,0x14]
ram:0010e268	181c8034	st r18,[sp,0x18]
ram:0010e26c	00100a00	ld r10,[r0]
ram:0010e270	2876	mov_s r14,r1
ram:0010e272	1c121010	ld r16,[r10,0x1c]
ram:0010e276	a2c1	sub_s sp,sp,0x8
ram:0010e278	30208f2f0000203b	ld r15,[r16, 0x3b20]
ram:0010e280	4a220020	mov r18,0x0
ram:0010e284	4a75	mov_s r13,r18
ram:0010e286	001c8034	st r18,[sp]
ram:0010e28a	41c5	st_s r13,[sp,0x4]
ram:0010e28c	0c170710	ld r7,[r15,0xc]
ram:0010e290	0a200017	mov r8,sp
ram:0010e294	3027860f00001430	ld r6,[r7, 0x3014]
ram:0010e29c	00208c2f00005040	add r12,r16,0x4050
ram:0010e2a4	00188011	st r6,[r8]
ram:0010e2a8	0c170610	ld r6,[r15,0xc]
ram:0010e2ac	01db	mov_s r3,0x1
ram:0010e2ae	3026850f00001830	ld r5,[r6, 0x3018]
ram:0010e2b6	04184011	st r5,[r8,0x4]
ram:0010e2ba	00140930	ld r9,[sp]
ram:0010e2be	04140830	ld r8,[sp,0x4]
ram:0010e2c2	701e4012	st r9,[r14,0x70]
ram:0010e2c6	741e0012	st r8,[r14,0x74]
ram:0010e2ca	3020812f00005040	ld r1,[r16, 0x4050]
ram:0010e2d2	10160411	ldh r4,[r14,0x10]
ram:0010e2d6	01e1	add_s r1,r1,0x1
ram:0010e2d8	20a4	st_s r1,[r12,0x0]
ram:0010e2da	2086	ld_s r1,[r14,0x0]
ram:0010e2dc	04160210	ld r2,[r14,0x4]
ram:0010e2e0	a60defff	bl.d 0x0010e084
ram:0010e2e4	44240408	_and r4,r4,0x20
ram:0010e2e8	0a2100a0	mov.f r17,r0
ram:0010e2ec	78000200	bne 0x0010e364
ram:0010e2f0	cf720380e08e	mov_s r2,0x80038ee0
ram:0010e2f6	6082	ld_s r3,[r2,0x0]
ram:0010e2f8	04120900	ld r9,[r2,0x4]
ram:0010e2fc	00208c2f0000a840	add r12,r16,0x40a8
ram:0010e304	40260017	add r0,r14,0x1c
ram:0010e308	60a4	st_s r3,[r12,0x0]
ram:0010e30a	00208c2f0000ac40	add r12,r16,0x40ac
ram:0010e312	001c4012	st r9,[r12]
ram:0010e316	0a218024	mov r17,r18
ram:0010e31a	4a71	mov_s r1,r18
ram:0010e31c	1cda	mov_s r2,0x1c
ram:0010e31e	2220800f0e0080ea	jl 0x000eea80
ram:0010e326	001c8034	st r18,[sp]
ram:0010e32a	41c5	st_s r13,[sp,0x4]
ram:0010e32c	0c170510	ld r5,[r15,0xc]
ram:0010e330	8b70	mov_s r0,sp
ram:0010e332	3025840f00001430	ld r4,[r5, 0x3014]
ram:0010e33a	00180001	st r4,[r0]
ram:0010e33e	0c170710	ld r7,[r15,0xc]
ram:0010e342	3027830f00001830	ld r3,[r7, 0x3018]
ram:0010e34a	61a0	st_s r3,[r0,0x4]
ram:0010e34c	00c1	ld_s r1,[sp,0x0]
ram:0010e34e	04140a30	ld r10,[sp,0x4]
ram:0010e352	27a6	st_s r1,[r14,0x1c]
ram:0010e354	201e8012	st r10,[r14,0x20]
ram:0010e358	4786	ld_s r2,[r14,0x1c]
ram:0010e35a	20160b10	ld r11,[r14,0x20]
ram:0010e35e	5ea6	st_s r2,[r14,0x78]
ram:0010e360	7c1ec012	st r11,[r14,0x7c]
ram:0010e364	2a70	mov_s r0,r17
ram:0010e366	a2c0	add_s sp,sp,0x8
ram:0010e368	04141f30	ld blink,[sp,0x4]
ram:0010e36c	02c6	ld_s r14,[sp,0x8]
ram:0010e36e	03c7	ld_s r15,[sp,0xc]
ram:0010e370	10141030	ld r16,[sp,0x10]
ram:0010e374	14141130	ld r17,[sp,0x14]
ram:0010e378	18141230	ld r18,[sp,0x18]
ram:0010e37c	2120c007	j.d [blink]
ram:0010e380	1c140d34	_ld.ab r13,[sp,0x1c]
