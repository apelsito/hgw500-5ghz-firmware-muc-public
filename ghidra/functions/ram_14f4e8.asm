; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0014f4e8 entry ram:0014f4e8
ram:0014f4e8	ec1c48b3	st.aw r13,[sp,-0x14]
ram:0014f4ec	041cc037	st blink,[sp,0x4]
ram:0014f4f0	42c6	st_s r14,[sp,0x8]
ram:0014f4f2	43c7	st_s r15,[sp,0xc]
ram:0014f4f4	101c0034	st r16,[sp,0x10]
ram:0014f4f8	1a71	mov_s r16,r1
ram:0014f4fa	00208d0f00009037	add r13,r0,0x3790
ram:0014f502	56258e17	add3 r14,r13,0x1e
ram:0014f506	4877	mov_s r15,r2
ram:0014f508	046e	add_s r0,r14,0x4
ram:0014f50a	2220800f0e00507d	jl 0x000e7d50
ram:0014f512	fc150d10	ld r13,[r13,0xfc]
ram:0014f516	0ced	breq_s r13,0,0x0014f52c
ram:0014f518	0a204003	mov r0,r13
ram:0014f51c	23200004	jl.d [r16]
ram:0014f520	0a21c003	_mov r1,r15
ram:0014f524	45150d16	ld.as r13,[r13,0x45]
ram:0014f528	f10d1190	brne r13,0x0,0x0014f518
ram:0014f52c	046e	add_s r0,r14,0x4
ram:0014f52e	2220800f0e00a87d	jl 0x000e7da8
ram:0014f536	04141f30	ld blink,[sp,0x4]
ram:0014f53a	02c6	ld_s r14,[sp,0x8]
ram:0014f53c	03c7	ld_s r15,[sp,0xc]
ram:0014f53e	10141030	ld r16,[sp,0x10]
ram:0014f542	e07f	j_s.d [blink]
ram:0014f544	14140d34	_ld.ab r13,[sp,0x14]
