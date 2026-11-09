; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00101d38 entry ram:00101d38
ram:00101d38	fc1c48b3	st.aw r13,[sp,-0x4]
ram:00101d3c	3020810f00006c05	ld r1,[r0, 0x56c]
ram:00101d44	00da	mov_s r2,0x0
ram:00101d46	00208c0f0000a005	add r12,r0,0x5a0
ram:00101d4e	0019800f000000b0	st 0xb000,[r1]
ram:00101d56	41a1	st_s r2,[r1,0x4]
ram:00101d58	42a1	st_s r2,[r1,0x8]
ram:00101d5a	40210204	add r2,r1,0x10
ram:00101d5e	20a4	st_s r1,[r12,0x0]
ram:00101d60	0c19800f02010100	st 0x1020001,[r1,0xc]
ram:00101d68	40210104	add r1,r1,0x10
ram:00101d6c	2109a500	brhs.d r1,r2,0x00101d8c
ram:00101d70	0a25c017	_mov r13,blink
ram:00101d74	0a20800f1b0078f9	mov r0,0x1bf978
ram:00101d7c	2220800f0e0060e2	jl 0x000ee260
ram:00101d84	2220800f03801403	jl 0x80030314
ram:00101d8c	fb75	mov_s blink,r13
ram:00101d8e	e07f	j_s.d [blink]
ram:00101d90	04140d34	_ld.ab r13,[sp,0x4]
