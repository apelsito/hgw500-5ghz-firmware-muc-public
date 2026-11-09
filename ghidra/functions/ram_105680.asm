; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00105680 entry ram:00105680
ram:00105680	0c100000	ld r0,[r0,0xc]
ram:00105684	4c210080	cmp r1,0x0
ram:00105688	3020820f00000020	ld r2,[r0, 0x2000]
ram:00105690	c77000000020	add_s r0,r0,0x2000
ram:00105696	cf22a204	bset.ne r2,r2,0x12
ram:0010569a	d022a104	bclr.eq r2,r2,0x12
ram:0010569e	40a0	st_s r2,[r0,0x0]
ram:001056a0	e07e	j_s [blink]
