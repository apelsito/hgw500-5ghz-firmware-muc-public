; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000e3a84 entry ram:000e3a84
ram:000e3a84	1ce9	breq_s r1,0,0x000e3abc
ram:000e3a86	31089e01	bbit0 r0,0x6,0x000e3ab4
ram:000e3a8a	50208401	bclr r4,r0,0x6
ram:000e3a8e	40244408	add r4,r4,0x21
ram:000e3a92	2f270701	extb r7,r4
ram:000e3a96	8c27018b	cmp r7,0x6c
ram:000e3a9a	c6f6	ble_s 0x000e3aa4
ram:000e3a9c	2120c007	j.d [blink]
ram:000e3aa0	4a200001	_mov r0,0x4
ram:000e3aa4	53248401	bmsk r4,r4,0x6
ram:000e3aa8	3224800f1a005452	ldb r0,[r4, 0x1a5254]
ram:000e3ab0	1d000000	b 0x000e3acc
ram:000e3ab4	c6b8	bmsk_s r0,r0,0x6
ram:000e3ab6	e07f	j_s.d [blink]
ram:000e3ab8	42280001	_asr r0,r0,0x4
ram:000e3abc	c6b8	bmsk_s r0,r0,0x6
ram:000e3abe	cce0	cmp_s r0,0x4c
ram:000e3ac0	dc07c9ff	bgt 0x000e3a9c
ram:000e3ac4	3220800f1a005452	ldb r0,[r0, 0x1a5254]
ram:000e3acc	61b8	sub_s r0,r0,0x1
ram:000e3ace	e07f	j_s.d [blink]
ram:000e3ad0	2f200700	_extb r0,r0
