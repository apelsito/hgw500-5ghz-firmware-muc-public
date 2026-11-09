; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0018af8c entry ram:0018af8c
ram:0018af8c	0a22800f00e68006	mov r2,0xe6000680
ram:0018af94	19093000	breq.d r1,0x0,0x0018afac
ram:0018af98	4a230000	_mov r3,0x0
ram:0018af9c	c8b8	bmsk_s r0,r0,0x8
ram:0018af9e	0d1a1880	st.as r0,[r2,-0xf3]
ram:0018afa2	01d9	mov_s r1,0x1
ram:0018afa4	0c1a5880	st.as r1,[r2,-0xf4]
ram:0018afa8	2020c007	j [blink]
ram:0018afac	0c1ad880	st.as r3,[r2,-0xf4]
ram:0018afb0	0d1ad880	st.as r3,[r2,-0xf3]
ram:0018afb4	e07e	j_s [blink]
