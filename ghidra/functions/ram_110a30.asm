; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00110a30 entry ram:00110a30
ram:00110a30	f81c48b3	st.aw r13,[sp,-0x8]
ram:00110a34	41c6	st_s r14,[sp,0x4]
ram:00110a36	a3c1	sub_s sp,sp,0xc
ram:00110a38	eb76	mov_s r14,blink
ram:00110a3a	00100900	ld r9,[r0]
ram:00110a3e	2875	mov_s r13,r1
ram:00110a40	10150510	ld r5,[r13,0x10]
ram:00110a44	14150710	ld r7,[r13,0x14]
ram:00110a48	4a240000	mov r4,0x0
ram:00110a4c	24190001	st r4,[r1,0x24]
ram:00110a50	1c110810	ld r8,[r9,0x1c]
ram:00110a54	2a81	ld_s r1,[r1,0x28]
ram:00110a56	cf721000f0d2	mov_s r2,0x10d2f0
ram:00110a5c	40c2	st_s r2,[sp,0x0]
ram:00110a5e	41c0	st_s r0,[sp,0x4]
ram:00110a60	42c5	st_s r13,[sp,0x8]
ram:00110a62	3020801f0000203b	ld r0,[r8, 0x3b20]
ram:00110a6a	4085	ld_s r2,[r13,0x0]
ram:00110a6c	0a24800f100060d2	mov r4,0x10d260
ram:00110a74	04150310	ld r3,[r13,0x4]
ram:00110a78	0a26800f1000f4d1	mov r6,0x10d1f4
ram:00110a80	7e092ffc	bl.d 0x00108bfc
ram:00110a84	84210100	_and r1,r1,0x40
ram:00110a88	24150110	ld r1,[r13,0x24]
ram:00110a8c	4f210300	bset r3,r1,0x0
ram:00110a90	11083000	breq.d r0,0x0,0x00110aa0
ram:00110a94	241dc010	_st r3,[r13,0x24]
ram:00110a98	4521410c	or r1,r1,0x31
ram:00110a9c	241d4010	st r1,[r13,0x24]
ram:00110aa0	fb76	mov_s blink,r14
ram:00110aa2	a3c0	add_s sp,sp,0xc
ram:00110aa4	01c6	ld_s r14,[sp,0x4]
ram:00110aa6	e07f	j_s.d [blink]
ram:00110aa8	08140d34	_ld.ab r13,[sp,0x8]
