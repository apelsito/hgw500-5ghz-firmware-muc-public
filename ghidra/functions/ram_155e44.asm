; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00155e44 entry ram:00155e44
ram:00155e44	f81c48b3	st.aw r13,[sp,-0x8]
ram:00155e48	41c6	st_s r14,[sp,0x4]
ram:00155e4a	eb76	mov_s r14,blink
ram:00155e4c	ca0fefff	bl.d 0x00155e14
ram:00155e50	0a254010	_mov r13,r1
ram:00155e54	40200006	add r0,r0,0x18
ram:00155e58	0d081006	breq r0,0x18,0x00155e64
ram:00155e5c	b578	add2_s r0,r0,r13
ram:00155e5e	0080	ld_s r0,[r0,0x0]
ram:00155e60	0d081100	brne r0,0x0,0x00155e6c
ram:00155e64	11002000	b.d 0x00155e74
ram:00155e68	4a200000	_mov r0,0x0
ram:00155e6c	2220800f0e000020	jl 0x000e2000
ram:00155e74	fb76	mov_s blink,r14
ram:00155e76	01c6	ld_s r14,[sp,0x4]
ram:00155e78	2120c007	j.d [blink]
ram:00155e7c	08140d34	_ld.ab r13,[sp,0x8]
