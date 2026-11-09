; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00134a48 entry ram:00134a48
ram:00134a48	0a23800f180080c1	mov r3,0x18c180
ram:00134a50	1d08100a	breq r0,0x28,0x00134a6c
ram:00134a54	d0e0	cmp_s r0,0x50
ram:00134a56	06f2	beq_s 0x00134a60
ram:00134a58	04d9	mov_s r1,0x4
ram:00134a5a	e07f	j_s.d [blink]
ram:00134a5c	041b4000	_st r1,[r3,0x4]
ram:00134a60	041b800f00800c00	st 0x8000000c,[r3,0x4]
ram:00134a68	2020c007	j [blink]
ram:00134a6c	0cda	mov_s r2,0xc
ram:00134a6e	e07f	j_s.d [blink]
ram:00134a70	041b8000	_st r2,[r3,0x4]
