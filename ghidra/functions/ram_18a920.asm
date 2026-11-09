; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0018a920 entry ram:0018a920
ram:0018a920	0a23800f00e604fe	mov r3,0xe600fe04
ram:0018a928	95130006	ld.as r0,[r3,0x95]
ram:0018a92c	cf72ffe584fe	mov_s r2,0xe5fffe84
ram:0018a932	50d9	mov_s r1,0x50
ram:0018a934	a7b8	bclr_s r0,r0,0x7
ram:0018a936	951b1800	st.as r0,[r3,0x95]
ram:0018a93a	df1a980f0000000a	st.as 0xa00,[r2,0xdf]
ram:0018a942	dd1a5800	st.as r1,[r2,0xdd]
ram:0018a946	e07e	j_s [blink]
