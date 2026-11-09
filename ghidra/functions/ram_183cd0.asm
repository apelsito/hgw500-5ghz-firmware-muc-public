; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00183cd0 entry ram:00183cd0
ram:00183cd0	fc1c48b3	st.aw r13,[sp,-0x4]
ram:00183cd4	0a25c017	mov r13,blink
ram:00183cd8	cf7318000cc4	mov_s r3,0x18c40c
ram:00183cde	2083	ld_s r1,[r3,0x0]
ram:00183ce0	42214100	sub r1,r1,0x1
ram:00183ce4	1d08b000	breq.d r0,0x2,0x00183d00
ram:00183ce8	001b4000	_st r1,[r3]
ram:00183cec	cf72ffe584fe	mov_s r2,0xe5fffe84
ram:00183cf2	681a1800	st.as r0,[r2,0x68]
ram:00183cf6	0ad8	mov_s r0,0xa
ram:00183cf8	2220800f0e00a04f	jl 0x000e4fa0
ram:00183d00	fb75	mov_s blink,r13
ram:00183d02	e07f	j_s.d [blink]
ram:00183d04	04140d34	_ld.ab r13,[sp,0x4]
