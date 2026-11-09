; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000f9328 entry ram:000f9328
ram:000f9328	f41c48b3	st.aw r13,[sp,-0xc]
ram:000f932c	081c8033	st r14,[sp,0x8]
ram:000f9330	0a260010	mov r14,r0
ram:000f9334	41100006	ld.as r0,[r0,0x41]
ram:000f9338	041cc037	st blink,[sp,0x4]
ram:000f933c	1d083000	breq.d r0,0x0,0x000f9358
ram:000f9340	4a250010	_mov r13,0x0
ram:000f9344	2220800f0e0034e8	jl 0x000ee834
ram:000f934c	5526c11f	add2 r1,r14,0x3f
ram:000f9350	fc1e4013	st r13,[r14,0xfc]
ram:000f9354	401e5810	st.as r1,[r14,0x40]
ram:000f9358	cf701b00a0ed	mov_s r0,0x1beda0
ram:000f935e	2220800f0e0060e2	jl 0x000ee260
ram:000f9366	c970	mov_s r0,r14
ram:000f9368	00d9	mov_s r1,0x0
ram:000f936a	04da	mov_s r2,0x4
ram:000f936c	2220800f0e0080ea	jl 0x000eea80
ram:000f9374	c970	mov_s r0,r14
ram:000f9376	2220800f0e0034e8	jl 0x000ee834
ram:000f937e	04141f30	ld blink,[sp,0x4]
ram:000f9382	02c6	ld_s r14,[sp,0x8]
ram:000f9384	2120c007	j.d [blink]
ram:000f9388	0c140d34	_ld.ab r13,[sp,0xc]
