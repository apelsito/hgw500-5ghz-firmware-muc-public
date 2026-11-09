; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0013f08c entry ram:0013f08c
ram:0013f08c	0a25800f1a00d490	mov r5,0x1a90d4
ram:0013f094	9925c10f	sub3 r5,r5,0x7f
ram:0013f098	0a21801f0380f477	mov r9,0x800377f4
ram:0013f0a0	24110610	ld r6,[r9,0x24]
ram:0013f0a4	00254700	add r7,r5,r1
ram:0013f0a8	402e0602	asl r6,r6,0x8
ram:0013f0ac	3227870f00007c03	ldb r7,[r7, 0x37c]
ram:0013f0b4	28110410	ld r4,[r9,0x28]
ram:0013f0b8	0526c601	or r6,r6,r7
ram:0013f0bc	402c0402	asl r4,r4,0x8
ram:0013f0c0	24198011	st r6,[r9,0x24]
ram:0013f0c4	05248400	or r4,r4,r2
ram:0013f0c8	28190011	st r4,[r9,0x28]
ram:0013f0cc	00208c0f0000d624	add r12,r0,0x24d6
ram:0013f0d4	20b4	stw_s r1,[r12,0x0]
ram:0013f0d6	00208c0f0000d824	add r12,r0,0x24d8
ram:0013f0de	40ac	stb_s r2,[r12,0x0]
ram:0013f0e0	4a204010	mov r8,0x1
ram:0013f0e4	00208c0f0000da24	add r12,r0,0x24da
ram:0013f0ec	001c0212	stb r8,[r12]
ram:0013f0f0	00208c0f0000d924	add r12,r0,0x24d9
ram:0013f0f8	2120c007	j.d [blink]
ram:0013f0fc	001cc210	_stb r3,[r12]
