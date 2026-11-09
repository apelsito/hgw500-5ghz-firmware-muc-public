; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000f7d60 entry ram:000f7d60
ram:000f7d60	0420838fffff00f0	and.f r3,r0,0xfffff000
ram:000f7d68	4a260070	nop
ram:000f7d6c	e120c107	jeq.d [blink]
ram:000f7d70	5320c102	_bmsk r1,r0,0xb
ram:000f7d74	8c210880	cmp r1,0x200
ram:000f7d78	e020c607	jnc [blink]
ram:000f7d7c	02b9	asl_s r1,r1,0x2
ram:000f7d7e	3679	add3_s r1,r1,r1
ram:000f7d80	c7711f00bcbe	add_s r1,r1,0x1fbebc
ram:000f7d86	0681	ld_s r0,[r1,0x18]
ram:000f7d88	0420800fffff00f0	and r0,r0,0xfffff000
ram:000f7d90	1073	cmp_s r3,r0
ram:000f7d92	e07d	jne_s [blink]
ram:000f7d94	80e1	cmp_s r1,0x0
ram:000f7d96	e07c	jeq_s [blink]
ram:000f7d98	00da	mov_s r2,0x0
ram:000f7d9a	e07f	j_s.d [blink]
ram:000f7d9c	18198000	_st r2,[r1,0x18]
