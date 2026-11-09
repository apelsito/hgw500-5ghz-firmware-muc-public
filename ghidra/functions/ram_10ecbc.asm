; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0010ecbc entry ram:0010ecbc
ram:0010ecbc	f01c48b3	st.aw r13,[sp,-0x10]
ram:0010ecc0	041cc037	st blink,[sp,0x4]
ram:0010ecc4	42c6	st_s r14,[sp,0x8]
ram:0010ecc6	43c7	st_s r15,[sp,0xc]
ram:0010ecc8	00100b00	ld r11,[r0]
ram:0010eccc	0877	mov_s r15,r0
ram:0010ecce	cf721000e4ed	mov_s r2,0x10ede4
ram:0010ecd4	1c130e10	ld r14,[r11,0x1c]
ram:0010ecd8	4a0f2fff	bl.d 0x0010d420
ram:0010ecdc	0a254010	_mov r13,r1
ram:0010ece0	45081100	brne r0,0x0,0x0010ed24
ram:0010ece4	3426891f0000b040	ldh r9,[r14, 0x40b0]
ram:0010ecec	4a224011	mov r10,0x5
ram:0010ecf0	4c21c090	cmp r9,0x3
ram:0010ecf4	e0002b00	blt.d 0x0010edd4
ram:0010ecf8	0c1d8012	_st r10,[r13,0xc]
ram:0010ecfc	248d	ldb_s r1,[r13,0x4]
ram:0010ecfe	3226821f00005d40	ldb r2,[r14, 0x405d]
ram:0010ed06	cf701c00180f	mov_s r0,0x1c0f18
ram:0010ed0c	2220800f0e0060e2	jl 0x000ee260
ram:0010ed14	04141f30	ld blink,[sp,0x4]
ram:0010ed18	02c6	ld_s r14,[sp,0x8]
ram:0010ed1a	03c7	ld_s r15,[sp,0xc]
ram:0010ed1c	2120c007	j.d [blink]
ram:0010ed20	10140d34	_ld.ab r13,[sp,0x10]
ram:0010ed24	45085100	brne r0,0x1,0x0010ed68
ram:0010ed28	3426861f0000b040	ldh r6,[r14, 0x40b0]
ram:0010ed30	1d0e5200	brlt r6,0x1,0x0010ed4c
ram:0010ed34	248d	ldb_s r1,[r13,0x4]
ram:0010ed36	3226821f00005d40	ldb r2,[r14, 0x405d]
ram:0010ed3e	cf701c00400f	mov_s r0,0x1c0f40
ram:0010ed44	2220800f0e0060e2	jl 0x000ee260
ram:0010ed4c	0a20c003	mov r0,r15
ram:0010ed50	6e0fefff	bl.d 0x0010ecbc
ram:0010ed54	0a214003	_mov r1,r13
ram:0010ed58	04141f30	ld blink,[sp,0x4]
ram:0010ed5c	08140e30	ld r14,[sp,0x8]
ram:0010ed60	03c7	ld_s r15,[sp,0xc]
ram:0010ed62	e07f	j_s.d [blink]
ram:0010ed64	10140d34	_ld.ab r13,[sp,0x10]
ram:0010ed68	4a20c010	mov r8,0x3
ram:0010ed6c	0c1d0012	st r8,[r13,0xc]
ram:0010ed70	0a25800f00e00400	mov r5,0xe0000004
ram:0010ed78	281d800f00100010	st 0x10001000,[r5,0x28]
ram:0010ed80	0a24800f00e02c00	mov r4,0xe000002c
ram:0010ed88	00140008	ld.di r0,[r4]
ram:0010ed8c	6f233f00	sync
ram:0010ed90	3026831f00006040	ld r3,[r14, 0x4060]
ram:0010ed98	50234300	bclr r3,r3,0x1
ram:0010ed9c	3426871f0000b040	ldh r7,[r14, 0x40b0]
ram:0010eda4	00268c1f00006040	add r12,r14,0x4060
ram:0010edac	290ff200	brlt.d r7,0x3,0x0010edd4
ram:0010edb0	001cc010	_st r3,[r12]
ram:0010edb4	248d	ldb_s r1,[r13,0x4]
ram:0010edb6	cf701c006c0f	mov_s r0,0x1c0f6c
ram:0010edbc	2220800f0e0060e2	jl 0x000ee260
ram:0010edc4	04141f30	ld blink,[sp,0x4]
ram:0010edc8	02c6	ld_s r14,[sp,0x8]
ram:0010edca	03c7	ld_s r15,[sp,0xc]
ram:0010edcc	2120c007	j.d [blink]
ram:0010edd0	10140d34	_ld.ab r13,[sp,0x10]
ram:0010edd4	04141f30	ld blink,[sp,0x4]
ram:0010edd8	02c6	ld_s r14,[sp,0x8]
ram:0010edda	03c7	ld_s r15,[sp,0xc]
ram:0010eddc	2120c007	j.d [blink]
ram:0010ede0	10140d34	_ld.ab r13,[sp,0x10]
