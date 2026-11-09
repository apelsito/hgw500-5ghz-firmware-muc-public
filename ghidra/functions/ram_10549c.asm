; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0010549c entry ram:0010549c
ram:0010549c	0c100000	ld r0,[r0,0xc]
ram:001054a0	00208c0f00006830	add r12,r0,0x3068
ram:001054a8	20a4	st_s r1,[r12,0x0]
ram:001054aa	e07e	j_s [blink]
