; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0012aa1c entry ram:0012aa1c
ram:0012aa1c	e81c48b3	st.aw r13,[sp,-0x18]
ram:0012aa20	041cc037	st blink,[sp,0x4]
ram:0012aa24	42c6	st_s r14,[sp,0x8]
ram:0012aa26	101c0034	st r16,[sp,0x10]
ram:0012aa2a	141c4034	st r17,[sp,0x14]
ram:0012aa2e	3a70	mov_s r17,r0
ram:0012aa30	1a71	mov_s r16,r1
ram:0012aa32	4875	mov_s r13,r2
ram:0012aa34	0a204000	mov r0,r1
ram:0012aa38	2220800f1200bc26	jl 0x001226bc
ram:0012aa40	3020802f0000380d	ld r0,[r16, 0xd38]
ram:0012aa48	00208b2f0000f80f	add r11,r16,0xff8
ram:0012aa50	99083000	breq.d r0,0x0,0x0012aae8
ram:0012aa54	0c1cc033	_st r15,[sp,0xc]
ram:0012aa58	51130e96	ld.as r14,[r11,-0xaf]
ram:0012aa5c	0a70	mov_s r0,r16
ram:0012aa5e	e086	ld_s r15,[r14,0x0]
ram:0012aa60	2220800f1100a8bc	jl 0x0011bca8
ram:0012aa68	3220862f00008806	ldb r6,[r16, 0x688]
ram:0012aa70	30170510	ld r5,[r15,0x30]
ram:0012aa74	00260600	add r6,r6,r0
ram:0012aa78	402e0602	asl r6,r6,0x8
ram:0012aa7c	8425e30f	and r5,r5,-0x701
ram:0012aa80	3420832f00002204	ldh r3,[r16, 0x422]
ram:0012aa88	84261c00	and r6,r6,0x700
ram:0012aa8c	05258501	or r5,r5,r6
ram:0012aa90	10bb	asl_s r3,r3,0x10
ram:0012aa92	301f4011	st r5,[r15,0x30]
ram:0012aa96	0423820fff010000	and r2,r3,0x1ff0000
ram:0012aa9e	0522820f0002f003	or r2,r2,0x20003f0
ram:0012aaa6	52a7	st_s r2,[r15,0x48]
ram:0012aaa8	30218a2f0000203b	ld r10,[r17, 0x3b20]
ram:0012aab0	402d4411	asl r4,r13,0x5
ram:0012aab4	00160910	ld r9,[r14]
ram:0012aab8	80240200	add r4,r4,0x80
ram:0012aabc	0c120110	ld r1,[r10,0xc]
ram:0012aac0	4a274000	mov r7,0x1
ram:0012aac4	8071	add_s r1,r1,r4
ram:0012aac6	0019c001	st r7,[r1]
ram:0012aaca	0c120310	ld r3,[r10,0xc]
ram:0012aace	8073	add_s r3,r3,r4
ram:0012aad0	001b4002	st r9,[r3]
ram:0012aad4	0a20801f0380f477	mov r8,0x800377f4
ram:0012aadc	18100010	ld r0,[r8,0x18]
ram:0012aae0	40204000	add r0,r0,0x1
ram:0012aae4	18180010	st r0,[r8,0x18]
ram:0012aae8	04141f30	ld blink,[sp,0x4]
ram:0012aaec	02c6	ld_s r14,[sp,0x8]
ram:0012aaee	03c7	ld_s r15,[sp,0xc]
ram:0012aaf0	10141030	ld r16,[sp,0x10]
ram:0012aaf4	14141130	ld r17,[sp,0x14]
ram:0012aaf8	2120c007	j.d [blink]
ram:0012aafc	18140d34	_ld.ab r13,[sp,0x18]
