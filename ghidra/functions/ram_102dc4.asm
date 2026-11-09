; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00102dc4 entry ram:00102dc4
ram:00102dc4	0c100100	ld r1,[r0,0xc]
ram:00102dc8	3021800f00004405	ld r0,[r1, 0x544]
ram:00102dd0	00218c0f00004405	add r12,r1,0x544
ram:00102dd8	00a4	st_s r0,[r12,0x0]
ram:00102dda	e07e	j_s [blink]
