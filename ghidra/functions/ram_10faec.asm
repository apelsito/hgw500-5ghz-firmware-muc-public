; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0010faec entry ram:0010faec
ram:0010faec	f01c48b3	st.aw r13,[sp,-0x10]
ram:0010faf0	041cc037	st blink,[sp,0x4]
ram:0010faf4	43c7	st_s r15,[sp,0xc]
ram:0010faf6	00100600	ld r6,[r0]
ram:0010fafa	2877	mov_s r15,r1
ram:0010fafc	1c160d00	ld r13,[r6,0x1c]
ram:0010fb00	42c6	st_s r14,[sp,0x8]
ram:0010fb02	3025851f0000805b	ld r5,[r13, 0x5b80]
ram:0010fb0a	c7750000e03f	add_s r13,r13,0x3fe0
ram:0010fb10	390d7200	brlt.d r5,0x1,0x0010fb48
ram:0010fb14	4a264011	_mov r14,0x5
ram:0010fb18	0a24800f0380e08e	mov r4,0x80038ee0
ram:0010fb20	00140200	ld r2,[r4]
ram:0010fb24	248f	ldb_s r1,[r15,0x4]
ram:0010fb26	cf701c002412	mov_s r0,0x1c1224
ram:0010fb2c	04140300	ld r3,[r4,0x4]
ram:0010fb30	2220800f0e0060e2	jl 0x000ee260
ram:0010fb38	0a20800f1c000000	mov r0,0x1c0000
ram:0010fb40	2220800f0e0060e2	jl 0x000ee260
ram:0010fb48	80150110	ld r1,[r13,0x80]
ram:0010fb4c	a3b9	bclr_s r1,r1,0x3
ram:0010fb4e	801d4010	st r1,[r13,0x80]
ram:0010fb52	c7a7	st_s r14,[r15,0x1c]
ram:0010fb54	cf7200e00400	mov_s r2,0xe0000004
ram:0010fb5a	281a800f00040004	st 0x4000400,[r2,0x28]
ram:0010fb62	cf7300e02c00	mov_s r3,0xe000002c
ram:0010fb68	00130008	ld.di r0,[r3]
ram:0010fb6c	6f233f00	sync
ram:0010fb70	04141f30	ld blink,[sp,0x4]
ram:0010fb74	08140e30	ld r14,[sp,0x8]
ram:0010fb78	03c7	ld_s r15,[sp,0xc]
ram:0010fb7a	e07f	j_s.d [blink]
ram:0010fb7c	10140d34	_ld.ab r13,[sp,0x10]
