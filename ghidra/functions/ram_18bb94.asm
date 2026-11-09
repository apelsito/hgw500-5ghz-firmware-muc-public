; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0018bb94 entry ram:0018bb94
ram:0018bb94	e1c0	push_s r0
ram:0018bb96	e1c1	push_s r1
ram:0018bb98	8a20ff0f	mov r0,-0x1
ram:0018bb9c	1320c002	bmsk r0,r0,r11
ram:0018bba0	0479	and_s r1,r1,r0
ram:0018bba2	00288002	asl r0,r0,r10
ram:0018bba6	00298102	asl r1,r1,r10
ram:0018bbaa	06240c10	bic r12,r12,r0
ram:0018bbae	257c	or_s r12,r12,r1
ram:0018bbb0	c1c1	pop_s r1
ram:0018bbb2	e07f	j_s.d [blink]
ram:0018bbb4	c1c0	_pop_s r0
