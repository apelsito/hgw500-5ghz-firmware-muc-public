; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0011e424 entry ram:0011e424
ram:0011e424	f41c48b3	st.aw r13,[sp,-0xc]
ram:0011e428	041cc037	st blink,[sp,0x4]
ram:0011e42c	42c6	st_s r14,[sp,0x8]
ram:0011e42e	00208d0f00009037	add r13,r0,0x3790
ram:0011e436	11d8	mov_s r0,0x11
ram:0011e438	2220800f0e00286c	jl 0x000e6c28
ram:0011e440	25083000	breq.d r0,0x0,0x0011e464
ram:0011e444	56258e17	_add3 r14,r13,0x1e
ram:0011e448	046e	add_s r0,r14,0x4
ram:0011e44a	2220800f0e00507d	jl 0x000e7d50
ram:0011e452	fc150d10	ld r13,[r13,0xfc]
ram:0011e456	8eed	brne_s r13,0,0x0011e470
ram:0011e458	40260011	add r0,r14,0x4
ram:0011e45c	2220800f0e00a87d	jl 0x000e7da8
ram:0011e464	04141f30	ld blink,[sp,0x4]
ram:0011e468	02c6	ld_s r14,[sp,0x8]
ram:0011e46a	e07f	j_s.d [blink]
ram:0011e46c	0c140d34	_ld.ab r13,[sp,0xc]
ram:0011e470	6085	ld_s r3,[r13,0x0]
ram:0011e472	16eb	breq_s r3,0,0x0011e49c
ram:0011e474	0f83	ld_s r0,[r3,0x3c]
ram:0011e476	290d0010	breq r13,r0,0x0011e49c
ram:0011e47a	3425821f0000c403	ldh r2,[r13, 0x3c4]
ram:0011e482	10ba	asl_s r2,r2,0x10
ram:0011e484	3425811f0000c203	ldh r1,[r13, 0x3c2]
ram:0011e48c	4579	or_s r1,r1,r2
ram:0011e48e	f4b9	btst_s r1,0x14
ram:0011e490	ca204203	mov.ne r0,r13
ram:0011e494	e220820f13007cd3	jlne 0x0013d37c
ram:0011e49c	45150d16	ld.as r13,[r13,0x45]
ram:0011e4a0	d10d1190	brne r13,0x0,0x0011e470
ram:0011e4a4	daf1	b_s 0x0011e458
