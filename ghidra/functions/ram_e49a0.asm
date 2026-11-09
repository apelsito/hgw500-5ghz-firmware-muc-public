; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000e49a0 entry ram:000e49a0
ram:000e49a0	4a230000	mov r3,0x0
ram:000e49a4	0a22800f05e60004	mov r2,0xe6050400
ram:000e49ac	15083000	breq.d r0,0x0,0x000e49c0
ram:000e49b0	4a214000	_mov r1,0x1
ram:000e49b4	b41ac000	st r3,[r2,0xb4]
ram:000e49b8	b01a4000	st r1,[r2,0xb0]
ram:000e49bc	2020c007	j [blink]
ram:000e49c0	b41a4000	st r1,[r2,0xb4]
ram:000e49c4	b01ac000	st r3,[r2,0xb0]
ram:000e49c8	e07e	j_s [blink]
