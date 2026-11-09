; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0014f404 entry ram:0014f404
ram:0014f404	f41c48b3	st.aw r13,[sp,-0xc]
ram:0014f408	081c8033	st r14,[sp,0x8]
ram:0014f40c	0a260010	mov r14,r0
ram:0014f410	9620830f	add3 r0,r0,0xfe
ram:0014f414	11093000	breq.d r1,0x0,0x0014f424
ram:0014f418	041cc037	_st blink,[sp,0x4]
ram:0014f41c	59200d02	sub3 r13,r0,0x8
ram:0014f420	09000000	b 0x0014f428
ram:0014f424	58204d06	sub2 r13,r0,0x19
ram:0014f428	a970	mov_s r0,r13
ram:0014f42a	00d9	mov_s r1,0x0
ram:0014f42c	20da	mov_s r2,0x20
ram:0014f42e	2220800f0e0080ea	jl 0x000eea80
ram:0014f436	c970	mov_s r0,r14
ram:0014f438	40250114	add r1,r13,0x10
ram:0014f43c	2220800f130060d6	jl 0x0013d660
ram:0014f444	04141f30	ld blink,[sp,0x4]
ram:0014f448	02c6	ld_s r14,[sp,0x8]
ram:0014f44a	01d9	mov_s r1,0x1
ram:0014f44c	20a5	st_s r1,[r13,0x0]
ram:0014f44e	e07f	j_s.d [blink]
ram:0014f450	0c140d34	_ld.ab r13,[sp,0xc]
