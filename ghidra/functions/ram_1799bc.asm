; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001799bc entry ram:001799bc
ram:001799bc	4a240000	mov r4,0x0
ram:001799c0	40280002	asl r0,r0,0x8
ram:001799c4	4029c101	asl r1,r1,0x7
ram:001799c8	8a240170	mov lp_count,0x40
ram:001799cc	0a25800f190084af	mov r5,0x19af84
ram:001799d4	a8200004	lp 0x001799f4
ram:001799d8	402c8300	asl r3,r4,0x2
ram:001799dc	34254200	ldh r2,[r5, r1]
ram:001799e0	0223830ff6190000	sub r3,r3,0x19f60000
ram:001799e8	1b63	add_s r3,r3,r0
ram:001799ea	02e1	add_s r1,r1,0x2
ram:001799ec	cbba	bmsk_s r2,r2,0xb
ram:001799ee	40a3	st_s r2,[r3,0x0]
ram:001799f0	40244400	add r4,r4,0x1
ram:001799f4	e07e	j_s [blink]
