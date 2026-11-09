; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0012a9ac entry ram:0012a9ac
ram:0012a9ac	f81c48b3	st.aw r13,[sp,-0x8]
ram:0012a9b0	041c8033	st r14,[sp,0x4]
ram:0012a9b4	3421820f0000dc03	ldh r2,[r1, 0x3dc]
ram:0012a9bc	0a26c017	mov r14,blink
ram:0012a9c0	3420810f0000a45a	ldh r1,[r0, 0x5aa4]
ram:0012a9c8	110aff01	bbit1.d r2,0x7,0x0012a9d8
ram:0012a9cc	4a250010	_mov r13,0x0
ram:0012a9d0	2d002000	b.d 0x0012a9fc
ram:0012a9d4	4a25c010	_mov r13,0x3
ram:0012a9d8	f90a9e81	bbit0 r2,0x6,0x0012a9d0
ram:0012a9dc	0d0a5f01	bbit1 r2,0x5,0x0012a9e8
ram:0012a9e0	1d002000	b.d 0x0012a9fc
ram:0012a9e4	4a258010	_mov r13,0x2
ram:0012a9e8	f90a1e81	bbit0 r2,0x4,0x0012a9e0
ram:0012a9ec	0d0adf00	bbit1 r2,0x3,0x0012a9f8
ram:0012a9f0	0d002000	b.d 0x0012a9fc
ram:0012a9f4	4a254010	_mov r13,0x1
ram:0012a9f8	f90a9e80	bbit0 r2,0x2,0x0012a9f0
ram:0012a9fc	1509d200	brlt r1,0x3,0x0012aa10
ram:0012aa00	cf701c00e041	mov_s r0,0x1c41e0
ram:0012aa06	a971	mov_s r1,r13
ram:0012aa08	2220800f0e0060e2	jl 0x000ee260
ram:0012aa10	a970	mov_s r0,r13
ram:0012aa12	fb76	mov_s blink,r14
ram:0012aa14	01c6	ld_s r14,[sp,0x4]
ram:0012aa16	e07f	j_s.d [blink]
ram:0012aa18	08140d34	_ld.ab r13,[sp,0x8]
