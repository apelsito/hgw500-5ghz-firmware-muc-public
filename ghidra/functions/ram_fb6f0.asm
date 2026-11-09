; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000fb6f0 entry ram:000fb6f0
ram:000fb6f0	ec1c48b3	st.aw r13,[sp,-0x14]
ram:000fb6f4	041cc037	st blink,[sp,0x4]
ram:000fb6f8	42c6	st_s r14,[sp,0x8]
ram:000fb6fa	43c7	st_s r15,[sp,0xc]
ram:000fb6fc	101c0034	st r16,[sp,0x10]
ram:000fb700	1a70	mov_s r16,r0
ram:000fb702	2877	mov_s r15,r1
ram:000fb704	00de	mov_s r14,0x0
ram:000fb706	02dd	mov_s r13,0x2
ram:000fb708	0a70	mov_s r0,r16
ram:000fb70a	e971	mov_s r1,r15
ram:000fb70c	7e0fefff	bl.d 0x000fb688
ram:000fb710	0a228003	_mov r2,r14
ram:000fb714	40264e10	add r14,r14,0x1
ram:000fb718	42254d10	sub r13,r13,0x1
ram:000fb71c	ed0d7590	brhs.d r13,0x1,0x000fb708
ram:000fb720	2f268713	_extb r14,r14
ram:000fb724	04141f30	ld blink,[sp,0x4]
ram:000fb728	02c6	ld_s r14,[sp,0x8]
ram:000fb72a	03c7	ld_s r15,[sp,0xc]
ram:000fb72c	10141030	ld r16,[sp,0x10]
ram:000fb730	2120c007	j.d [blink]
ram:000fb734	14140d34	_ld.ab r13,[sp,0x14]
