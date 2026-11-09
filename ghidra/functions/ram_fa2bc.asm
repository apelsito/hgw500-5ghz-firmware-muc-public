; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000fa2bc entry ram:000fa2bc
ram:000fa2bc	fc1c48b3	st.aw r13,[sp,-0x4]
ram:000fa2c0	2108330c	brge.d r0,0x30,0x000fa2e0
ram:000fa2c4	0a25c017	_mov r13,blink
ram:000fa2c8	02b8	asl_s r0,r0,0x2
ram:000fa2ca	00160170180068c0	ld r1,[0x18c068]
ram:000fa2d2	1678	add3_s r0,r0,r0
ram:000fa2d4	14200000	add1 r0,r0,r0
ram:000fa2d8	00204080	add.f r0,r0,r1
ram:000fa2dc	340f82ff	blne 0x000f9a10
ram:000fa2e0	0a274033	mov blink,r13
ram:000fa2e4	4a260070	nop
ram:000fa2e8	2120c007	j.d [blink]
ram:000fa2ec	04140d34	_ld.ab r13,[sp,0x4]
