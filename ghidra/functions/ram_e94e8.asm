; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000e94e8 entry ram:000e94e8
ram:000e94e8	f41c48b3	st.aw r13,[sp,-0xc]
ram:000e94ec	041cc037	st blink,[sp,0x4]
ram:000e94f0	081c8033	st r14,[sp,0x8]
ram:000e94f4	0a254090	mov.f r13,r1
ram:000e94f8	30002100	beq.d 0x000e9528
ram:000e94fc	0a260010	_mov r14,r0
ram:000e9500	2220800f0e0030d2	jl 0x000ed230
ram:000e9508	06e8	breq_s r0,0,0x000e9514
ram:000e950a	cf701b0024cc	mov_s r0,0x1bcc24
ram:000e9510	0d000000	b 0x000e951c
ram:000e9514	0a20800f1b0060cc	mov r0,0x1bcc60
ram:000e951c	c971	mov_s r1,r14
ram:000e951e	a972	mov_s r2,r13
ram:000e9520	2220800f0e0060e2	jl 0x000ee260
ram:000e9528	04141f30	ld blink,[sp,0x4]
ram:000e952c	02c6	ld_s r14,[sp,0x8]
ram:000e952e	e07f	j_s.d [blink]
ram:000e9530	0c140d34	_ld.ab r13,[sp,0xc]
