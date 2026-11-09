; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000ecf3c entry ram:000ecf3c
ram:000ecf3c	6a208002	lr r0,[status32]
ram:000ecf40	84207f0e	and r0,r0,-0x7
ram:000ecf44	29200000	flag r0
ram:000ecf48	ab26c17000000000	sr 0x0,[0x43]
ram:000ecf50	00d9	mov_s r1,0x0
ram:000ecf52	cf7000e00400	mov_s r0,0xe0000004
ram:000ecf58	36a0	st_s r1,[r0,0x58]
ram:000ecf5a	ab26087000001840	sr 0x4018,[0x200]
ram:000ecf62	ab26107300010000	sr 0x1000000,[0x40c]
ram:000ecf6a	2107cfff	b 0x000ece88
