; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0017f09c entry ram:0017f09c
ram:0017f09c	f01c48b3	st.aw r13,[sp,-0x10]
ram:0017f0a0	041cc037	st blink,[sp,0x4]
ram:0017f0a4	42c6	st_s r14,[sp,0x8]
ram:0017f0a6	43c7	st_s r15,[sp,0xc]
ram:0017f0a8	0877	mov_s r15,r0
ram:0017f0aa	cf7621009042	mov_s r14,0x214290
ram:0017f0b0	4a250011	mov r13,0x4
ram:0017f0b4	0a208003	mov r0,r14
ram:0017f0b8	6e082ffe	bl.d 0x0017b124
ram:0017f0bc	0a21c003	_mov r1,r15
ram:0017f0c0	22164111	ldh.x r1,[r14,0x22]
ram:0017f0c4	9e092ffe	bl.d 0x0017b260
ram:0017f0c8	0a208003	_mov r0,r14
ram:0017f0cc	42254d10	sub r13,r13,0x1
ram:0017f0d0	e50d7590	brhs.d r13,0x1,0x0017f0b4
ram:0017f0d4	40260e1f	_add r14,r14,0x3c
ram:0017f0d8	04141f30	ld blink,[sp,0x4]
ram:0017f0dc	02c6	ld_s r14,[sp,0x8]
ram:0017f0de	03c7	ld_s r15,[sp,0xc]
ram:0017f0e0	2120c007	j.d [blink]
ram:0017f0e4	10140d34	_ld.ab r13,[sp,0x10]
