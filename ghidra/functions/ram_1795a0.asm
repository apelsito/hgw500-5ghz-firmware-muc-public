; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001795a0 entry ram:001795a0
ram:001795a0	42241c33	sub sp,sp,0xc
ram:001795a4	4c218080	cmp r1,0x2
ram:001795a8	ca212900	mov.gt r1,0x0
ram:001795ac	03b9	asl_s r1,r1,0x3
ram:001795ae	001605701800e0c3	ld r5,[0x18c3e0]
ram:001795b6	3479	add1_s r1,r1,r1
ram:001795b8	00254400	add r4,r5,r1
ram:001795bc	0c140400	ld r4,[r4,0xc]
ram:001795c0	00254200	add r2,r5,r1
ram:001795c4	4482	ld_s r2,[r2,0x10]
ram:001795c6	001c0031	st r4,[sp]
ram:001795ca	a071	add_s r1,r1,r5
ram:001795cc	6581	ld_s r3,[r1,0x14]
ram:001795ce	41c2	st_s r2,[sp,0x4]
ram:001795d0	42c3	st_s r3,[sp,0x8]
ram:001795d2	00140b30	ld r11,[sp]
ram:001795d6	04140a30	ld r10,[sp,0x4]
ram:001795da	08140930	ld r9,[sp,0x8]
ram:001795de	0018c002	st r11,[r0]
ram:001795e2	04188002	st r10,[r0,0x4]
ram:001795e6	08184002	st r9,[r0,0x8]
ram:001795ea	e07f	j_s.d [blink]
ram:001795ec	40241c33	_add sp,sp,0xc
