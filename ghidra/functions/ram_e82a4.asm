; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000e82a4 entry ram:000e82a4
ram:000e82a4	fc1c48b3	st.aw r13,[sp,-0x4]
ram:000e82a8	0e100201	ldh r2,[r0,0xe]
ram:000e82ac	0a25c017	mov r13,blink
ram:000e82b0	04224300	and r3,r2,r1
ram:000e82b4	2109e000	breq.d r1,r3,0x000e82d4
ram:000e82b8	0a240000	_mov r4,r0
ram:000e82bc	4579	or_s r1,r1,r2
ram:000e82be	307a	extw_s r2,r1
ram:000e82c0	0e1c4400	sth r1,[r4,0xe]
ram:000e82c4	00140101	ldh r1,[r4]
ram:000e82c8	03d8	mov_s r0,0x3
ram:000e82ca	00db	mov_s r3,0x0
ram:000e82cc	2220800f0e003cfe	jl 0x000efe3c
ram:000e82d4	fb75	mov_s blink,r13
ram:000e82d6	e07f	j_s.d [blink]
ram:000e82d8	04140d34	_ld.ab r13,[sp,0x4]
