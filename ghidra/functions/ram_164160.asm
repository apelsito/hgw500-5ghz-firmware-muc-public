; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00164160 entry ram:00164160
ram:00164160	0a20800f200020fe	mov r0,0x20fe20
ram:00164168	2088	ldb_s r1,[r0,0x0]
ram:0016416a	01d8	mov_s r0,0x1
ram:0016416c	82e1	cmp_s r1,0x2
ram:0016416e	e07f	j_s.d [blink]
ram:00164170	c2200200	_sub.ne r0,r0,r0
