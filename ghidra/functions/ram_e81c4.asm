; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000e81c4 entry ram:000e81c4
ram:000e81c4	fc1c48b3	st.aw r13,[sp,-0x4]
ram:000e81c8	0a25c017	mov r13,blink
ram:000e81cc	2908f204	brlt.d r0,0x13,0x000e81f4
ram:000e81d0	0a220000	_mov r2,r0
ram:000e81d4	cf701b003cc8	mov_s r0,0x1bc83c
ram:000e81da	cf711a00cc53	mov_s r1,0x1a53cc
ram:000e81e0	4a238004	mov r3,0x12
ram:000e81e4	2220800f0e0060e2	jl 0x000ee260
ram:000e81ec	15002000	b.d 0x000e8200
ram:000e81f0	4a200000	_mov r0,0x0
ram:000e81f4	cf731c00d8b2	mov_s r3,0x1cb2d8
ram:000e81fa	557b	add2_s r3,r3,r2
ram:000e81fc	00130000	ld r0,[r3]
ram:000e8200	fb75	mov_s blink,r13
ram:000e8202	e07f	j_s.d [blink]
ram:000e8204	04140d34	_ld.ab r13,[sp,0x4]
