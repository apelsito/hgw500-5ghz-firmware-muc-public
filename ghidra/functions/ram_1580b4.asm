; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001580b4 entry ram:001580b4
ram:001580b4	0a22800f18004cc2	mov r2,0x18c24c
ram:001580bc	10120300	ld r3,[r2,0x10]
ram:001580c0	4c230080	cmp r3,0x0
ram:001580c4	e120c107	jeq.d [blink]
ram:001580c8	4a200000	_mov r0,0x0
ram:001580cc	2a82	ld_s r1,[r2,0x28]
ram:001580ce	0081	ld_s r0,[r1,0x0]
ram:001580d0	e07e	j_s [blink]
