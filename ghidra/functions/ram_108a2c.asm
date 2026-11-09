; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00108a2c entry ram:00108a2c
ram:00108a2c	f81c48b3	st.aw r13,[sp,-0x8]
ram:00108a30	41c6	st_s r14,[sp,0x4]
ram:00108a32	eb76	mov_s r14,blink
ram:00108a34	0a09afff	bl.d 0x00107b3c
ram:00108a38	0a254010	_mov r13,r1
ram:00108a3c	cf710280bcc8	mov_s r1,0x8002c8bc
ram:00108a42	4089	ldb_s r2,[r1,0x0]
ram:00108a44	290ad000	breq r2,0x3,0x00108a6c
ram:00108a48	2785	ld_s r1,[r13,0x1c]
ram:00108a4a	cf701c00f800	mov_s r0,0x1c00f8
ram:00108a50	001e4070180034c3	st r1,[0x18c334]
ram:00108a58	2220800f0e0060e2	jl 0x000ee260
ram:00108a60	ce0befff	bl.d 0x0010862c
ram:00108a64	0a204003	_mov r0,r13
ram:00108a68	4a200000	mov r0,0x0
ram:00108a6c	0a278033	mov blink,r14
ram:00108a70	01c6	ld_s r14,[sp,0x4]
ram:00108a72	e07f	j_s.d [blink]
ram:00108a74	08140d34	_ld.ab r13,[sp,0x8]
