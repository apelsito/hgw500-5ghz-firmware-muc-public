; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000fb9b0 entry ram:000fb9b0
ram:000fb9b0	0c100700	ld r7,[r0,0xc]
ram:000fb9b4	3027860f00008420	ld r6,[r7, 0x2084]
ram:000fb9bc	3027850f00008020	ld r5,[r7, 0x2080]
ram:000fb9c4	3027840f00008820	ld r4,[r7, 0x2088]
ram:000fb9cc	0d091000	breq r1,0x0,0x000fb9d8
ram:000fb9d0	5326c605	bmsk r6,r6,0x17
ram:000fb9d4	00198001	st r6,[r1]
ram:000fb9d8	5325c505	bmsk r5,r5,0x17
ram:000fb9dc	001a4001	st r5,[r2]
ram:000fb9e0	5324c405	bmsk r4,r4,0x17
ram:000fb9e4	2120c007	j.d [blink]
ram:000fb9e8	001b0001	_st r4,[r3]
