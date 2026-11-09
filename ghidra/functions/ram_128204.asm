; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00128204 entry ram:00128204
ram:00128204	f41c48b3	st.aw r13,[sp,-0xc]
ram:00128208	041cc037	st blink,[sp,0x4]
ram:0012820c	081c8033	st r14,[sp,0x8]
ram:00128210	3220860f00004446	ldb r6,[r0, 0x4644]
ram:00128218	00208d0f00007445	add r13,r0,0x4574
ram:00128220	710e7100	brne.d r6,0x1,0x00128290
ram:00128224	0a264010	_mov r14,r1
ram:00128228	d1158110	ldb r1,[r13,0xd1]
ram:0012822c	12e9	breq_s r1,0,0x00128250
ram:0012822e	61b9	sub_s r1,r1,0x1
ram:00128230	6e86	ld_s r3,[r14,0x38]
ram:00128232	d11d4210	stb r1,[r13,0xd1]
ram:00128236	061b8201	stb r6,[r3,0x6]
ram:0012823a	d1158410	ldb r4,[r13,0xd1]
ram:0012823e	04141f30	ld blink,[sp,0x4]
ram:00128242	02c6	ld_s r14,[sp,0x8]
ram:00128244	0c140d34	ld.ab r13,[sp,0xc]
ram:00128248	2120c007	j.d [blink]
ram:0012824c	071b0201	_stb r4,[r3,0x7]
ram:00128250	3020820f0000043a	ld r2,[r0, 0x3a04]
ram:00128258	4a250000	mov r5,0x0
ram:0012825c	d01d4211	stb r5,[r13,0xd0]
ram:00128260	15d8	mov_s r0,0x15
ram:00128262	2092	ldw_s r1,[r2,0x0]
ram:00128264	a872	mov_s r2,r5
ram:00128266	a873	mov_s r3,r5
ram:00128268	2220800f0e003cfe	jl 0x000efe3c
ram:00128270	6e86	ld_s r3,[r14,0x38]
ram:00128272	d0158610	ldb r6,[r13,0xd0]
ram:00128276	04141f30	ld blink,[sp,0x4]
ram:0012827a	061b8201	stb r6,[r3,0x6]
ram:0012827e	d1158410	ldb r4,[r13,0xd1]
ram:00128282	02c6	ld_s r14,[sp,0x8]
ram:00128284	0c140d34	ld.ab r13,[sp,0xc]
ram:00128288	2120c007	j.d [blink]
ram:0012828c	071b0201	_stb r4,[r3,0x7]
ram:00128290	6e86	ld_s r3,[r14,0x38]
ram:00128292	04141f30	ld blink,[sp,0x4]
ram:00128296	02c6	ld_s r14,[sp,0x8]
ram:00128298	061b8201	stb r6,[r3,0x6]
ram:0012829c	d1158410	ldb r4,[r13,0xd1]
ram:001282a0	0c140d34	ld.ab r13,[sp,0xc]
ram:001282a4	2120c007	j.d [blink]
ram:001282a8	071b0201	_stb r4,[r3,0x7]
