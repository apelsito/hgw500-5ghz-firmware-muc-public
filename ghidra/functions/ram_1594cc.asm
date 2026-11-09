; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001594cc entry ram:001594cc
ram:001594cc	e1c5	push_s r13
ram:001594ce	00110500	ld r5,[r1]
ram:001594d2	d871	mov_s r6,r1
ram:001594d4	38150300	ld r3,[r5,0x38]
ram:001594d8	0a25c017	mov r13,blink
ram:001594dc	3223810f00007c06	ldb r1,[r3, 0x67c]
ram:001594e4	3226830f00007c06	ldb r3,[r6, 0x67c]
ram:001594ec	3a08afff	bl.d 0x00158524
ram:001594f0	4a244000	_mov r4,0x1
ram:001594f4	0a24800f0380f477	mov r4,0x800377f4
ram:001594fc	5c140106	ld.as r1,[r4,0x5c]
ram:00159500	fb75	mov_s blink,r13
ram:00159502	01e1	add_s r1,r1,0x1
ram:00159504	c1c5	pop_s r13
ram:00159506	e07f	j_s.d [blink]
ram:00159508	5c1c5800	_st.as r1,[r4,0x5c]
