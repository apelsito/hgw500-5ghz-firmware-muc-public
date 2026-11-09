; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000e4bd8 entry ram:000e4bd8
ram:000e4bd8	f01c48b3	st.aw r13,[sp,-0x10]
ram:000e4bdc	041cc037	st blink,[sp,0x4]
ram:000e4be0	42c6	st_s r14,[sp,0x8]
ram:000e4be2	43c7	st_s r15,[sp,0xc]
ram:000e4be4	40280e02	asl r14,r0,0x8
ram:000e4be8	2877	mov_s r15,r1
ram:000e4bea	b469	asl_s r13,r1,0x4
ram:000e4bec	0026801f000000f6	add r0,r14,0xf600
ram:000e4bf4	0025821f1800c8c5	add r2,r13,0x18c5c8
ram:000e4bfc	d20fafff	bl.d 0x000e43cc
ram:000e4c00	4a210001	_mov r1,0x4
ram:000e4c04	556f	asl_s r2,r15,0x5
ram:000e4c06	0026801f000040f6	add r0,r14,0xf640
ram:000e4c0e	c7721800e8c6	add_s r2,r2,0x18c6e8
ram:000e4c14	ba0fafff	bl.d 0x000e43cc
ram:000e4c18	4a210002	_mov r1,0x8
ram:000e4c1c	14254213	add1 r2,r13,r13
ram:000e4c20	0026801f000080f6	add r0,r14,0xf680
ram:000e4c28	0022820f180028c9	add r2,r2,0x18c928
ram:000e4c30	9e0fafff	bl.d 0x000e43cc
ram:000e4c34	4a210003	_mov r1,0xc
ram:000e4c38	04141f30	ld blink,[sp,0x4]
ram:000e4c3c	08140e30	ld r14,[sp,0x8]
ram:000e4c40	03c7	ld_s r15,[sp,0xc]
ram:000e4c42	e07f	j_s.d [blink]
ram:000e4c44	10140d34	_ld.ab r13,[sp,0x10]
