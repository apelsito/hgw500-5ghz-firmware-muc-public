; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00107980 entry ram:00107980
ram:00107980	f41c48b3	st.aw r13,[sp,-0xc]
ram:00107984	081c8033	st r14,[sp,0x8]
ram:00107988	00208e0f0000e03f	add r14,r0,0x3fe0
ram:00107990	5f160096	ld.as r0,[r14,-0xa1]
ram:00107994	4d083000	breq.d r0,0x0,0x001079e0
ram:00107998	041cc037	_st blink,[sp,0x4]
ram:0010799c	5d160296	ld.as r2,[r14,-0xa3]
ram:001079a0	210a1000	breq r2,0x0,0x001079c0
ram:001079a4	14120200	ld r2,[r2,0x14]
ram:001079a8	150a3100	brne.d r2,0x0,0x001079bc
ram:001079ac	5d1e9890	_st.as r2,[r14,-0xa3]
ram:001079b0	0226811f00008c02	sub r1,r14,0x28c
ram:001079b8	5e1e5890	st.as r1,[r14,-0xa2]
ram:001079bc	e90a1180	brne r2,0x0,0x001079a4
ram:001079c0	00dd	mov_s r13,0x0
ram:001079c2	a971	mov_s r1,r13
ram:001079c4	8a220c00	mov r2,0x300
ram:001079c8	2220800f0e0080ea	jl 0x000eea80
ram:001079d0	5f160096	ld.as r0,[r14,-0xa1]
ram:001079d4	2220800f0e0034e8	jl 0x000ee834
ram:001079dc	5f1e5893	st.as r13,[r14,-0xa1]
ram:001079e0	04141f30	ld blink,[sp,0x4]
ram:001079e4	02c6	ld_s r14,[sp,0x8]
ram:001079e6	e07f	j_s.d [blink]
ram:001079e8	0c140d34	_ld.ab r13,[sp,0xc]
