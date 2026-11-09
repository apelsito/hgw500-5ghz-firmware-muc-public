; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00157688 entry ram:00157688
ram:00157688	f41c48b3	st.aw r13,[sp,-0xc]
ram:0015768c	041cc037	st blink,[sp,0x4]
ram:00157690	42c6	st_s r14,[sp,0x8]
ram:00157692	0876	mov_s r14,r0
ram:00157694	00208d0f0000f405	add r13,r0,0x5f4
ram:0015769c	3220800f00007c06	ldb r0,[r0, 0x67c]
ram:001576a4	720f0fff	bl 0x00155e14
ram:001576a8	0ee8	breq_s r0,0,0x001576c4
ram:001576aa	3226821f00000e04	ldb r2,[r14, 0x40e]
ram:001576b2	80208201	add r0,r0,0x86
ram:001576b6	01d9	mov_s r1,0x1
ram:001576b8	8208afff	bl.d 0x00156738
ram:001576bc	4a238000	_mov r3,0x2
ram:001576c0	19000000	b 0x001576d8
ram:001576c4	88158110	ldb r1,[r13,0x88]
ram:001576c8	0a20800f1c00c874	mov r0,0x1c74c8
ram:001576d0	2220800f0e0060e2	jl 0x000ee260
ram:001576d8	04141f30	ld blink,[sp,0x4]
ram:001576dc	02c6	ld_s r14,[sp,0x8]
ram:001576de	e07f	j_s.d [blink]
ram:001576e0	0c140d34	_ld.ab r13,[sp,0xc]
