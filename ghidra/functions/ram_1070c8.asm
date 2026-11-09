; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001070c8 entry ram:001070c8
ram:001070c8	e1c5	push_s r13
ram:001070ca	4a80	ld_s r2,[r0,0x28]
ram:001070cc	3020830f0000fc39	ld r3,[r0, 0x39fc]
ram:001070d4	19093000	breq.d r1,0x0,0x001070ec
ram:001070d8	0a25c017	_mov r13,blink
ram:001070dc	4f228202	bset r2,r2,0xa
ram:001070e0	210b3000	breq.d r3,0x0,0x00107100
ram:001070e4	28188000	_st r2,[r0,0x28]
ram:001070e8	11000000	b 0x001070f8
ram:001070ec	50228202	bclr r2,r2,0xa
ram:001070f0	110b3000	breq.d r3,0x0,0x00107100
ram:001070f4	28188000	_st r2,[r0,0x28]
ram:001070f8	2320c000	jl.d [r3]
ram:001070fc	00100000	_ld r0,[r0]
ram:00107100	0a274033	mov blink,r13
ram:00107104	4a260070	nop
ram:00107108	2120c007	j.d [blink]
ram:0010710c	04140d34	_ld.ab r13,[sp,0x4]
