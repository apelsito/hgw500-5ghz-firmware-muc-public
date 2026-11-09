; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0017e4bc entry ram:0017e4bc
ram:0017e4bc	40200101	add r1,r0,0x4
ram:0017e4c0	4a240074	mov lp_count,0x10
ram:0017e4c4	4a220000	mov r2,0x0
ram:0017e4c8	a8200002	lp 0x0017e4d8
ram:0017e4cc	4873	mov_s r3,r2
ram:0017e4ce	4091	ldw_s r2,[r1,0x0]
ram:0017e4d0	06ea	breq_s r2,0,0x0017e4dc
ram:0017e4d2	7a62	add_s r2,r2,r3
ram:0017e4d4	40218100	add r1,r1,0x2
ram:0017e4d8	09000000	b 0x0017e4e0
ram:0017e4dc	4a220000	mov r2,0x0
ram:0017e4e0	7b6a	asr_s r3,r2,0x3
ram:0017e4e2	3cbb	lsr_s r3,r3,0x1c
ram:0017e4e4	5b63	add_s r3,r3,r2
ram:0017e4e6	44bb	asr_s r3,r3,0x4
ram:0017e4e8	2120c007	j.d [blink]
ram:0017e4ec	0218c400	_sth r3,[r0,0x2]
