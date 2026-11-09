; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00103428 entry ram:00103428
ram:00103428	40298100	asl r1,r1,0x2
ram:0010342c	0c100000	ld r0,[r0,0xc]
ram:00103430	96210201	add3 r1,r1,0x84
ram:00103434	00da	mov_s r2,0x0
ram:00103436	3860	add_s r0,r0,r1
ram:00103438	40a0	st_s r2,[r0,0x0]
ram:0010343a	e07e	j_s [blink]
