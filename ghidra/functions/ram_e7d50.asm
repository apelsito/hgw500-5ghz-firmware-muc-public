; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000e7d50 entry ram:000e7d50
ram:000e7d50	f81c48b3	st.aw r13,[sp,-0x8]
ram:000e7d54	41c6	st_s r14,[sp,0x4]
ram:000e7d56	0875	mov_s r13,r0
ram:000e7d58	6a228002	lr r2,[status32]
ram:000e7d5c	40a0	st_s r2,[r0,0x0]
ram:000e7d5e	0180	ld_s r0,[r0,0x4]
ram:000e7d60	51200080	btst r0,0x0
ram:000e7d64	20002100	beq.d 0x000e7d84
ram:000e7d68	0a26c017	_mov r14,blink
ram:000e7d6c	6a208002	lr r0,[status32]
ram:000e7d70	84207f0f	and r0,r0,-0x3
ram:000e7d74	29200000	flag r0
ram:000e7d78	2185	ld_s r1,[r13,0x4]
ram:000e7d7a	e1b9	btst_s r1,0x1
ram:000e7d7c	1c000100	beq 0x000e7d98
ram:000e7d80	0d000000	b 0x000e7d8c
ram:000e7d84	51204080	btst r0,0x1
ram:000e7d88	10000100	beq 0x000e7d98
ram:000e7d8c	6a208002	lr r0,[status32]
ram:000e7d90	8420ff0e	and r0,r0,-0x5
ram:000e7d94	29200000	flag r0
ram:000e7d98	0a278033	mov blink,r14
ram:000e7d9c	04140e30	ld r14,[sp,0x4]
ram:000e7da0	2120c007	j.d [blink]
ram:000e7da4	08140d34	_ld.ab r13,[sp,0x8]
