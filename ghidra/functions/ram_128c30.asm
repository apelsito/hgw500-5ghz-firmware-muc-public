; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00128c30 entry ram:00128c30
ram:00128c30	1c100500	ld r5,[r0,0x1c]
ram:00128c34	4c210080	cmp r1,0x0
ram:00128c38	3025840f0000203b	ld r4,[r5, 0x3b20]
ram:00128c40	0c140200	ld r2,[r4,0xc]
ram:00128c44	3022830f00000020	ld r3,[r2, 0x2000]
ram:00128c4c	c77200000020	add_s r2,r2,0x2000
ram:00128c52	cf23a201	bset.ne r3,r3,0x6
ram:00128c56	d023a101	bclr.eq r3,r3,0x6
ram:00128c5a	60a2	st_s r3,[r2,0x0]
ram:00128c5c	2120c007	j.d [blink]
ram:00128c60	4a200000	_mov r0,0x0
