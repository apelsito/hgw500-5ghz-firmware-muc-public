; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00170028 entry ram:00170028
ram:00170028	f41c48b3	st.aw r13,[sp,-0xc]
ram:0017002c	041cc037	st blink,[sp,0x4]
ram:00170030	42c6	st_s r14,[sp,0x8]
ram:00170032	0876	mov_s r14,r0
ram:00170034	2875	mov_s r13,r1
ram:00170036	8a200a06	mov r0,0x298
ram:0017003a	07d9	mov_s r1,0x7
ram:0017003c	0eb9	asl_s r1,r1,0xe
ram:0017003e	0eda	mov_s r2,0xe
ram:00170040	2220800f1700e011	jl 0x001711e0
ram:00170048	0cd9	mov_s r1,0xc
ram:0017004a	00ae	stb_s r0,[r14,0x0]
ram:0017004c	8a200a08	mov r0,0x2a0
ram:00170050	02da	mov_s r2,0x2
ram:00170052	2220800f1700e011	jl 0x001711e0
ram:0017005a	04141f30	ld blink,[sp,0x4]
ram:0017005e	02c6	ld_s r14,[sp,0x8]
ram:00170060	00ad	stb_s r0,[r13,0x0]
ram:00170062	e07f	j_s.d [blink]
ram:00170064	0c140d34	_ld.ab r13,[sp,0xc]
