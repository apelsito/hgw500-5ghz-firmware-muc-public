; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001521a8 entry ram:001521a8
ram:001521a8	0a22800f1900342d	mov r2,0x192d34
ram:001521b0	2082	ld_s r1,[r2,0x0]
ram:001521b2	6182	ld_s r3,[r2,0x4]
ram:001521b4	01d8	mov_s r0,0x1
ram:001521b6	3073	cmp_s r3,r1
ram:001521b8	2120c007	j.d [blink]
ram:001521bc	c2200900	_sub.gt r0,r0,r0
