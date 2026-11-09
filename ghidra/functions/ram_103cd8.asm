; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00103cd8 entry ram:00103cd8
ram:00103cd8	54100206	ld.as r2,[r0,0x54]
ram:00103cdc	4a230000	mov r3,0x0
ram:00103ce0	01d9	mov_s r1,0x1
ram:00103ce2	0182	ld_s r0,[r2,0x4]
ram:00103ce4	d77000071c00	cmp_s r0,0x700001c
ram:00103cea	ca204200	mov.ne r0,r1
ram:00103cee	e07f	j_s.d [blink]
ram:00103cf0	ca20c100	_mov.eq r0,r3
