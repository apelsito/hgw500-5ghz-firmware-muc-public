; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00119208 entry ram:00119208
ram:00119208	f41c48b3	st.aw r13,[sp,-0xc]
ram:0011920c	041cc037	st blink,[sp,0x4]
ram:00119210	42c6	st_s r14,[sp,0x8]
ram:00119212	0876	mov_s r14,r0
ram:00119214	0a258010	mov r13,r2
ram:00119218	9e0fefff	bl.d 0x001191b4
ram:0011921c	0a218000	_mov r1,r2
ram:00119220	8ee8	brne_s r0,0,0x0011923c
ram:00119222	cf701c00fc22	mov_s r0,0x1c22fc
ram:00119228	0a214003	mov r1,r13
ram:0011922c	2220800f0e0060e2	jl 0x000ee260
ram:00119234	15002000	b.d 0x00119248
ram:00119238	8a20ff0f	_mov r0,-0x1
ram:0011923c	3026811f0000f039	ld r1,[r14, 0x39f0]
ram:00119244	22204000	jl [r1]
ram:00119248	04141f30	ld blink,[sp,0x4]
ram:0011924c	08140e30	ld r14,[sp,0x8]
ram:00119250	2120c007	j.d [blink]
ram:00119254	0c140d34	_ld.ab r13,[sp,0xc]
