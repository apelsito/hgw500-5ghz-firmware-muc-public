; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0014c068 entry ram:0014c068
ram:0014c068	f81c48b3	st.aw r13,[sp,-0x8]
ram:0014c06c	041c8033	st r14,[sp,0x4]
ram:0014c070	0020830f0000485b	add r3,r0,0x5b48
ram:0014c078	1d093000	breq.d r1,0x0,0x0014c094
ram:0014c07c	0a26c017	_mov r14,blink
ram:0014c080	4a244001	mov r4,0x5
ram:0014c084	fb76	mov_s blink,r14
ram:0014c086	01c6	ld_s r14,[sp,0x4]
ram:0014c088	08140d34	ld.ab r13,[sp,0x8]
ram:0014c08c	2120c007	j.d [blink]
ram:0014c090	081b0201	_stb r4,[r3,0x8]
ram:0014c094	2d138100	ldb r1,[r3,0x2d]
ram:0014c098	4a250010	mov r13,0x0
ram:0014c09c	39093000	breq.d r1,0x0,0x0014c0d4
ram:0014c0a0	081b4203	_stb r13,[r3,0x8]
ram:0014c0a4	3020820f0000043a	ld r2,[r0, 0x3a04]
ram:0014c0ac	2d1b4203	stb r13,[r3,0x2d]
ram:0014c0b0	11d8	mov_s r0,0x11
ram:0014c0b2	a973	mov_s r3,r13
ram:0014c0b4	2092	ldw_s r1,[r2,0x0]
ram:0014c0b6	a972	mov_s r2,r13
ram:0014c0b8	2220800f0e003cfe	jl 0x000efe3c
ram:0014c0c0	001e407303807c79	st r13,[0x8003797c]
ram:0014c0c8	fb76	mov_s blink,r14
ram:0014c0ca	01c6	ld_s r14,[sp,0x4]
ram:0014c0cc	2120c007	j.d [blink]
ram:0014c0d0	08140d34	_ld.ab r13,[sp,0x8]
ram:0014c0d4	fb76	mov_s blink,r14
ram:0014c0d6	01c6	ld_s r14,[sp,0x4]
ram:0014c0d8	2120c007	j.d [blink]
ram:0014c0dc	08140d34	_ld.ab r13,[sp,0x8]
