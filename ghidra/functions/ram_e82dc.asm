; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000e82dc entry ram:000e82dc
ram:000e82dc	fc1c48b3	st.aw r13,[sp,-0x4]
ram:000e82e0	0e100201	ldh r2,[r0,0xe]
ram:000e82e4	0a25c017	mov r13,blink
ram:000e82e8	0b224080	tst r2,r1
ram:000e82ec	1c002100	beq.d 0x000e8308
ram:000e82f0	0a230000	_mov r3,r0
ram:000e82f4	267a	bic_s r2,r2,r1
ram:000e82f6	2093	ldw_s r1,[r3,0x0]
ram:000e82f8	47b3	stw_s r2,[r3,0xe]
ram:000e82fa	03d8	mov_s r0,0x3
ram:000e82fc	4a230000	mov r3,0x0
ram:000e8300	2220800f0e003cfe	jl 0x000efe3c
ram:000e8308	fb75	mov_s blink,r13
ram:000e830a	e07f	j_s.d [blink]
ram:000e830c	04140d34	_ld.ab r13,[sp,0x4]
