; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001583e0 entry ram:001583e0
ram:001583e0	a1c1	sub_s sp,sp,0x4
ram:001583e2	f1c0	push_s blink
ram:001583e4	41c1	st_s r1,[sp,0x4]
ram:001583e6	00100400	ld r4,[r0]
ram:001583ea	81c1	add_s r1,sp,0x4
ram:001583ec	00140301	ldh r3,[r4]
ram:001583f0	00160270180078c2	ld r2,[0x18c278]
ram:001583f8	04bb	asl_s r3,r3,0x4
ram:001583fa	747b	add1_s r3,r3,r3
ram:001583fc	24e2	add_s r2,r2,0x24
ram:001583fe	7862	add_s r0,r2,r3
ram:00158400	ee0b2fff	bl.d 0x001567ec
ram:00158404	4a220001	_mov r2,0x4
ram:00158408	04141f34	ld.ab blink,[sp,0x4]
ram:0015840c	4a260070	nop
ram:00158410	2120c007	j.d [blink]
ram:00158414	40241c31	_add sp,sp,0x4
