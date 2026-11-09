; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0018bbb8 entry ram:0018bbb8
ram:0018bbb8	e1c4	push_s r12
ram:0018bbba	f1c0	push_s blink
ram:0018bbbc	da0fefff	bl.d 0x0018bb94
ram:0018bbc0	8090	_ldw_s r12,[r0,0x0]
ram:0018bbc2	80b0	stw_s r12,[r0,0x0]
ram:0018bbc4	04141f34	ld.ab blink,[sp,0x4]
ram:0018bbc8	e07f	j_s.d [blink]
ram:0018bbca	c1c4	_pop_s r12
