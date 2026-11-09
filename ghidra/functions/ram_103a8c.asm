; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00103a8c entry ram:00103a8c
ram:00103a8c	f41c48b3	st.aw r13,[sp,-0xc]
ram:00103a90	041cc037	st blink,[sp,0x4]
ram:00103a94	42c6	st_s r14,[sp,0x8]
ram:00103a96	0876	mov_s r14,r0
ram:00103a98	cf751a00985d	mov_s r13,0x1a5d98
ram:00103a9e	0025801f0000d600	add r0,r13,0xd6
ram:00103aa6	06da	mov_s r2,0x6
ram:00103aa8	2220800f390000fe	jl 0x0039fe00
ram:00103ab0	5525c11c	add2 r1,r13,0x33
ram:00103ab4	4a160016	ld.as r0,[r14,0x4a]
ram:00103ab8	960c6ffd	bl.d 0x000fe74c
ram:00103abc	4a220004	_mov r2,0x10
ram:00103ac0	04141f30	ld blink,[sp,0x4]
ram:00103ac4	08140e30	ld r14,[sp,0x8]
ram:00103ac8	2120c007	j.d [blink]
ram:00103acc	0c140d34	_ld.ab r13,[sp,0xc]
