; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0015ffec entry ram:0015ffec
ram:0015ffec	e1c5	push_s r13
ram:0015ffee	eb75	mov_s r13,blink
ram:0015fff0	0872	mov_s r2,r0
ram:0015fff2	2c128300	ldb r3,[r2,0x2c]
ram:0015fff6	95204100	add2 r0,r0,0x41
ram:0015fffa	81e3	cmp_s r3,0x1
ram:0015fffc	2c0fc1ff	bleq 0x0015ff28
ram:00160000	0a274033	mov blink,r13
ram:00160004	4a260070	nop
ram:00160008	2120c007	j.d [blink]
ram:0016000c	04140d34	_ld.ab r13,[sp,0x4]
