; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000e83b4 entry ram:000e83b4
ram:000e83b4	f41c48b3	st.aw r13,[sp,-0xc]
ram:000e83b8	041cc037	st blink,[sp,0x4]
ram:000e83bc	42c6	st_s r14,[sp,0x8]
ram:000e83be	2876	mov_s r14,r1
ram:000e83c0	40100d00	ld r13,[r0,0x40]
ram:000e83c4	088d	ldb_s r0,[r13,0x8]
ram:000e83c6	2220800f0f00e81a	jl 0x000f1ae8
ram:000e83ce	84e8	brne_s r0,0,0x000e83d4
ram:000e83d0	f50e1190	brne r14,0x0,0x000e83c4
ram:000e83d4	04141f30	ld blink,[sp,0x4]
ram:000e83d8	02c6	ld_s r14,[sp,0x8]
ram:000e83da	e07f	j_s.d [blink]
ram:000e83dc	0c140d34	_ld.ab r13,[sp,0xc]
