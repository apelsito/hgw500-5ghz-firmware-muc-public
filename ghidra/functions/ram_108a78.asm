; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00108a78 entry ram:00108a78
ram:00108a78	f41c48b3	st.aw r13,[sp,-0xc]
ram:00108a7c	081c8033	st r14,[sp,0x8]
ram:00108a80	00208e0f0000e03f	add r14,r0,0x3fe0
ram:00108a88	73160096	ld.as r0,[r14,-0x8d]
ram:00108a8c	55083000	breq.d r0,0x0,0x00108ae0
ram:00108a90	041cc037	_st blink,[sp,0x4]
ram:00108a94	6f160296	ld.as r2,[r14,-0x91]
ram:00108a98	250a1000	breq r2,0x0,0x00108abc
ram:00108a9c	3022820f00005c0d	ld r2,[r2, 0xd5c]
ram:00108aa4	150a3100	brne.d r2,0x0,0x00108ab8
ram:00108aa8	6f1e9890	_st.as r2,[r14,-0x91]
ram:00108aac	0226811f00004402	sub r1,r14,0x244
ram:00108ab4	701e5890	st.as r1,[r14,-0x90]
ram:00108ab8	e50a1180	brne r2,0x0,0x00108a9c
ram:00108abc	00dd	mov_s r13,0x0
ram:00108abe	a971	mov_s r1,r13
ram:00108ac0	0a22800f06006463	mov r2,0x66364
ram:00108ac8	2220800f0e0080ea	jl 0x000eea80
ram:00108ad0	73160096	ld.as r0,[r14,-0x8d]
ram:00108ad4	2220800f0e0034e8	jl 0x000ee834
ram:00108adc	731e5893	st.as r13,[r14,-0x8d]
ram:00108ae0	04141f30	ld blink,[sp,0x4]
ram:00108ae4	02c6	ld_s r14,[sp,0x8]
ram:00108ae6	e07f	j_s.d [blink]
ram:00108ae8	0c140d34	_ld.ab r13,[sp,0xc]
