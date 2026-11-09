; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000eec50 entry ram:000eec50
ram:000eec50	f1c0	push_s blink
ram:000eec52	2220800f0f00445e	jl 0x000f5e44
ram:000eec5a	f81c48b3	st.aw r13,[sp,-0x8]
ram:000eec5e	41c6	st_s r14,[sp,0x4]
ram:000eec60	0876	mov_s r14,r0
ram:000eec62	44c1	st_s r1,[sp,0x10]
ram:000eec64	2220800f0e002c4f	jl 0x000e4f2c
ram:000eec6c	1d083300	brge.d r0,0x0,0x000eec88
ram:000eec70	40240d35	_add r13,sp,0x14
ram:000eec74	0a20800f1b00c8da	mov r0,0x1bdac8
ram:000eec7c	e60dafff	bl.d 0x000ee260
ram:000eec80	0a218003	_mov r1,r14
ram:000eec84	15000000	b 0x000eec98
ram:000eec88	10140130	ld r1,[sp,0x10]
ram:000eec8c	c970	mov_s r0,r14
ram:000eec8e	a972	mov_s r2,r13
ram:000eec90	2220800f0f00285c	jl 0x000f5c28
ram:000eec98	01c6	ld_s r14,[sp,0x4]
ram:000eec9a	08141f30	ld blink,[sp,0x8]
ram:000eec9e	00c5	ld_s r13,[sp,0x0]
ram:000eeca0	2120c007	j.d [blink]
ram:000eeca4	40241c3b	_add sp,sp,0x2c
