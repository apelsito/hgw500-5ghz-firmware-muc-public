; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0014dd68 entry ram:0014dd68
ram:0014dd68	f81c48b3	st.aw r13,[sp,-0x8]
ram:0014dd6c	0875	mov_s r13,r0
ram:0014dd6e	3220800f0000e804	ldb r0,[r0, 0x4e8]
ram:0014dd76	41c6	st_s r14,[sp,0x4]
ram:0014dd78	1d08b100	brne.d r0,0x2,0x0014dd94
ram:0014dd7c	0a26c017	_mov r14,blink
ram:0014dd80	ca0aefff	bl.d 0x0014d848
ram:0014dd84	0a204003	_mov r0,r13
ram:0014dd88	0a204003	mov r0,r13
ram:0014dd8c	2220800f1100b8bd	jl 0x0011bdb8
ram:0014dd94	fb76	mov_s blink,r14
ram:0014dd96	01c6	ld_s r14,[sp,0x4]
ram:0014dd98	2120c007	j.d [blink]
ram:0014dd9c	08140d34	_ld.ab r13,[sp,0x8]
