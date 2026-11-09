; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0011c72c entry ram:0011c72c
ram:0011c72c	f41c48b3	st.aw r13,[sp,-0xc]
ram:0011c730	041cc037	st blink,[sp,0x4]
ram:0011c734	42c6	st_s r14,[sp,0x8]
ram:0011c736	0876	mov_s r14,r0
ram:0011c738	2875	mov_s r13,r1
ram:0011c73a	6ee0	add_s r0,r0,0x6e
ram:0011c73c	8021c20a	add r1,r1,0xab
ram:0011c740	1dda	mov_s r2,0x1d
ram:0011c742	2220800f390000fe	jl 0x0039fe00
ram:0011c74a	0026801f00008b00	add r0,r14,0x8b
ram:0011c752	56254116	add3 r1,r13,0x19
ram:0011c756	0bda	mov_s r2,0xb
ram:0011c758	2220800f390000fe	jl 0x0039fe00
ram:0011c760	76160111	ldh r1,[r14,0x76]
ram:0011c764	73168210	ldb r2,[r14,0x73]
ram:0011c768	cf701c00a42b	mov_s r0,0x1c2ba4
ram:0011c76e	2220800f0f00cc2c	jl 0x000f2ccc
ram:0011c776	04141f30	ld blink,[sp,0x4]
ram:0011c77a	02c6	ld_s r14,[sp,0x8]
ram:0011c77c	2120c007	j.d [blink]
ram:0011c780	0c140d34	_ld.ab r13,[sp,0xc]
