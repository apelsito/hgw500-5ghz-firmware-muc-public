; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000f2c90 entry ram:000f2c90
ram:000f2c90	f81c48b3	st.aw r13,[sp,-0x8]
ram:000f2c94	041c8033	st r14,[sp,0x4]
ram:000f2c98	eb76	mov_s r14,blink
ram:000f2c9a	cf750380008f	mov_s r13,0x80038f00
ram:000f2ca0	a970	mov_s r0,r13
ram:000f2ca2	8a211d08	mov r1,0x760
ram:000f2ca6	2220800f0e0014d1	jl 0x000ed114
ram:000f2cae	04d8	mov_s r0,0x4
ram:000f2cb0	00d9	mov_s r1,0x0
ram:000f2cb2	a972	mov_s r2,r13
ram:000f2cb4	2873	mov_s r3,r1
ram:000f2cb6	2220800f0e003cfe	jl 0x000efe3c
ram:000f2cbe	fb76	mov_s blink,r14
ram:000f2cc0	01c6	ld_s r14,[sp,0x4]
ram:000f2cc2	08140d34	ld.ab r13,[sp,0x8]
ram:000f2cc6	e07f	j_s.d [blink]
ram:000f2cc8	4a200000	_mov r0,0x0
