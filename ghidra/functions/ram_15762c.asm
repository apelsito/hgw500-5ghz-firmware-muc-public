; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0015762c entry ram:0015762c
ram:0015762c	f41c48b3	st.aw r13,[sp,-0xc]
ram:00157630	041cc037	st blink,[sp,0x4]
ram:00157634	42c6	st_s r14,[sp,0x8]
ram:00157636	0876	mov_s r14,r0
ram:00157638	00208d0f0000f405	add r13,r0,0x5f4
ram:00157640	3220800f00007c06	ldb r0,[r0, 0x67c]
ram:00157648	ce0f0fff	bl 0x00155e14
ram:0015764c	0ee8	breq_s r0,0,0x00157668
ram:0015764e	3426821f00000c04	ldh r2,[r14, 0x40c]
ram:00157656	80200202	add r0,r0,0x88
ram:0015765a	02d9	mov_s r1,0x2
ram:0015765c	de08afff	bl.d 0x00156738
ram:00157660	0a234000	_mov r3,r1
ram:00157664	19000000	b 0x0015767c
ram:00157668	88158110	ldb r1,[r13,0x88]
ram:0015766c	0a20800f1c00c874	mov r0,0x1c74c8
ram:00157674	2220800f0e0060e2	jl 0x000ee260
ram:0015767c	04141f30	ld blink,[sp,0x4]
ram:00157680	02c6	ld_s r14,[sp,0x8]
ram:00157682	e07f	j_s.d [blink]
ram:00157684	0c140d34	_ld.ab r13,[sp,0xc]
