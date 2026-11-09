; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000e8208 entry ram:000e8208
ram:000e8208	f81c48b3	st.aw r13,[sp,-0x8]
ram:000e820c	0875	mov_s r13,r0
ram:000e820e	0790	ldw_s r0,[r0,0xe]
ram:000e8210	44200009	and r0,r0,0x24
ram:000e8214	31083009	breq.d r0,0x24,0x000e8244
ram:000e8218	041cc037	_st blink,[sp,0x4]
ram:000e821c	a970	mov_s r0,r13
ram:000e821e	2220800f0f00ec12	jl 0x000f12ec
ram:000e8226	3a85	ld_s r1,[r13,0x68]
ram:000e8228	39091000	breq r1,0x0,0x000e8260
ram:000e822c	23204000	jl.d [r1]
ram:000e8230	0a204003	_mov r0,r13
ram:000e8234	04141f30	ld blink,[sp,0x4]
ram:000e8238	4a260070	nop
ram:000e823c	2120c007	j.d [blink]
ram:000e8240	08140d34	_ld.ab r13,[sp,0x8]
ram:000e8244	cf701b003cc9	mov_s r0,0x1bc93c
ram:000e824a	246d	add_s r1,r13,0x4
ram:000e824c	2220800f0e0060e2	jl 0x000ee260
ram:000e8254	04141f30	ld blink,[sp,0x4]
ram:000e8258	2120c007	j.d [blink]
ram:000e825c	08140d34	_ld.ab r13,[sp,0x8]
ram:000e8260	04141f30	ld blink,[sp,0x4]
ram:000e8264	2120c007	j.d [blink]
ram:000e8268	08140d34	_ld.ab r13,[sp,0x8]
