; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0016ffd8 entry ram:0016ffd8
ram:0016ffd8	f41c48b3	st.aw r13,[sp,-0xc]
ram:0016ffdc	041cc037	st blink,[sp,0x4]
ram:0016ffe0	42c6	st_s r14,[sp,0x8]
ram:0016ffe2	0876	mov_s r14,r0
ram:0016ffe4	2875	mov_s r13,r1
ram:0016ffe6	8a200a06	mov r0,0x298
ram:0016ffea	07d9	mov_s r1,0x7
ram:0016ffec	0eb9	asl_s r1,r1,0xe
ram:0016ffee	0eda	mov_s r2,0xe
ram:0016fff0	c973	mov_s r3,r14
ram:0016fff2	2220800f1700d010	jl 0x001710d0
ram:0016fffa	8a200a08	mov r0,0x2a0
ram:0016fffe	0cd9	mov_s r1,0xc
ram:00170000	02da	mov_s r2,0x2
ram:00170002	a973	mov_s r3,r13
ram:00170004	2220800f1700d010	jl 0x001710d0
ram:0017000c	04141f30	ld blink,[sp,0x4]
ram:00170010	001e82731800ccc1	stb r14,[0x18c1cc]
ram:00170018	02c6	ld_s r14,[sp,0x8]
ram:0017001a	001e42731800cdc1	stb r13,[0x18c1cd]
ram:00170022	e07f	j_s.d [blink]
ram:00170024	0c140d34	_ld.ab r13,[sp,0xc]
