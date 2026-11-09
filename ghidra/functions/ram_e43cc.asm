; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000e43cc entry ram:000e43cc
ram:000e43cc	0220800ff0190000	sub r0,r0,0x19f00000
ram:000e43d4	4c210080	cmp r1,0x0
ram:000e43d8	e020ce07	jls [blink]
ram:000e43dc	9f71	mov_s lp_count,r1
ram:000e43de	e078	nop_s
ram:000e43e0	a8208001	lp 0x000e43ec
ram:000e43e4	04120304	ld.ab r3,[r2,0x4]
ram:000e43e8	0418d000	st.ab r3,[r0,0x4]
ram:000e43ec	e07e	j_s [blink]
