; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_80024dc0 entry ram:80024dc0
ram:80024dc0	f81c48b3	st.aw r13,[sp,-0x8]
ram:80024dc4	b368	asl_s r13,r0,0x3
ram:80024dc6	41c6	st_s r14,[sp,0x4]
ram:80024dc8	027d	sub_s r13,r13,r0
ram:80024dca	02bd	asl_s r13,r13,0x2
ram:80024dcc	c77502804cbe	add_s r13,r13,0x8002be4c
ram:80024dd2	4585	ld_s r2,[r13,0x14]
ram:80024dd4	110a3000	breq.d r2,0x0,0x80024de4
ram:80024dd8	0a26c017	_mov r14,blink
ram:80024ddc	23208000	jl.d [r2]
ram:80024de0	18150010	_ld r0,[r13,0x18]
ram:80024de4	10150110	ld r1,[r13,0x10]
ram:80024de8	51210080	btst r1,0x0
ram:80024dec	d1216280	btst.ne r1,0x1
ram:80024df0	04f2	beq_s 0x80024df8
ram:80024df2	0485	ld_s r0,[r13,0x10]
ram:80024df4	82b8	bset_s r0,r0,0x2
ram:80024df6	04a5	st_s r0,[r13,0x10]
ram:80024df8	fb76	mov_s blink,r14
ram:80024dfa	01c6	ld_s r14,[sp,0x4]
ram:80024dfc	2120c007	j.d [blink]
ram:80024e00	08140d34	_ld.ab r13,[sp,0x8]
