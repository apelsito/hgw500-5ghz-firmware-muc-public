; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001034c0 entry ram:001034c0
ram:001034c0	0c100000	ld r0,[r0,0xc]
ram:001034c4	4c210080	cmp r1,0x0
ram:001034c8	3020820f00007804	ld r2,[r0, 0x478]
ram:001034d0	9620c203	add3 r0,r0,0x8f
ram:001034d4	cf22a203	bset.ne r2,r2,0xe
ram:001034d8	d022a103	bclr.eq r2,r2,0xe
ram:001034dc	40a0	st_s r2,[r0,0x0]
ram:001034de	e07e	j_s [blink]
