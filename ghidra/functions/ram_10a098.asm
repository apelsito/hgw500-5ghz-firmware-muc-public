; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0010a098 entry ram:0010a098
ram:0010a098	f41c48b3	st.aw r13,[sp,-0xc]
ram:0010a09c	081c8033	st r14,[sp,0x8]
ram:0010a0a0	0a260090	mov.f r14,r0
ram:0010a0a4	30002100	beq.d 0x0010a0d4
ram:0010a0a8	041cc037	_st blink,[sp,0x4]
ram:0010a0ac	3026811f0000a43d	ld r1,[r14, 0x3da4]
ram:0010a0b4	21091000	breq r1,0x0,0x0010a0d4
ram:0010a0b8	30218d0f0000600d	ld r13,[r1, 0xd60]
ram:0010a0c0	660fefff	bl.d 0x0010a024
ram:0010a0c4	0a208003	_mov r0,r14
ram:0010a0c8	4c250090	cmp r13,0x0
ram:0010a0cc	ec07e2ff	bne.d 0x0010a0b8
ram:0010a0d0	ca214203	_mov.ne r1,r13
ram:0010a0d4	04141f30	ld blink,[sp,0x4]
ram:0010a0d8	02c6	ld_s r14,[sp,0x8]
ram:0010a0da	e07f	j_s.d [blink]
ram:0010a0dc	0c140d34	_ld.ab r13,[sp,0xc]
