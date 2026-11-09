; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00121b1c entry ram:00121b1c
ram:00121b1c	e1c5	push_s r13
ram:00121b1e	eb75	mov_s r13,blink
ram:00121b20	10110100	ld r1,[r1,0x10]
ram:00121b24	4a0f2ffd	bl.d 0x0011c26c
ram:00121b28	1c100000	_ld r0,[r0,0x1c]
ram:00121b2c	4c200080	cmp r0,0x0
ram:00121b30	28002100	beq.d 0x00121b58
ram:00121b34	ca20e104	_mov.eq r0,0x13
ram:00121b38	4a220000	mov r2,0x0
ram:00121b3c	e2100106	ld.as r1,[r0,0xe2]
ram:00121b40	00208c0f0000dc07	add r12,r0,0x7dc
ram:00121b48	0d093000	breq.d r1,0x0,0x00121b54
ram:00121b4c	001c8410	_sth r2,[r12]
ram:00121b50	40a1	st_s r2,[r1,0x0]
ram:00121b52	52a1	st_s r2,[r1,0x48]
ram:00121b54	4a200000	mov r0,0x0
ram:00121b58	fb75	mov_s blink,r13
ram:00121b5a	e07f	j_s.d [blink]
ram:00121b5c	04140d34	_ld.ab r13,[sp,0x4]
