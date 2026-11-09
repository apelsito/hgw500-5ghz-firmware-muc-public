; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000e4f74 entry ram:000e4f74
ram:000e4f74	e1c5	push_s r13
ram:000e4f76	eb75	mov_s r13,blink
ram:000e4f78	0a240010	mov r12,r0
ram:000e4f7c	42244c90	sub.f r12,r12,0x1
ram:000e4f80	e0208f0f0e007c4f	jpnz 0x000e4f7c
ram:000e4f88	0a274033	mov blink,r13
ram:000e4f8c	4a260070	nop
ram:000e4f90	2120c007	j.d [blink]
ram:000e4f94	04140d34	_ld.ab r13,[sp,0x4]
