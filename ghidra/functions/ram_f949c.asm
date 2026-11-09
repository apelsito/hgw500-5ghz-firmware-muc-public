; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000f949c entry ram:000f949c
ram:000f949c	0c100100	ld r1,[r0,0xc]
ram:000f94a0	3021800f00005420	ld r0,[r1, 0x2054]
ram:000f94a8	00218c0f00005420	add r12,r1,0x2054
ram:000f94b0	00a4	st_s r0,[r12,0x0]
ram:000f94b2	e07e	j_s [blink]
