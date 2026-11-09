; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000f992c entry ram:000f992c
ram:000f992c	0a210000	mov r1,r0
ram:000f9930	fc100000	ld r0,[r0,0xfc]
ram:000f9934	4a240000	mov r4,0x0
ram:000f9938	4c200080	cmp r0,0x0
ram:000f993c	e120c107	jeq.d [blink]
ram:000f9940	ca200101	_mov.eq r0,r4
ram:000f9944	6d80	ld_s r3,[r0,0x34]
ram:000f9946	80e3	cmp_s r3,0x0
ram:000f9948	e120c207	jne.d [blink]
ram:000f994c	fc19c000	_st r3,[r1,0xfc]
ram:000f9950	5521c20f	add2 r2,r1,0x3f
ram:000f9954	2120c007	j.d [blink]
ram:000f9958	40199800	_st.as r2,[r1,0x40]
