; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000e7ad8 entry ram:000e7ad8
ram:000e7ad8	f81c48b3	st.aw r13,[sp,-0x8]
ram:000e7adc	41c6	st_s r14,[sp,0x4]
ram:000e7ade	4c100a00	ld r10,[r0,0x4c]
ram:000e7ae2	eb76	mov_s r14,blink
ram:000e7ae4	4c220090	cmp r10,0x0
ram:000e7ae8	7c002100	beq.d 0x000e7b64
ram:000e7aec	0a250010	_mov r13,r0
ram:000e7af0	40150910	ld r9,[r13,0x40]
ram:000e7af4	00110810	ld r8,[r9]
ram:000e7af8	4c200090	cmp r8,0x0
ram:000e7afc	78000200	bne 0x000e7b74
ram:000e7b00	28120710	ld r7,[r10,0x28]
ram:000e7b04	0019c011	st r7,[r9]
ram:000e7b08	00110018	ld.di r0,[r9]
ram:000e7b0c	6f233f00	sync
ram:000e7b10	4a260000	mov r6,0x0
ram:000e7b14	4c1d8011	st r6,[r13,0x4c]
ram:000e7b18	501d8011	st r6,[r13,0x50]
ram:000e7b1c	48158210	ldb r2,[r13,0x48]
ram:000e7b20	541d8011	st r6,[r13,0x54]
ram:000e7b24	40220104	add r1,r2,0x10
ram:000e7b28	002e807000000100	asl r0,0x1,r2
ram:000e7b30	4a254010	mov r13,0x1
ram:000e7b34	0f204300	bset r3,r0,r1
ram:000e7b38	0a24800f00e00400	mov r4,0xe0000004
ram:000e7b40	281cc000	st r3,[r4,0x28]
ram:000e7b44	0a25800f00e02c00	mov r5,0xe000002c
ram:000e7b4c	00150008	ld.di r0,[r5]
ram:000e7b50	6f233f00	sync
ram:000e7b54	0a204003	mov r0,r13
ram:000e7b58	0a278033	mov blink,r14
ram:000e7b5c	01c6	ld_s r14,[sp,0x4]
ram:000e7b5e	e07f	j_s.d [blink]
ram:000e7b60	08140d34	_ld.ab r13,[sp,0x8]
ram:000e7b64	fb76	mov_s blink,r14
ram:000e7b66	01c6	ld_s r14,[sp,0x4]
ram:000e7b68	08140d34	ld.ab r13,[sp,0x8]
ram:000e7b6c	2120c007	j.d [blink]
ram:000e7b70	4a204000	_mov r0,0x1
ram:000e7b74	fb76	mov_s blink,r14
ram:000e7b76	01c6	ld_s r14,[sp,0x4]
ram:000e7b78	08140d34	ld.ab r13,[sp,0x8]
ram:000e7b7c	2120c007	j.d [blink]
ram:000e7b80	4a200000	_mov r0,0x0
