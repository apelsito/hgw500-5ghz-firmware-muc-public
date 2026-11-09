; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0010b844 entry ram:0010b844
ram:0010b844	f81c48b3	st.aw r13,[sp,-0x8]
ram:0010b848	0a210000	mov r1,r0
ram:0010b84c	3020800f00007c5b	ld r0,[r0, 0x5b7c]
ram:0010b854	00218d0f0000d457	add r13,r1,0x57d4
ram:0010b85c	41083100	brne.d r0,0x0,0x0010b89c
ram:0010b860	041cc037	_st blink,[sp,0x4]
ram:0010b864	cf7311008c26	mov_s r3,0x11268c
ram:0010b86a	14d8	mov_s r0,0x14
ram:0010b86c	4a220000	mov r2,0x0
ram:0010b870	4a24c000	mov r4,0x3
ram:0010b874	2220800f0f00107c	jl 0x000f7c10
ram:0010b87c	35083100	brne.d r0,0x0,0x0010b8b0
ram:0010b880	ea1d1810	_st.as r0,[r13,0xea]
ram:0010b884	cf701c006408	mov_s r0,0x1c0864
ram:0010b88a	2220800f0e0060e2	jl 0x000ee260
ram:0010b892	04141f30	ld blink,[sp,0x4]
ram:0010b896	e07f	j_s.d [blink]
ram:0010b898	08140d34	_ld.ab r13,[sp,0x8]
ram:0010b89c	2220800f0280a013	jl 0x800213a0
ram:0010b8a4	04141f30	ld blink,[sp,0x4]
ram:0010b8a8	2120c007	j.d [blink]
ram:0010b8ac	08140d34	_ld.ab r13,[sp,0x8]
ram:0010b8b0	04141f30	ld blink,[sp,0x4]
ram:0010b8b4	2120c007	j.d [blink]
ram:0010b8b8	08140d34	_ld.ab r13,[sp,0x8]
