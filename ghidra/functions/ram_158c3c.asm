; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00158c3c entry ram:00158c3c
ram:00158c3c	f41c48b3	st.aw r13,[sp,-0xc]
ram:00158c40	041cc037	st blink,[sp,0x4]
ram:00158c44	081c8033	st r14,[sp,0x8]
ram:00158c48	3221800f00007c06	ldb r0,[r1, 0x67c]
ram:00158c50	c609affe	bl.d 0x00155e14
ram:00158c54	0a264010	_mov r14,r1
ram:00158c58	65168210	ldb r2,[r14,0x65]
ram:00158c5c	0875	mov_s r13,r0
ram:00158c5e	80200200	add r0,r0,0x80
ram:00158c62	01d9	mov_s r1,0x1
ram:00158c64	d60aeffe	bl.d 0x00156738
ram:00158c68	4a238000	_mov r3,0x2
ram:00158c6c	e3160116	ld.as r1,[r14,0xe3]
ram:00158c70	55254016	add2 r0,r13,0x19
ram:00158c74	02da	mov_s r2,0x2
ram:00158c76	2220800f0280545e	jl 0x80025e54
ram:00158c7e	e3160116	ld.as r1,[r14,0xe3]
ram:00158c82	04141f30	ld blink,[sp,0x4]
ram:00158c86	e41e5810	st.as r1,[r14,0xe4]
ram:00158c8a	02c6	ld_s r14,[sp,0x8]
ram:00158c8c	2120c007	j.d [blink]
ram:00158c90	0c140d34	_ld.ab r13,[sp,0xc]
