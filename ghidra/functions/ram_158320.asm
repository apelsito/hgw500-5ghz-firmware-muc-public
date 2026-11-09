; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00158320 entry ram:00158320
ram:00158320	f81c48b3	st.aw r13,[sp,-0x8]
ram:00158324	30208d0f0000a43d	ld r13,[r0, 0x3da4]
ram:0015832c	041c8033	st r14,[sp,0x4]
ram:00158330	1d0d3010	breq.d r13,0x0,0x0015834c
ram:00158334	0a26c017	_mov r14,blink
ram:00158338	0e0fefff	bl.d 0x00158244
ram:0015833c	0a204003	_mov r0,r13
ram:00158340	30258d1f0000600d	ld r13,[r13, 0xd60]
ram:00158348	f10d1190	brne r13,0x0,0x00158338
ram:0015834c	fb76	mov_s blink,r14
ram:0015834e	01c6	ld_s r14,[sp,0x4]
ram:00158350	2120c007	j.d [blink]
ram:00158354	08140d34	_ld.ab r13,[sp,0x8]
