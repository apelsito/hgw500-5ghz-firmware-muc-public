; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001340f0 entry ram:001340f0
ram:001340f0	f41c48b3	st.aw r13,[sp,-0xc]
ram:001340f4	041cc037	st blink,[sp,0x4]
ram:001340f8	42c6	st_s r14,[sp,0x8]
ram:001340fa	001684700280bcc8	ldb r4,[0x8002c8bc]
ram:00134102	0876	mov_s r14,r0
ram:00134104	310cf100	brne.d r4,0x3,0x00134134
ram:00134108	0a224000	_mov r2,r1
ram:0013410c	06db	mov_s r3,0x6
ram:0013410e	00268c1f00001a40	add r12,r14,0x401a
ram:00134116	60ac	stb_s r3,[r12,0x0]
ram:00134118	0a25801f2000d4d9	mov r13,0x20d9d4
ram:00134120	fe0aefff	bl.d 0x00133c1c
ram:00134124	0a214003	_mov r1,r13
ram:00134128	c970	mov_s r0,r14
ram:0013412a	a971	mov_s r1,r13
ram:0013412c	460e6000	bl.d 0x00134f70
ram:00134130	4a220000	_mov r2,0x0
ram:00134134	04141f30	ld blink,[sp,0x4]
ram:00134138	08140e30	ld r14,[sp,0x8]
ram:0013413c	2120c007	j.d [blink]
ram:00134140	0c140d34	_ld.ab r13,[sp,0xc]
