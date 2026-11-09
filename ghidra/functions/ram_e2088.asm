; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000e2088 entry ram:000e2088
ram:000e2088	fc1c48b3	st.aw r13,[sp,-0x4]
ram:000e208c	001680700280bcc8	ldb r0,[0x8002c8bc]
ram:000e2094	1508f100	brne.d r0,0x3,0x000e20a8
ram:000e2098	0a25c017	_mov r13,blink
ram:000e209c	2220800f0e0074d3	jl 0x000ed374
ram:000e20a4	0d000000	b 0x000e20b0
ram:000e20a8	2220800f0e00b4d2	jl 0x000ed2b4
ram:000e20b0	fb75	mov_s blink,r13
ram:000e20b2	e07f	j_s.d [blink]
ram:000e20b4	04140d34	_ld.ab r13,[sp,0x4]
