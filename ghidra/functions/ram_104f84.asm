; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00104f84 entry ram:00104f84
ram:00104f84	0c100000	ld r0,[r0,0xc]
ram:00104f88	4c210080	cmp r1,0x0
ram:00104f8c	3020820f00007804	ld r2,[r0, 0x478]
ram:00104f94	9620c203	add3 r0,r0,0x8f
ram:00104f98	cf226201	bset.ne r2,r2,0x5
ram:00104f9c	d0226101	bclr.eq r2,r2,0x5
ram:00104fa0	40a0	st_s r2,[r0,0x0]
ram:00104fa2	e07e	j_s [blink]
