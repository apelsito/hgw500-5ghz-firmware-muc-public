; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0013f05c entry ram:0013f05c
ram:0013f05c	42241c36	sub sp,sp,0x18
ram:0013f060	1c140231	ldh r2,[sp,0x1c]
ram:0013f064	00218c0f0000e824	add r12,r1,0x24e8
ram:0013f06c	05ba	asl_s r2,r2,0x5
ram:0013f06e	001c8011	st r6,[r12]
ram:0013f072	0c268080	cmp r6,r2
ram:0013f076	ca228501	mov.c r2,r6
ram:0013f07a	00218c0f0000ec24	add r12,r1,0x24ec
ram:0013f082	40a4	st_s r2,[r12,0x0]
ram:0013f084	2120c007	j.d [blink]
ram:0013f088	40241c36	_add sp,sp,0x18
