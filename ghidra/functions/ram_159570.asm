; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00159570 entry ram:00159570
ram:00159570	e1c5	push_s r13
ram:00159572	eb75	mov_s r13,blink
ram:00159574	3220800f00007c06	ldb r0,[r0, 0x67c]
ram:0015957c	9a084ffe	bl 0x00155e14
ram:00159580	0a274033	mov blink,r13
ram:00159584	94100000	ld r0,[r0,0x94]
ram:00159588	31b8	lsr_s r0,r0,0x11
ram:0015958a	c1c5	pop_s r13
ram:0015958c	2120c007	j.d [blink]
ram:00159590	53200000	_bmsk r0,r0,0x0
