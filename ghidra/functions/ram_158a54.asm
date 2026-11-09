; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00158a54 entry ram:00158a54
ram:00158a54	a1c1	sub_s sp,sp,0x4
ram:00158a56	f1c0	push_s blink
ram:00158a58	41c1	st_s r1,[sp,0x4]
ram:00158a5a	00160270180074c2	ld r2,[0x18c274]
ram:00158a62	81c1	add_s r1,sp,0x4
ram:00158a64	40220005	add r0,r2,0x14
ram:00158a68	860deffe	bl.d 0x001567ec
ram:00158a6c	4a220001	_mov r2,0x4
ram:00158a70	04141f34	ld.ab blink,[sp,0x4]
ram:00158a74	4a260070	nop
ram:00158a78	2120c007	j.d [blink]
ram:00158a7c	40241c31	_add sp,sp,0x4
