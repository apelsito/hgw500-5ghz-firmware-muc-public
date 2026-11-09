; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000eee08 entry ram:000eee08
ram:000eee08	0a27800f0380e08e	mov r7,0x80038ee0
ram:000eee10	00170400	ld r4,[r7]
ram:000eee14	04170500	ld r5,[r7,0x4]
ram:000eee18	00100600	ld r6,[r0]
ram:000eee1c	08100200	ld r2,[r0,0x8]
ram:000eee20	0c260081	cmp r6,r4
ram:000eee24	18002300	bp.d 0x000eee3c
ram:000eee28	4a210000	_mov r1,0x0
ram:000eee2c	6180	ld_s r3,[r0,0x4]
ram:000eee2e	43a0	st_s r2,[r0,0xc]
ram:000eee30	22a0	st_s r1,[r0,0x8]
ram:000eee32	8073	add_s r3,r3,r4
ram:000eee34	60a0	st_s r3,[r0,0x0]
ram:000eee36	e07f	j_s.d [blink]
ram:000eee38	4a204000	_mov r0,0x1
ram:000eee3c	01e2	add_s r2,r2,0x1
ram:000eee3e	42a0	st_s r2,[r0,0x8]
ram:000eee40	2120c007	j.d [blink]
ram:000eee44	0a204000	_mov r0,r1
