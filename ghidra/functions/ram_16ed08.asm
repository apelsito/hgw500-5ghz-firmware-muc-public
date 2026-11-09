; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0016ed08 entry ram:0016ed08
ram:0016ed08	f81c48b3	st.aw r13,[sp,-0x8]
ram:0016ed0c	41c6	st_s r14,[sp,0x4]
ram:0016ed0e	eb76	mov_s r14,blink
ram:0016ed10	cf751900b84b	mov_s r13,0x194bb8
ram:0016ed16	20a5	st_s r1,[r13,0x0]
ram:0016ed18	ae0eefff	bl.d 0x0016ebc4
ram:0016ed1c	281d0010	_st r0,[r13,0x28]
ram:0016ed20	00150110	ld r1,[r13]
ram:0016ed24	0a278033	mov blink,r14
ram:0016ed28	01c6	ld_s r14,[sp,0x4]
ram:0016ed2a	21a5	st_s r1,[r13,0x4]
ram:0016ed2c	08140d34	ld.ab r13,[sp,0x8]
ram:0016ed30	2120c007	j.d [blink]
ram:0016ed34	4a200000	_mov r0,0x0
