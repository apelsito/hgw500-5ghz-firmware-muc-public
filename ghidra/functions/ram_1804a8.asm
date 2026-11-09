; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001804a8 entry ram:001804a8
ram:001804a8	0a21800f21009042	mov r1,0x214290
ram:001804b0	6d99	ldw_s.x r3,[r1,0x1a]
ram:001804b2	6eb1	stw_s r3,[r1,0x1c]
ram:001804b4	3ce1	add_s r1,r1,0x3c
ram:001804b6	6d99	ldw_s.x r3,[r1,0x1a]
ram:001804b8	6eb1	stw_s r3,[r1,0x1c]
ram:001804ba	3ce1	add_s r1,r1,0x3c
ram:001804bc	6d99	ldw_s.x r3,[r1,0x1a]
ram:001804be	6eb1	stw_s r3,[r1,0x1c]
ram:001804c0	3ce1	add_s r1,r1,0x3c
ram:001804c2	6d99	ldw_s.x r3,[r1,0x1a]
ram:001804c4	6eb1	stw_s r3,[r1,0x1c]
ram:001804c6	3ce1	add_s r1,r1,0x3c
ram:001804c8	01da	mov_s r2,0x1
ram:001804ca	001e80701800e4c3	st r2,[0x18c3e4]
ram:001804d2	e07e	j_s [blink]
