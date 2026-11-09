; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00109100 entry ram:00109100
ram:00109100	f41c48b3	st.aw r13,[sp,-0xc]
ram:00109104	041cc037	st blink,[sp,0x4]
ram:00109108	42c6	st_s r14,[sp,0x8]
ram:0010910a	0876	mov_s r14,r0
ram:0010910c	04e0	add_s r0,r0,0x4
ram:0010910e	2220800f0e00507d	jl 0x000e7d50
ram:00109116	2586	ld_s r1,[r14,0x14]
ram:00109118	11091000	breq r1,0x0,0x00109128
ram:0010911c	2c118000	ldb r0,[r1,0x2c]
ram:00109120	11089000	breq r0,0x2,0x00109130
ram:00109124	2181	ld_s r1,[r1,0x4]
ram:00109126	fce9	brne_s r1,0,0x0010911c
ram:00109128	0d002000	b.d 0x00109134
ram:0010912c	4a250010	_mov r13,0x0
ram:00109130	4a254010	mov r13,0x1
ram:00109134	046e	add_s r0,r14,0x4
ram:00109136	2220800f0e00a87d	jl 0x000e7da8
ram:0010913e	04141f30	ld blink,[sp,0x4]
ram:00109142	02c6	ld_s r14,[sp,0x8]
ram:00109144	a970	mov_s r0,r13
ram:00109146	e07f	j_s.d [blink]
ram:00109148	0c140d34	_ld.ab r13,[sp,0xc]
