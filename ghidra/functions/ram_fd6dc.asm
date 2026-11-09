; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000fd6dc entry ram:000fd6dc
ram:000fd6dc	0c100200	ld r2,[r0,0xc]
ram:000fd6e0	4c210080	cmp r1,0x0
ram:000fd6e4	3022800f00000020	ld r0,[r2, 0x2000]
ram:000fd6ec	c77200000020	add_s r2,r2,0x2000
ram:000fd6f2	cf202203	bset.ne r0,r0,0xc
ram:000fd6f6	d0202103	bclr.eq r0,r0,0xc
ram:000fd6fa	00a2	st_s r0,[r2,0x0]
ram:000fd6fc	e07e	j_s [blink]
