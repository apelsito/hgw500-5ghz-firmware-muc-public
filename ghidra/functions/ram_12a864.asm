; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0012a864 entry ram:0012a864
ram:0012a864	f41c48b3	st.aw r13,[sp,-0xc]
ram:0012a868	041cc037	st blink,[sp,0x4]
ram:0012a86c	42c6	st_s r14,[sp,0x8]
ram:0012a86e	0875	mov_s r13,r0
ram:0012a870	6a208002	lr r0,[status32]
ram:0012a874	46208100	bic r1,r0,0x2
ram:0012a878	4420be80	and.f 0,r0,0x2
ram:0012a87c	e9204200	flag.ne r1
ram:0012a880	0876	mov_s r14,r0
ram:0012a882	cf701c00d041	mov_s r0,0x1c41d0
ram:0012a888	2220800f0e0060e2	jl 0x000ee260
ram:0012a890	30258d1f0000203b	ld r13,[r13, 0x3b20]
ram:0012a898	00160c780e000000	ld.di r12,[0xe0000]
ram:0012a8a0	00160c7802800000	ld.di r12,[0x80020000]
ram:0012a8a8	00160c7800e00000	ld.di r12,[0xe0000000]
ram:0012a8b0	6f233f00	sync
ram:0012a8b4	0c150210	ld r2,[r13,0xc]
ram:0012a8b8	3022810f00000404	ld r1,[r2, 0x404]
ram:0012a8c0	5321c180	bmsk.f r1,r1,0x3
ram:0012a8c4	1c002200	bne.d 0x0012a8e0
ram:0012a8c8	4a254000	_mov r5,0x1
ram:0012a8cc	cf730380f477	mov_s r3,0x800377f4
ram:0012a8d2	88130000	ld r0,[r3,0x88]
ram:0012a8d6	01e0	add_s r0,r0,0x1
ram:0012a8d8	881b0000	st r0,[r3,0x88]
ram:0012a8dc	0c150210	ld r2,[r13,0xc]
ram:0012a8e0	201a4001	st r5,[r2,0x20]
ram:0012a8e4	0c150410	ld r4,[r13,0xc]
ram:0012a8e8	201c800f72ba7304	st 0xba720473,[r4,0x20]
ram:0012a8f0	29208003	flag r14
ram:0012a8f4	04141f30	ld blink,[sp,0x4]
ram:0012a8f8	08140e30	ld r14,[sp,0x8]
ram:0012a8fc	2120c007	j.d [blink]
ram:0012a900	0c140d34	_ld.ab r13,[sp,0xc]
