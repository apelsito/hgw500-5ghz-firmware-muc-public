; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0011da28 entry ram:0011da28
ram:0011da28	f01c48b3	st.aw r13,[sp,-0x10]
ram:0011da2c	041cc037	st blink,[sp,0x4]
ram:0011da30	0c1cc033	st r15,[sp,0xc]
ram:0011da34	0a270090	mov.f r15,r0
ram:0011da38	38002100	beq.d 0x0011da70
ram:0011da3c	081c8033	_st r14,[sp,0x8]
ram:0011da40	e5170016	ld.as r0,[r15,0xe5]
ram:0011da44	2220800f0e0034e8	jl 0x000ee834
ram:0011da4c	00de	mov_s r14,0x0
ram:0011da4e	e51f9813	st.as r14,[r15,0xe5]
ram:0011da52	04dd	mov_s r13,0x4
ram:0011da54	e6170016	ld.as r0,[r15,0xe6]
ram:0011da58	2220800f0e0034e8	jl 0x000ee834
ram:0011da60	e61f9813	st.as r14,[r15,0xe6]
ram:0011da64	42254d10	sub r13,r13,0x1
ram:0011da68	ed0d7590	brhs.d r13,0x1,0x0011da54
ram:0011da6c	40270f11	_add r15,r15,0x4
ram:0011da70	04141f30	ld blink,[sp,0x4]
ram:0011da74	02c6	ld_s r14,[sp,0x8]
ram:0011da76	03c7	ld_s r15,[sp,0xc]
ram:0011da78	2120c007	j.d [blink]
ram:0011da7c	10140d34	_ld.ab r13,[sp,0x10]
