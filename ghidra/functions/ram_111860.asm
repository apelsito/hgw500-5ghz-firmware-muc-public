; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00111860 entry ram:00111860
ram:00111860	0020800f0000c43b	add r0,r0,0x3bc4
ram:00111868	8c211482	cmp r1,0x508
ram:0011186c	0af4	bne_s 0x00111880
ram:0011186e	4a274000	mov r7,0x1
ram:00111872	6018c481	sth r7,[r0,-0xa0]
ram:00111876	4a26c000	mov r6,0x3
ram:0011187a	e07f	j_s.d [blink]
ram:0011187c	62188481	_sth r6,[r0,-0x9e]
ram:00111880	15091108	brne r1,0x20,0x00111894
ram:00111884	4a258000	mov r5,0x2
ram:00111888	60184481	sth r5,[r0,-0xa0]
ram:0011188c	00da	mov_s r2,0x0
ram:0011188e	e07f	j_s.d [blink]
ram:00111890	62188480	_sth r2,[r0,-0x9e]
ram:00111894	15095108	brne r1,0x21,0x001118a8
ram:00111898	02db	mov_s r3,0x2
ram:0011189a	6018c480	sth r3,[r0,-0xa0]
ram:0011189e	4a244000	mov r4,0x1
ram:001118a2	e07f	j_s.d [blink]
ram:001118a4	62180481	_sth r4,[r0,-0x9e]
ram:001118a8	6018848f0000ffff	sth 0xffff,[r0,-0xa0]
ram:001118b0	6218848f0000ffff	sth 0xffff,[r0,-0x9e]
ram:001118b8	e07e	j_s [blink]
