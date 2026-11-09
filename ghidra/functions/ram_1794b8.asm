; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001794b8 entry ram:001794b8
ram:001794b8	8c200189	cmp r0,0x64
ram:001794bc	4a260070	nop
ram:001794c0	e120cb07	jlt.d [blink]
ram:001794c4	ca202b00	_mov.lt r0,0x0
ram:001794c8	8c204285	cmp r0,0x95
ram:001794cc	e120cb07	jlt.d [blink]
ram:001794d0	4a204000	_mov r0,0x1
ram:001794d4	2120c007	j.d [blink]
ram:001794d8	4a208000	_mov r0,0x2
