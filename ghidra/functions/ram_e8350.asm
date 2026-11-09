; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000e8350 entry ram:000e8350
ram:000e8350	0a23800f04e5a43c	mov r3,0xe5043ca4
ram:000e8358	d7130106	ld.as r1,[r3,0xd7]
ram:000e835c	4090	ldw_s r2,[r0,0x0]
ram:000e835e	0aea	breq_s r2,0,0x000e8370
ram:000e8360	81e2	cmp_s r2,0x1
ram:000e8362	e07d	jne_s [blink]
ram:000e8364	0521810f0000003e	or r1,r1,0x3e00
ram:000e836c	09000000	b 0x000e8374
ram:000e8370	8521030e	or r1,r1,0xf8
ram:000e8374	d71b5800	st.as r1,[r3,0xd7]
ram:000e8378	e07e	j_s [blink]
