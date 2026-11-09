; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000fd6ac entry ram:000fd6ac
ram:000fd6ac	0c100300	ld r3,[r0,0xc]
ram:000fd6b0	c77300000020	add_s r3,r3,0x2000
ram:000fd6b6	0ee9	breq_s r1,0,0x000fd6d0
ram:000fd6b8	2083	ld_s r1,[r3,0x0]
ram:000fd6ba	20a2	st_s r1,[r2,0x0]
ram:000fd6bc	0c100400	ld r4,[r0,0xc]
ram:000fd6c0	84b9	bset_s r1,r1,0x4
ram:000fd6c2	00248c0f00000020	add r12,r4,0x2000
ram:000fd6ca	20a4	st_s r1,[r12,0x0]
ram:000fd6cc	2020c007	j [blink]
ram:000fd6d0	00120500	ld r5,[r2]
ram:000fd6d4	001b4001	st r5,[r3]
ram:000fd6d8	e07e	j_s [blink]
