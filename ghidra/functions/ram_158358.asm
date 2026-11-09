; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00158358 entry ram:00158358
ram:00158358	0020820f0000f405	add r2,r0,0x5f4
ram:00158360	88128100	ldb r1,[r2,0x88]
ram:00158364	94128200	ldb r2,[r2,0x94]
ram:00158368	0cd8	mov_s r0,0xc
ram:0015836a	00db	mov_s r3,0x0
ram:0015836c	41002fff	b.d 0x001563ac
ram:00158370	4a244000	_mov r4,0x1
