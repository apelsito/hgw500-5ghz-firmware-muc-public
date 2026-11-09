; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00128e28 entry ram:00128e28
ram:00128e28	f41c48b3	st.aw r13,[sp,-0xc]
ram:00128e2c	84100000	ld r0,[r0,0x84]
ram:00128e30	42c6	st_s r14,[sp,0x8]
ram:00128e32	c780	ld_s r14,[r0,0x1c]
ram:00128e34	210e3010	breq.d r14,0x0,0x00128e54
ram:00128e38	041cc037	_st blink,[sp,0x4]
ram:00128e3c	4a250010	mov r13,0x0
ram:00128e40	0086	ld_s r0,[r14,0x0]
ram:00128e42	2220800f0e0034e8	jl 0x000ee834
ram:00128e4a	a1a6	st_s r13,[r14,0x4]
ram:00128e4c	a0a6	st_s r13,[r14,0x0]
ram:00128e4e	c286	ld_s r14,[r14,0x8]
ram:00128e50	f10e1190	brne r14,0x0,0x00128e40
ram:00128e54	04141f30	ld blink,[sp,0x4]
ram:00128e58	02c6	ld_s r14,[sp,0x8]
ram:00128e5a	e07f	j_s.d [blink]
ram:00128e5c	0c140d34	_ld.ab r13,[sp,0xc]
