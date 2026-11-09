; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00136684 entry ram:00136684
ram:00136684	f41c48b3	st.aw r13,[sp,-0xc]
ram:00136688	081c8033	st r14,[sp,0x8]
ram:0013668c	2876	mov_s r14,r1
ram:0013668e	2780	ld_s r1,[r0,0x1c]
ram:00136690	041cc037	st blink,[sp,0x4]
ram:00136694	24e0	add_s r0,r0,0x24
ram:00136696	30218d0f0000203b	ld r13,[r1, 0x3b20]
ram:0013669e	c971	mov_s r1,r14
ram:001366a0	2220800f1100bc43	jl 0x001143bc
ram:001366a8	a970	mov_s r0,r13
ram:001366aa	c971	mov_s r1,r14
ram:001366ac	2220800f1000f850	jl 0x001050f8
ram:001366b4	04141f30	ld blink,[sp,0x4]
ram:001366b8	02c6	ld_s r14,[sp,0x8]
ram:001366ba	0c140d34	ld.ab r13,[sp,0xc]
ram:001366be	e07f	j_s.d [blink]
ram:001366c0	4a200000	_mov r0,0x0
