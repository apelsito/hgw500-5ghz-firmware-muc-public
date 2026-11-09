; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00146d9c entry ram:00146d9c
ram:00146d9c	f81c48b3	st.aw r13,[sp,-0x8]
ram:00146da0	041cc037	st blink,[sp,0x4]
ram:00146da4	2220800f1800b8aa	jl 0x0018aab8
ram:00146dac	cf7520006cfd	mov_s r13,0x20fd6c
ram:00146db2	10a5	st_s r0,[r13,0x40]
ram:00146db4	2220800f1800e0aa	jl 0x0018aae0
ram:00146dbc	441d0210	stb r0,[r13,0x44]
ram:00146dc0	2220800f180054ae	jl 0x0018ae54
ram:00146dc8	0fa5	st_s r0,[r13,0x3c]
ram:00146dca	20d8	mov_s r0,0x20
ram:00146dcc	2220800f1800f4aa	jl 0x0018aaf4
ram:00146dd4	2220800f18006cae	jl 0x0018ae6c
ram:00146ddc	2220800f180060ae	jl 0x0018ae60
ram:00146de4	00168070028001c9	ldb r0,[0x8002c901]
ram:00146dec	80e0	cmp_s r0,0x0
ram:00146dee	01d8	mov_s r0,0x1
ram:00146df0	ca202100	mov.eq r0,0x0
ram:00146df4	2220800f18008caa	jl 0x0018aa8c
ram:00146dfc	04141f30	ld blink,[sp,0x4]
ram:00146e00	2120c007	j.d [blink]
ram:00146e04	08140d34	_ld.ab r13,[sp,0x8]
