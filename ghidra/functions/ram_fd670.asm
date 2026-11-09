; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000fd670 entry ram:000fd670
ram:000fd670	0c100300	ld r3,[r0,0xc]
ram:000fd674	3023800f00004820	ld r0,[r3, 0x2048]
ram:000fd67c	2120c007	j.d [blink]
ram:000fd680	5320c005	_bmsk r0,r0,0x17
