; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00171b98 entry ram:00171b98
ram:00171b98	0d081100	brne r0,0x0,0x00171ba4
ram:00171b9c	2120c007	j.d [blink]
ram:00171ba0	4a200000	_mov r0,0x0
ram:00171ba4	8c200480	cmp r0,0x100
ram:00171ba8	f407c5ff	bc 0x00171b9c
ram:00171bac	8c200880	cmp r0,0x200
ram:00171bb0	e120c507	jc.d [blink]
ram:00171bb4	ca206500	_mov.c r0,0x1
ram:00171bb8	8c200c80	cmp r0,0x300
ram:00171bbc	e120c507	jc.d [blink]
ram:00171bc0	ca20a500	_mov.c r0,0x2
ram:00171bc4	8c201080	cmp r0,0x400
ram:00171bc8	e120c507	jc.d [blink]
ram:00171bcc	4a20c000	_mov r0,0x3
ram:00171bd0	2120c007	j.d [blink]
ram:00171bd4	8a20ff0f	_mov r0,-0x1
