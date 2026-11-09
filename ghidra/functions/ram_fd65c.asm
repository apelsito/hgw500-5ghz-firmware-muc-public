; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000fd65c entry ram:000fd65c
ram:000fd65c	0c100300	ld r3,[r0,0xc]
ram:000fd660	3023800f00004420	ld r0,[r3, 0x2044]
ram:000fd668	2120c007	j.d [blink]
ram:000fd66c	5320c005	_bmsk r0,r0,0x17
