; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00179584 entry ram:00179584
ram:00179584	4c208080	cmp r0,0x2
ram:00179588	ca202900	mov.gt r0,0x0
ram:0017958c	3368	asl_s r1,r0,0x3
ram:0017958e	001602701800e0c3	ld r2,[0x18c3e0]
ram:00179596	3479	add1_s r1,r1,r1
ram:00179598	08e2	add_s r2,r2,0x8
ram:0017959a	3062	ldw_s r0,[r2,r1]
ram:0017959c	e07e	j_s [blink]
