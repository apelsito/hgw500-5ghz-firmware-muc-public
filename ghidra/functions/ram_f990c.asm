; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000f990c entry ram:000f990c
ram:000f990c	4a210000	mov r1,0x0
ram:000f9910	d1184200	stb r1,[r0,0xd1]
ram:000f9914	2120c007	j.d [blink]
ram:000f9918	0a204000	_mov r0,r1
