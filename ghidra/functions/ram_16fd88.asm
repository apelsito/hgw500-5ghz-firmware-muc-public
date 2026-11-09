; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0016fd88 entry ram:0016fd88
ram:0016fd88	f81c48b3	st.aw r13,[sp,-0x8]
ram:0016fd8c	041cc037	st blink,[sp,0x4]
ram:0016fd90	8875	mov_s r13,r4
ram:0016fd92	2220800f18008499	jl 0x00189984
ram:0016fd9a	00d8	mov_s r0,0x0
ram:0016fd9c	2220800f1700cc1a	jl 0x00171acc
ram:0016fda4	00d8	mov_s r0,0x0
ram:0016fda6	2220800f1700c815	jl 0x001715c8
ram:0016fdae	01da	mov_s r2,0x1
ram:0016fdb0	cf71180070c3	mov_s r1,0x18c370
ram:0016fdb6	48a9	stb_s r2,[r1,0x8]
ram:0016fdb8	5a0fefff	bl.d 0x0016fd10
ram:0016fdbc	0a204000	_mov r0,r1
ram:0016fdc0	0a204003	mov r0,r13
ram:0016fdc4	2220800f1600e863	jl 0x001663e8
ram:0016fdcc	04141f30	ld blink,[sp,0x4]
ram:0016fdd0	2120c007	j.d [blink]
ram:0016fdd4	08140d34	_ld.ab r13,[sp,0x8]
