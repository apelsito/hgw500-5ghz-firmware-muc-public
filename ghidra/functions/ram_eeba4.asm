; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000eeba4 entry ram:000eeba4
ram:000eeba4	00108200	ldb r2,[r0]
ram:000eeba8	1d0a3000	breq.d r2,0x0,0x000eebc4
ram:000eebac	00118300	_ldb r3,[r1]
ram:000eebb0	210b1100	brne r3,0x0,0x000eebd0
ram:000eebb4	2120c007	j.d [blink]
ram:000eebb8	4a204000	_mov r0,0x1
ram:000eebbc	2120c007	j.d [blink]
ram:000eebc0	8a20ff0f	_mov r0,-0x1
ram:000eebc4	f90b1180	brne r3,0x0,0x000eebbc
ram:000eebc8	2120c007	j.d [blink]
ram:000eebcc	4a200000	_mov r0,0x0
ram:000eebd0	0222c280	sub.f r2,r2,r3
ram:000eebd4	40214100	add r1,r1,0x1
ram:000eebd8	1c002200	bne.d 0x000eebf4
ram:000eebdc	40204000	_add r0,r0,0x1
ram:000eebe0	00108200	ldb r2,[r0]
ram:000eebe4	e10a3080	breq.d r2,0x0,0x000eebc4
ram:000eebe8	00118300	_ldb r3,[r1]
ram:000eebec	e50b1180	brne r3,0x0,0x000eebd0
ram:000eebf0	c507cfff	b 0x000eebb4
ram:000eebf4	2120c007	j.d [blink]
ram:000eebf8	0a208000	_mov r0,r2
