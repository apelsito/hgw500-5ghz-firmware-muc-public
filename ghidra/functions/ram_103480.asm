; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00103480 entry ram:00103480
ram:00103480	f41c48b3	st.aw r13,[sp,-0xc]
ram:00103484	041cc037	st blink,[sp,0x4]
ram:00103488	42c6	st_s r14,[sp,0x8]
ram:0010348a	0876	mov_s r14,r0
ram:0010348c	cf751a00985d	mov_s r13,0x1a5d98
ram:00103492	5525c01e	add2 r0,r13,0x3b
ram:00103496	06da	mov_s r2,0x6
ram:00103498	2220800f390000fe	jl 0x0039fe00
ram:001034a0	5525c11d	add2 r1,r13,0x37
ram:001034a4	51160016	ld.as r0,[r14,0x51]
ram:001034a8	a60aaffd	bl.d 0x000fe74c
ram:001034ac	4a220007	_mov r2,0x1c
ram:001034b0	04141f30	ld blink,[sp,0x4]
ram:001034b4	08140e30	ld r14,[sp,0x8]
ram:001034b8	2120c007	j.d [blink]
ram:001034bc	0c140d34	_ld.ab r13,[sp,0xc]
