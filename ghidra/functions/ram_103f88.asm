; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00103f88 entry ram:00103f88
ram:00103f88	4a240071	mov lp_count,0x4
ram:00103f8c	4a240000	mov r4,0x0
ram:00103f90	a8200004	lp 0x00103fb0
ram:00103f94	0ce9	breq_s r1,0,0x00103fac
ram:00103f96	402c8300	asl r3,r4,0x2
ram:00103f9a	4380	ld_s r2,[r0,0xc]
ram:00103f9c	c77310000004	add_s r3,r3,0x100400
ram:00103fa2	7a62	add_s r2,r2,r3
ram:00103fa4	001a800f00400000	st 0x40000000,[r2]
ram:00103fac	40244400	add r4,r4,0x1
ram:00103fb0	e07e	j_s [blink]
