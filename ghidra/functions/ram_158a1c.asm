; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00158a1c entry ram:00158a1c
ram:00158a1c	f81c48b3	st.aw r13,[sp,-0x8]
ram:00158a20	30208d0f0000a43d	ld r13,[r0, 0x3da4]
ram:00158a28	041c8033	st r14,[sp,0x4]
ram:00158a2c	1d0d3010	breq.d r13,0x0,0x00158a48
ram:00158a30	0a26c017	_mov r14,blink
ram:00158a34	620b6fff	bl.d 0x00157594
ram:00158a38	0a204003	_mov r0,r13
ram:00158a3c	30258d1f0000600d	ld r13,[r13, 0xd60]
ram:00158a44	f10d1190	brne r13,0x0,0x00158a34
ram:00158a48	fb76	mov_s blink,r14
ram:00158a4a	01c6	ld_s r14,[sp,0x4]
ram:00158a4c	2120c007	j.d [blink]
ram:00158a50	08140d34	_ld.ab r13,[sp,0x8]
