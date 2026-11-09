; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00179568 entry ram:00179568
ram:00179568	4c208080	cmp r0,0x2
ram:0017956c	ca202900	mov.gt r0,0x0
ram:00179570	3368	asl_s r1,r0,0x3
ram:00179572	001602701800e0c3	ld r2,[0x18c3e0]
ram:0017957a	3479	add1_s r1,r1,r1
ram:0017957c	05e2	add_s r2,r2,0x5
ram:0017957e	2862	ldb_s r0,[r2,r1]
ram:00179580	e07e	j_s [blink]
