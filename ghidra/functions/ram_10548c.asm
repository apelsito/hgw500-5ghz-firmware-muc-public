; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0010548c entry ram:0010548c
ram:0010548c	0c100000	ld r0,[r0,0xc]
ram:00105490	00208c0f00005030	add r12,r0,0x3050
ram:00105498	20a4	st_s r1,[r12,0x0]
ram:0010549a	e07e	j_s [blink]
