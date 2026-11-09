; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0010c3f0 entry ram:0010c3f0
ram:0010c3f0	e1c5	push_s r13
ram:0010c3f2	00100b00	ld r11,[r0]
ram:0010c3f6	9870	mov_s r4,r0
ram:0010c3f8	1c130a10	ld r10,[r11,0x1c]
ram:0010c3fc	0a25c017	mov r13,blink
ram:0010c400	3422891f00005840	ldh r9,[r10, 0x4058]
ram:0010c408	0022861f0000b847	add r6,r10,0x47b8
ram:0010c410	41093010	breq.d r9,0x0,0x0010c450
ram:0010c414	4a200000	_mov r0,0x0
ram:0010c418	00228c1f00006846	add r12,r10,0x4668
ram:0010c420	20a4	st_s r1,[r12,0x0]
ram:0010c422	00228c1f00006c46	add r12,r10,0x466c
ram:0010c42a	4a274000	mov r7,0x1
ram:0010c42e	40a4	st_s r2,[r12,0x0]
ram:0010c430	5c1edc80	sth.as r3,[r6,-0xa4]
ram:0010c434	5d1edc81	sth.as r7,[r6,-0xa3]
ram:0010c438	0a20801f0380f477	mov r8,0x800377f4
ram:0010c440	c4100510	ld r5,[r8,0xc4]
ram:0010c444	40254500	add r5,r5,0x1
ram:0010c448	15002000	b.d 0x0010c45c
ram:0010c44c	c4184011	_st r5,[r8,0xc4]
ram:0010c450	5d1e1c80	sth.as r0,[r6,-0xa3]
ram:0010c454	060aefff	bl.d 0x0010be58
ram:0010c458	0a200001	_mov r0,r4
ram:0010c45c	0a274033	mov blink,r13
ram:0010c460	4a260070	nop
ram:0010c464	2120c007	j.d [blink]
ram:0010c468	04140d34	_ld.ab r13,[sp,0x4]
