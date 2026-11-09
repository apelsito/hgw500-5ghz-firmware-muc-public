; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00155e14 entry ram:00155e14
ram:00155e14	fc1c48b3	st.aw r13,[sp,-0x4]
ram:00155e18	00160170180068c2	ld r1,[0x18c268]
ram:00155e20	1579	add2_s r1,r1,r0
ram:00155e22	0081	ld_s r0,[r1,0x0]
ram:00155e24	15083000	breq.d r0,0x0,0x00155e38
ram:00155e28	0a25c017	_mov r13,blink
ram:00155e2c	2220800f0e000020	jl 0x000e2000
ram:00155e34	09000000	b 0x00155e3c
ram:00155e38	4a200000	mov r0,0x0
ram:00155e3c	fb75	mov_s blink,r13
ram:00155e3e	e07f	j_s.d [blink]
ram:00155e40	04140d34	_ld.ab r13,[sp,0x4]
