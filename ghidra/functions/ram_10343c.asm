; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0010343c entry ram:0010343c
ram:0010343c	f41c48b3	st.aw r13,[sp,-0xc]
ram:00103440	041cc037	st blink,[sp,0x4]
ram:00103444	42c6	st_s r14,[sp,0x8]
ram:00103446	0876	mov_s r14,r0
ram:00103448	cf751a00985d	mov_s r13,0x1a5d98
ram:0010344e	0025801f0000e600	add r0,r13,0xe6
ram:00103456	06da	mov_s r2,0x6
ram:00103458	2220800f390000fe	jl 0x0039fe00
ram:00103460	5525c11d	add2 r1,r13,0x37
ram:00103464	51160016	ld.as r0,[r14,0x51]
ram:00103468	e60aaffd	bl.d 0x000fe74c
ram:0010346c	4a220007	_mov r2,0x1c
ram:00103470	04141f30	ld blink,[sp,0x4]
ram:00103474	08140e30	ld r14,[sp,0x8]
ram:00103478	2120c007	j.d [blink]
ram:0010347c	0c140d34	_ld.ab r13,[sp,0xc]
