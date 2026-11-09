; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0015659c entry ram:0015659c
ram:0015659c	20100200	ld r2,[r0,0x20]
ram:001565a0	0d0a1100	brne r2,0x0,0x001565ac
ram:001565a4	2120c007	j.d [blink]
ram:001565a8	4a200000	_mov r0,0x0
ram:001565ac	2792	ldw_s r1,[r2,0xe]
ram:001565ae	11099e01	bbit0 r1,0x6,0x001565bc
ram:001565b2	5882	ld_s r2,[r2,0x60]
ram:001565b4	f90a1180	brne r2,0x0,0x001565ac
ram:001565b8	ed07cfff	b 0x001565a4
ram:001565bc	0782	ld_s r0,[r2,0x1c]
ram:001565be	e07e	j_s [blink]
