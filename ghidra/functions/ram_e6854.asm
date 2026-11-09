; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000e6854 entry ram:000e6854
ram:000e6854	fc1c48b3	st.aw r13,[sp,-0x4]
ram:000e6858	0a25c017	mov r13,blink
ram:000e685c	29087206	brlt.d r0,0x19,0x000e6884
ram:000e6860	0a220000	_mov r2,r0
ram:000e6864	cf730e00c8ac	mov_s r3,0xeacc8
ram:000e686a	cf700000983a	mov_s r0,0x3a98
ram:000e6870	4a218001	mov r1,0x6
ram:000e6874	4a248000	mov r4,0x2
ram:000e6878	2220800f0f00107c	jl 0x000f7c10
ram:000e6880	1d000000	b 0x000e689c
ram:000e6884	412ac300	lsr r3,r2,0x3
ram:000e6888	c773180034c0	add_s r3,r3,0x18c034
ram:000e688e	00138400	ldb r4,[r3]
ram:000e6892	c2ba	bmsk_s r2,r2,0x2
ram:000e6894	0f248400	bset r4,r4,r2
ram:000e6898	001b0201	stb r4,[r3]
ram:000e689c	fb75	mov_s blink,r13
ram:000e689e	e07f	j_s.d [blink]
ram:000e68a0	04140d34	_ld.ab r13,[sp,0x4]
