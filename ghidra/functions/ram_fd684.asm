; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000fd684 entry ram:000fd684
ram:000fd684	0c100300	ld r3,[r0,0xc]
ram:000fd688	3023800f00004c20	ld r0,[r3, 0x204c]
ram:000fd690	2120c007	j.d [blink]
ram:000fd694	5320c005	_bmsk r0,r0,0x17
