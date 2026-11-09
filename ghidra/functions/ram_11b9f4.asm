; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0011b9f4 entry ram:0011b9f4
ram:0011b9f4	f41c48b3	st.aw r13,[sp,-0xc]
ram:0011b9f8	041cc037	st blink,[sp,0x4]
ram:0011b9fc	2875	mov_s r13,r1
ram:0011b9fe	2690	ldw_s r1,[r0,0xc]
ram:0011ba00	23b9	lsr_s r1,r1,0x3
ram:0011ba02	42c6	st_s r14,[sp,0x8]
ram:0011ba04	52210100	bxor r1,r1,0x0
ram:0011ba08	65093f00	bbit1.d r1,0x0,0x0011ba6c
ram:0011ba0c	0a260000	_mov r6,r0
ram:0011ba10	3226850f00008206	ldb r5,[r6, 0x682]
ram:0011ba18	00268e0f0000f405	add r14,r6,0x5f4
ram:0011ba20	4d0d4011	breq r13,r5,0x0011ba6c
ram:0011ba24	00168370028028c2	ldb r3,[0x8002c228]
ram:0011ba2c	1d0bd200	brlt r3,0x3,0x0011ba48
ram:0011ba30	cf701c00d02a	mov_s r0,0x1c2ad0
ram:0011ba36	0026810f00009600	add r1,r6,0x96
ram:0011ba3e	a972	mov_s r2,r13
ram:0011ba40	2220800f0e0060e2	jl 0x000ee260
ram:0011ba48	0a24800f0380f477	mov r4,0x800377f4
ram:0011ba50	44140006	ld.as r0,[r4,0x44]
ram:0011ba54	88168210	ldb r2,[r14,0x88]
ram:0011ba58	461c5803	st.as r13,[r4,0x46]
ram:0011ba5c	40204000	add r0,r0,0x1
ram:0011ba60	451c9800	st.as r2,[r4,0x45]
ram:0011ba64	441c1800	st.as r0,[r4,0x44]
ram:0011ba68	8e1e4213	stb r13,[r14,0x8e]
ram:0011ba6c	04141f30	ld blink,[sp,0x4]
ram:0011ba70	02c6	ld_s r14,[sp,0x8]
ram:0011ba72	e07f	j_s.d [blink]
ram:0011ba74	0c140d34	_ld.ab r13,[sp,0xc]
