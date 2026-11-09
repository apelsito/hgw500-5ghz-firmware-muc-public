; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000ee260 entry ram:000ee260
ram:000ee260	f1c0	push_s blink
ram:000ee262	2220800f0f00445e	jl 0x000f5e44
ram:000ee26a	f81c48b3	st.aw r13,[sp,-0x8]
ram:000ee26e	41c6	st_s r14,[sp,0x4]
ram:000ee270	0871	mov_s r1,r0
ram:000ee272	43c0	st_s r0,[sp,0xc]
ram:000ee274	84c2	add_s r2,sp,0x10
ram:000ee276	cf7619003cd6	mov_s r14,0x19d63c
ram:000ee27c	c970	mov_s r0,r14
ram:000ee27e	2220800f0f00285c	jl 0x000f5c28
ram:000ee286	0875	mov_s r13,r0
ram:000ee288	020fefff	bl.d 0x000ee188
ram:000ee28c	0a208003	_mov r0,r14
ram:000ee290	0ae8	breq_s r0,0,0x000ee2a4
ram:000ee292	c970	mov_s r0,r14
ram:000ee294	2220800f0f00081e	jl 0x000f1e08
ram:000ee29c	2220800f0f00701d	jl 0x000f1d70
ram:000ee2a4	a970	mov_s r0,r13
ram:000ee2a6	01c6	ld_s r14,[sp,0x4]
ram:000ee2a8	08141f30	ld blink,[sp,0x8]
ram:000ee2ac	00c5	ld_s r13,[sp,0x0]
ram:000ee2ae	e07f	j_s.d [blink]
ram:000ee2b0	40241c3b	_add sp,sp,0x2c
