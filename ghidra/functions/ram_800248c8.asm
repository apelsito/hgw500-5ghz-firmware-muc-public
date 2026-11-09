; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_800248c8 entry ram:800248c8
ram:800248c8	f01c48b3	st.aw r13,[sp,-0x10]
ram:800248cc	041cc037	st blink,[sp,0x4]
ram:800248d0	42c6	st_s r14,[sp,0x8]
ram:800248d2	43c7	st_s r15,[sp,0xc]
ram:800248d4	0877	mov_s r15,r0
ram:800248d6	00de	mov_s r14,0x0
ram:800248d8	4a20c000	mov r0,0x3
ram:800248dc	0875	mov_s r13,r0
ram:800248de	e970	mov_s r0,r15
ram:800248e0	660eefff	bl.d 0x80024744
ram:800248e4	0a218003	_mov r1,r14
ram:800248e8	86e8	brne_s r0,0,0x800248f4
ram:800248ea	096d	sub_s r0,r13,0x1
ram:800248ec	f1087580	brhs.d r0,0x1,0x800248dc
ram:800248f0	40264e10	_add r14,r14,0x1
ram:800248f4	04141f30	ld blink,[sp,0x4]
ram:800248f8	02c6	ld_s r14,[sp,0x8]
ram:800248fa	03c7	ld_s r15,[sp,0xc]
ram:800248fc	2120c007	j.d [blink]
ram:80024900	10140d34	_ld.ab r13,[sp,0x10]
