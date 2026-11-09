; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00183c8c entry ram:00183c8c
ram:00183c8c	f81c48b3	st.aw r13,[sp,-0x8]
ram:00183c90	041c8033	st r14,[sp,0x4]
ram:00183c94	eb76	mov_s r14,blink
ram:00183c96	cf73ffe584fe	mov_s r3,0xe5fffe84
ram:00183c9c	68130d06	ld.as r13,[r3,0x68]
ram:00183ca0	cf7118000cc4	mov_s r1,0x18c40c
ram:00183ca6	0081	ld_s r0,[r1,0x0]
ram:00183ca8	40204000	add r0,r0,0x1
ram:00183cac	190db010	breq.d r13,0x2,0x00183cc4
ram:00183cb0	00190000	_st r0,[r1]
ram:00183cb4	02da	mov_s r2,0x2
ram:00183cb6	681b9800	st.as r2,[r3,0x68]
ram:00183cba	0ad8	mov_s r0,0xa
ram:00183cbc	2220800f0e00a04f	jl 0x000e4fa0
ram:00183cc4	a970	mov_s r0,r13
ram:00183cc6	fb76	mov_s blink,r14
ram:00183cc8	01c6	ld_s r14,[sp,0x4]
ram:00183cca	e07f	j_s.d [blink]
ram:00183ccc	08140d34	_ld.ab r13,[sp,0x8]
