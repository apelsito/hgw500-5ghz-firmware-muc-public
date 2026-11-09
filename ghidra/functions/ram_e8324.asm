; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000e8324 entry ram:000e8324
ram:000e8324	0a23800f04e5a43c	mov r3,0xe5043ca4
ram:000e832c	d7130106	ld.as r1,[r3,0xd7]
ram:000e8330	4090	ldw_s r2,[r0,0x0]
ram:000e8332	0aea	breq_s r2,0,0x000e8344
ram:000e8334	81e2	cmp_s r2,0x1
ram:000e8336	e07d	jne_s [blink]
ram:000e8338	0421810fffffffc1	and r1,r1,0xffffc1ff
ram:000e8340	09000000	b 0x000e8348
ram:000e8344	8421fc01	and r1,r1,-0xf9
ram:000e8348	d71b5800	st.as r1,[r3,0xd7]
ram:000e834c	e07e	j_s [blink]
