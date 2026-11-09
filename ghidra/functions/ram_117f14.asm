; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00117f14 entry ram:00117f14
ram:00117f14	f81c48b3	st.aw r13,[sp,-0x8]
ram:00117f18	41c6	st_s r14,[sp,0x4]
ram:00117f1a	3490	ldw_s r1,[r0,0x28]
ram:00117f1c	0a26c017	mov r14,blink
ram:00117f20	15093102	brne.d r1,0x8,0x00117f34
ram:00117f24	0a250010	_mov r13,r0
ram:00117f28	24150310	ld r3,[r13,0x24]
ram:00117f2c	19002000	b.d 0x00117f44
ram:00117f30	40230004	_add r0,r3,0x10
ram:00117f34	2d09810f000086dd	brne r1,0xdd86,0x00117f60
ram:00117f3c	24150210	ld r2,[r13,0x24]
ram:00117f40	40220006	add r0,r2,0x18
ram:00117f44	120ecfff	bl 0x00117d54
ram:00117f48	0a210080	mov.f r1,r0
ram:00117f4c	14000100	beq 0x00117f60
ram:00117f50	066d	add_s r0,r13,0x6
ram:00117f52	14e1	add_s r1,r1,0x14
ram:00117f54	4a228001	mov r2,0x6
ram:00117f58	2220800f390000fe	jl 0x0039fe00
ram:00117f60	fb76	mov_s blink,r14
ram:00117f62	01c6	ld_s r14,[sp,0x4]
ram:00117f64	2120c007	j.d [blink]
ram:00117f68	08140d34	_ld.ab r13,[sp,0x8]
