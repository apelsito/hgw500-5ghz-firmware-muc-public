; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001393ac entry ram:001393ac
ram:001393ac	4a244071	mov lp_count,0x5
ram:001393b0	4a260070	nop
ram:001393b4	a8208005	lp 0x001393e0
ram:001393b8	4480	ld_s r2,[r0,0x10]
ram:001393ba	12ea	breq_s r2,0,0x001393dc
ram:001393bc	6980	ld_s r3,[r0,0x24]
ram:001393be	1d0b1300	brge r3,0x0,0x001393d8
ram:001393c2	002e447000000100	asl r4,0x1,r1
ram:001393ca	42244400	sub r4,r4,0x1
ram:001393ce	1a24c300	mpy r3,r4,r3
ram:001393d2	7a62	add_s r2,r2,r3
ram:001393d4	022a4200	asr r2,r2,r1
ram:001393d8	24188000	st r2,[r0,0x24]
ram:001393dc	40200001	add r0,r0,0x4
ram:001393e0	e07e	j_s [blink]
