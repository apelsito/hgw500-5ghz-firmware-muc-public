; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0014a618 entry ram:0014a618
ram:0014a618	0ab9	asl_s r1,r1,0xa
ram:0014a61a	00208c0f00002840	add r12,r0,0x4028
ram:0014a622	1c2641706210d34d	mpyhu r1,0x10624dd3,r1
ram:0014a62a	3020800f00004c46	ld r0,[r0, 0x464c]
ram:0014a632	26b9	lsr_s r1,r1,0x6
ram:0014a634	20a4	st_s r1,[r12,0x0]
ram:0014a636	2020800f0f00a07d	j 0x000f7da0
