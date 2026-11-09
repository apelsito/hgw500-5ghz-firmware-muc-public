; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00109fd4 entry ram:00109fd4
ram:00109fd4	f41c48b3	st.aw r13,[sp,-0xc]
ram:00109fd8	081c8033	st r14,[sp,0x8]
ram:00109fdc	0876	mov_s r14,r0
ram:00109fde	2875	mov_s r13,r1
ram:00109fe0	cf710280bcc8	mov_s r1,0x8002c8bc
ram:00109fe6	0089	ldb_s r0,[r1,0x0]
ram:00109fe8	2d08f100	brne.d r0,0x3,0x0010a014
ram:00109fec	041cc037	_st blink,[sp,0x4]
ram:00109ff0	c970	mov_s r0,r14
ram:00109ff2	a971	mov_s r1,r13
ram:00109ff4	2220800f120094e7	jl 0x0012e794
ram:00109ffc	c970	mov_s r0,r14
ram:00109ffe	a971	mov_s r1,r13
ram:0010a000	2220800f120030d0	jl 0x0012d030
ram:0010a008	c970	mov_s r0,r14
ram:0010a00a	a971	mov_s r1,r13
ram:0010a00c	2220800f120034d1	jl 0x0012d134
ram:0010a014	04141f30	ld blink,[sp,0x4]
ram:0010a018	02c6	ld_s r14,[sp,0x8]
ram:0010a01a	0c140d34	ld.ab r13,[sp,0xc]
ram:0010a01e	e07f	j_s.d [blink]
ram:0010a020	8a20bf0f	_mov r0,-0x2
