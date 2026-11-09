; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0013db5c entry ram:0013db5c
ram:0013db5c	e1c5	push_s r13
ram:0013db5e	00160070180004c2	ld r0,[0x18c204]
ram:0013db66	eb75	mov_s r13,blink
ram:0013db68	4c200080	cmp r0,0x0
ram:0013db6c	e2200200	jlne [r0]
ram:0013db70	0a274033	mov blink,r13
ram:0013db74	4a260070	nop
ram:0013db78	2120c007	j.d [blink]
ram:0013db7c	04140d34	_ld.ab r13,[sp,0x4]
