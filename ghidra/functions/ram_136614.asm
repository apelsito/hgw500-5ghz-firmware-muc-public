; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00136614 entry ram:00136614
ram:00136614	f41c48b3	st.aw r13,[sp,-0xc]
ram:00136618	081c8033	st r14,[sp,0x8]
ram:0013661c	0876	mov_s r14,r0
ram:0013661e	0780	ld_s r0,[r0,0x1c]
ram:00136620	041cc037	st blink,[sp,0x4]
ram:00136624	06da	mov_s r2,0x6
ram:00136626	30208d0f0000203b	ld r13,[r0, 0x3b20]
ram:0013662e	40260019	add r0,r14,0x24
ram:00136632	2220800f390000fe	jl 0x0039fe00
ram:0013663a	a970	mov_s r0,r13
ram:0013663c	00d9	mov_s r1,0x0
ram:0013663e	40260219	add r2,r14,0x24
ram:00136642	01db	mov_s r3,0x1
ram:00136644	2220800f1000a44f	jl 0x00104fa4
ram:0013664c	04141f30	ld blink,[sp,0x4]
ram:00136650	02c6	ld_s r14,[sp,0x8]
ram:00136652	0c140d34	ld.ab r13,[sp,0xc]
ram:00136656	e07f	j_s.d [blink]
ram:00136658	4a200000	_mov r0,0x0
