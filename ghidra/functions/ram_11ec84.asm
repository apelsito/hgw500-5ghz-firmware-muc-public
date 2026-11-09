; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0011ec84 entry ram:0011ec84
ram:0011ec84	f41c48b3	st.aw r13,[sp,-0xc]
ram:0011ec88	081c8033	st r14,[sp,0x8]
ram:0011ec8c	00208d0f00009037	add r13,r0,0x3790
ram:0011ec94	56258e17	add3 r14,r13,0x1e
ram:0011ec98	041cc037	st blink,[sp,0x4]
ram:0011ec9c	046e	add_s r0,r14,0x4
ram:0011ec9e	2220800f0e00507d	jl 0x000e7d50
ram:0011eca6	fc150d10	ld r13,[r13,0xfc]
ram:0011ecaa	0aed	breq_s r13,0,0x0011ecbc
ram:0011ecac	a970	mov_s r0,r13
ram:0011ecae	2220800f13007cd3	jl 0x0013d37c
ram:0011ecb6	45150d16	ld.as r13,[r13,0x45]
ram:0011ecba	faed	brne_s r13,0,0x0011ecac
ram:0011ecbc	046e	add_s r0,r14,0x4
ram:0011ecbe	2220800f0e00a87d	jl 0x000e7da8
ram:0011ecc6	04141f30	ld blink,[sp,0x4]
ram:0011ecca	02c6	ld_s r14,[sp,0x8]
ram:0011eccc	2120c007	j.d [blink]
ram:0011ecd0	0c140d34	_ld.ab r13,[sp,0xc]
