; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001591b8 entry ram:001591b8
ram:001591b8	a1c1	sub_s sp,sp,0x4
ram:001591ba	f1c0	push_s blink
ram:001591bc	41c1	st_s r1,[sp,0x4]
ram:001591be	00160270180074c2	ld r2,[0x18c274]
ram:001591c6	81c1	add_s r1,sp,0x4
ram:001591c8	40220004	add r0,r2,0x10
ram:001591cc	220eaffe	bl.d 0x001567ec
ram:001591d0	4a220001	_mov r2,0x4
ram:001591d4	04141f34	ld.ab blink,[sp,0x4]
ram:001591d8	4a260070	nop
ram:001591dc	2120c007	j.d [blink]
ram:001591e0	40241c31	_add sp,sp,0x4
