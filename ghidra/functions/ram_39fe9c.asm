; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0039fe9c entry ram:0039fe9c
ram:0039fe9c	53224281	bmsk.f r2,r2,0x5
ram:0039fea0	e07c	jeq_s [blink]
ram:0039fea2	4e220388	rsub.f r3,r2,0x20
ram:0039fea6	16000c00	ble 0x0039feba
ram:0039feaa	0029cc00	asl r12,r1,r3
ram:0039feae	01298100	lsr r1,r1,r2
ram:0039feb2	01288000	lsr r0,r0,r2
ram:0039feb6	e07f	j_s.d [blink]
ram:0039feb8	8578	_or_s r0,r0,r12
ram:0039feba	4e230300	neg r3,r3
ram:0039febe	0129c000	lsr r0,r1,r3
ram:0039fec2	e07f	j_s.d [blink]
ram:0039fec4	2279	_sub_s r1,r1,r1
