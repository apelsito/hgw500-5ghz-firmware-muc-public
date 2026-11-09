; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00146d30 entry ram:00146d30
ram:00146d30	f81c48b3	st.aw r13,[sp,-0x8]
ram:00146d34	41c6	st_s r14,[sp,0x4]
ram:00146d36	eb76	mov_s r14,blink
ram:00146d38	8a0eefff	bl.d 0x00146bc0
ram:00146d3c	4a254010	_mov r13,0x1
ram:00146d40	4a200008	mov r0,0x20
ram:00146d44	2220800f1800f4aa	jl 0x0018aaf4
ram:00146d4c	2220800f18006cae	jl 0x0018ae6c
ram:00146d54	2220800f180060ae	jl 0x0018ae60
ram:00146d5c	00168370028001c9	ldb r3,[0x8002c901]
ram:00146d64	4c230080	cmp r3,0x0
ram:00146d68	ca204203	mov.ne r0,r13
ram:00146d6c	ca202100	mov.eq r0,0x0
ram:00146d70	2220800f18008caa	jl 0x0018aa8c
ram:00146d78	2220800f18006cae	jl 0x0018ae6c
ram:00146d80	cf7120006cfd	mov_s r1,0x20fd6c
ram:00146d86	0fa1	st_s r0,[r1,0x3c]
ram:00146d88	b0a1	st_s r13,[r1,0x40]
ram:00146d8a	20da	mov_s r2,0x20
ram:00146d8c	fb76	mov_s blink,r14
ram:00146d8e	01c6	ld_s r14,[sp,0x4]
ram:00146d90	08140d34	ld.ab r13,[sp,0x8]
ram:00146d94	2120c007	j.d [blink]
ram:00146d98	44198200	_stb r2,[r1,0x44]
