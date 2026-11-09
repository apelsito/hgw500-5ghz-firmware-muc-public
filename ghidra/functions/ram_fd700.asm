; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000fd700 entry ram:000fd700
ram:000fd700	0c100100	ld r1,[r0,0xc]
ram:000fd704	3021800f00003c20	ld r0,[r1, 0x203c]
ram:000fd70c	00218c0f00003c20	add r12,r1,0x203c
ram:000fd714	00a4	st_s r0,[r12,0x0]
ram:000fd716	e07e	j_s [blink]
