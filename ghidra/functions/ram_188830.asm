; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00188830 entry ram:00188830
ram:00188830	f41c48b3	st.aw r13,[sp,-0xc]
ram:00188834	041cc037	st blink,[sp,0x4]
ram:00188838	42c6	st_s r14,[sp,0x8]
ram:0018883a	01d8	mov_s r0,0x1
ram:0018883c	00de	mov_s r14,0x0
ram:0018883e	cf7500e68006	mov_s r13,0xe6000680
ram:00188844	1f1d1890	st.as r0,[r13,-0xe1]
ram:00188848	8a201f04	mov r0,0x7d0
ram:0018884c	2220800f0e00984f	jl 0x000e4f98
ram:00188854	1f1d9893	st.as r14,[r13,-0xe1]
ram:00188858	04141f30	ld blink,[sp,0x4]
ram:0018885c	02c6	ld_s r14,[sp,0x8]
ram:0018885e	e07f	j_s.d [blink]
ram:00188860	0c140d34	_ld.ab r13,[sp,0xc]
