; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001030e8 entry ram:001030e8
ram:001030e8	40298100	asl r1,r1,0x2
ram:001030ec	110a3000	breq.d r2,0x0,0x001030fc
ram:001030f0	0c100300	_ld r3,[r0,0xc]
ram:001030f4	96210201	add3 r1,r1,0x84
ram:001030f8	2063	ld_s r0,[r3,r1]
ram:001030fa	06f0	b_s 0x00103104
ram:001030fc	96218200	add3 r1,r1,0x82
ram:00103100	3021c000	ld r0,[r1, r3]
ram:00103104	c3b8	bmsk_s r0,r0,0x3
ram:00103106	01e0	add_s r0,r0,0x1
ram:00103108	2120c007	j.d [blink]
ram:0010310c	2f200100	_asr r0,r0
