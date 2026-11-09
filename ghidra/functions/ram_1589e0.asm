; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001589e0 entry ram:001589e0
ram:001589e0	a1c1	sub_s sp,sp,0x4
ram:001589e2	f1c0	push_s blink
ram:001589e4	41c0	st_s r0,[sp,0x4]
ram:001589e6	00160270180078c2	ld r2,[0x18c278]
ram:001589ee	81c1	add_s r1,sp,0x4
ram:001589f0	4022000a	add r0,r2,0x28
ram:001589f4	fa0deffe	bl.d 0x001567ec
ram:001589f8	4a220001	_mov r2,0x4
ram:001589fc	04141f34	ld.ab blink,[sp,0x4]
ram:00158a00	4a260070	nop
ram:00158a04	2120c007	j.d [blink]
ram:00158a08	40241c31	_add sp,sp,0x4
