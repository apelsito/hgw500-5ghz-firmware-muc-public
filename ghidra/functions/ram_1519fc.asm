; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001519fc entry ram:001519fc
ram:001519fc	f41c48b3	st.aw r13,[sp,-0xc]
ram:00151a00	041cc037	st blink,[sp,0x4]
ram:00151a04	081c8033	st r14,[sp,0x8]
ram:00151a08	45083000	breq.d r0,0x0,0x00151a4c
ram:00151a0c	4a260010	_mov r14,0x0
ram:00151a10	3020830f00005046	ld r3,[r0, 0x4650]
ram:00151a18	00208d0f0000dc47	add r13,r0,0x47dc
ram:00151a20	16eb	breq_s r3,0,0x00151a4c
ram:00151a22	cf701c00c46f	mov_s r0,0x1c6fc4
ram:00151a28	2220800f0e0060e2	jl 0x000ee260
ram:00151a30	9d150196	ld.as r1,[r13,-0x63]
ram:00151a34	0281	ld_s r0,[r1,0x8]
ram:00151a36	c0a1	st_s r14,[r1,0x0]
ram:00151a38	2220800f0f00607d	jl 0x000f7d60
ram:00151a40	9d150296	ld.as r2,[r13,-0x63]
ram:00151a44	9d1d9893	st.as r14,[r13,-0x63]
ram:00151a48	c2a2	st_s r14,[r2,0x8]
ram:00151a4a	c1a2	st_s r14,[r2,0x4]
ram:00151a4c	04141f30	ld blink,[sp,0x4]
ram:00151a50	001e80730280c8c9	st r14,[0x8002c9c8]
ram:00151a58	02c6	ld_s r14,[sp,0x8]
ram:00151a5a	e07f	j_s.d [blink]
ram:00151a5c	0c140d34	_ld.ab r13,[sp,0xc]
