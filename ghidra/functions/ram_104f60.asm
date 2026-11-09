; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00104f60 entry ram:00104f60
ram:00104f60	0c100000	ld r0,[r0,0xc]
ram:00104f64	4c210080	cmp r1,0x0
ram:00104f68	3020820f00000020	ld r2,[r0, 0x2000]
ram:00104f70	c77000000020	add_s r0,r0,0x2000
ram:00104f76	cf22a200	bset.ne r2,r2,0x2
ram:00104f7a	d022a100	bclr.eq r2,r2,0x2
ram:00104f7e	40a0	st_s r2,[r0,0x0]
ram:00104f80	e07e	j_s [blink]
