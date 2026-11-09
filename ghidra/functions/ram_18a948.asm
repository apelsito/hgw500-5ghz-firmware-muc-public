; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0018a948 entry ram:0018a948
ram:0018a948	0a24800f00e604fe	mov r4,0xe600fe04
ram:0018a950	95140006	ld.as r0,[r4,0x95]
ram:0018a954	cf71ffe584fe	mov_s r1,0xe5fffe84
ram:0018a95a	8a230f00	mov r3,0x3c0
ram:0018a95e	8a22040b	mov r2,0x12c
ram:0018a962	87b8	bset_s r0,r0,0x7
ram:0018a964	951c1800	st.as r0,[r4,0x95]
ram:0018a968	df19d800	st.as r3,[r1,0xdf]
ram:0018a96c	dd199800	st.as r2,[r1,0xdd]
ram:0018a970	e07e	j_s [blink]
