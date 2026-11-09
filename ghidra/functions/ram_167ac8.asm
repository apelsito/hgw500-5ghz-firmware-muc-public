; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00167ac8 entry ram:00167ac8
ram:00167ac8	f41c48b3	st.aw r13,[sp,-0xc]
ram:00167acc	041cc037	st blink,[sp,0x4]
ram:00167ad0	2870	mov_s r0,r1
ram:00167ad2	2220800f0f00dc4b	jl 0x000f4bdc
ram:00167ada	02b8	asl_s r0,r0,0x2
ram:00167adc	42c6	st_s r14,[sp,0x8]
ram:00167ade	1578	add2_s r0,r0,r0
ram:00167ae0	00d9	mov_s r1,0x0
ram:00167ae2	00208d0f1d006cce	add r13,r0,0x1dce6c
ram:00167aea	14d8	mov_s r0,0x14
ram:00167aec	2220800f0e0034e7	jl 0x000ee734
ram:00167af4	00d9	mov_s r1,0x0
ram:00167af6	0876	mov_s r14,r0
ram:00167af8	14da	mov_s r2,0x14
ram:00167afa	2220800f0e0080ea	jl 0x000eea80
ram:00167b02	0185	ld_s r0,[r13,0x4]
ram:00167b04	80e0	cmp_s r0,0x0
ram:00167b06	e220820f0e0034e8	jlne 0x000ee834
ram:00167b0e	c1a5	st_s r14,[r13,0x4]
ram:00167b10	04141f30	ld blink,[sp,0x4]
ram:00167b14	02c6	ld_s r14,[sp,0x8]
ram:00167b16	0c140d34	ld.ab r13,[sp,0xc]
ram:00167b1a	e07f	j_s.d [blink]
ram:00167b1c	4a200000	_mov r0,0x0
