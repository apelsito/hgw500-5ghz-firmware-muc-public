; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001573a4 entry ram:001573a4
ram:001573a4	00100500	ld r5,[r0]
ram:001573a8	0a210000	mov r1,r0
ram:001573ac	2c158400	ldb r4,[r5,0x2c]
ram:001573b0	001680700280e0c8	ldb r0,[0x8002c8e0]
ram:001573b8	4c244080	cmp r4,0x1
ram:001573bc	e07d	jne_s [blink]
ram:001573be	3221820f00000e04	ldb r2,[r1, 0x40e]
ram:001573c6	80e2	cmp_s r2,0x0
ram:001573c8	e07c	jeq_s [blink]
ram:001573ca	6691	ldw_s r3,[r1,0xc]
ram:001573cc	eebb	btst_s r3,0xe
ram:001573ce	e07c	jeq_s [blink]
ram:001573d0	4c204080	cmp r0,0x1
ram:001573d4	e020c907	jgt [blink]
ram:001573d8	2120c007	j.d [blink]
ram:001573dc	4a204000	_mov r0,0x1
