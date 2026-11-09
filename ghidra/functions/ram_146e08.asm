; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00146e08 entry ram:00146e08
ram:00146e08	f81c48b3	st.aw r13,[sp,-0x8]
ram:00146e0c	041cc037	st blink,[sp,0x4]
ram:00146e10	cf7520006cfd	mov_s r13,0x20fd6c
ram:00146e16	44158010	ldb r0,[r13,0x44]
ram:00146e1a	2220800f1800f4aa	jl 0x0018aaf4
ram:00146e22	0f85	ld_s r0,[r13,0x3c]
ram:00146e24	2220800f180060ae	jl 0x0018ae60
ram:00146e2c	1085	ld_s r0,[r13,0x40]
ram:00146e2e	2220800f18008caa	jl 0x0018aa8c
ram:00146e36	04141f30	ld blink,[sp,0x4]
ram:00146e3a	e07f	j_s.d [blink]
ram:00146e3c	08140d34	_ld.ab r13,[sp,0x8]
