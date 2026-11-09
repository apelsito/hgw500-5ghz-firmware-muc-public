; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000fd698 entry ram:000fd698
ram:000fd698	0c100300	ld r3,[r0,0xc]
ram:000fd69c	3023800f00005020	ld r0,[r3, 0x2050]
ram:000fd6a4	2120c007	j.d [blink]
ram:000fd6a8	5320c005	_bmsk r0,r0,0x17
