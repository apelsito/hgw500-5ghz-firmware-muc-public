; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000f94c4 entry ram:000f94c4
ram:000f94c4	0c100100	ld r1,[r0,0xc]
ram:000f94c8	3021800f00004805	ld r0,[r1, 0x548]
ram:000f94d0	00218c0f00004805	add r12,r1,0x548
ram:000f94d8	0420800f00fcff00	and r0,r0,0xfc0000ff
ram:000f94e0	0520800f610400a8	or r0,r0,0x461a800
ram:000f94e8	00a4	st_s r0,[r12,0x0]
ram:000f94ea	e07e	j_s [blink]
