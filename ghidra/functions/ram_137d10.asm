; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00137d10 entry ram:00137d10
ram:00137d10	4c200080	cmp r0,0x0
ram:00137d14	4a260070	nop
ram:00137d18	e07c	jeq_s [blink]
ram:00137d1a	15085000	breq r0,0x1,0x00137d2c
ram:00137d1e	82e0	cmp_s r0,0x2
ram:00137d20	e020c207	jne [blink]
ram:00137d24	2020800f1800f8a8	j 0x0018a8f8
ram:00137d2c	2020800f18000ca9	j 0x0018a90c
