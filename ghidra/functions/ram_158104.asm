; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00158104 entry ram:00158104
ram:00158104	f81c48b3	st.aw r13,[sp,-0x8]
ram:00158108	30208d0f0000a43d	ld r13,[r0, 0x3da4]
ram:00158110	041c8033	st r14,[sp,0x4]
ram:00158114	1d0d3010	breq.d r13,0x0,0x00158130
ram:00158118	0a26c017	_mov r14,blink
ram:0015811c	c60aafff	bl.d 0x001573e0
ram:00158120	0a204003	_mov r0,r13
ram:00158124	30258d1f0000600d	ld r13,[r13, 0xd60]
ram:0015812c	f10d1190	brne r13,0x0,0x0015811c
ram:00158130	fb76	mov_s blink,r14
ram:00158132	01c6	ld_s r14,[sp,0x4]
ram:00158134	2120c007	j.d [blink]
ram:00158138	08140d34	_ld.ab r13,[sp,0x8]
