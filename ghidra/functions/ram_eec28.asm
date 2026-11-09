; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000eec28 entry ram:000eec28
ram:000eec28	0a210000	mov r1,r0
ram:000eec2c	01118304	ldb.ab r3,[r1,0x1]
ram:000eec30	4c230080	cmp r3,0x0
ram:000eec34	e120c107	jeq.d [blink]
ram:000eec38	4a200000	_mov r0,0x0
ram:000eec3c	01118204	ldb.ab r2,[r1,0x1]
ram:000eec40	4c220080	cmp r2,0x0
ram:000eec44	e120c107	jeq.d [blink]
ram:000eec48	40204000	_add r0,r0,0x1
ram:000eec4c	f8f1	b_s 0x000eec3c
