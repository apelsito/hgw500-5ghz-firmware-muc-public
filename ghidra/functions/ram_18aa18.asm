; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0018aa18 entry ram:0018aa18
ram:0018aa18	0a22800fffe584fe	mov r2,0xe5fffe84
ram:0018aa20	5f120106	ld.as r1,[r2,0x5f]
ram:0018aa24	80e0	cmp_s r0,0x0
ram:0018aa26	cf212200	bset.ne r1,r1,0x0
ram:0018aa2a	d0212100	bclr.eq r1,r1,0x0
ram:0018aa2e	5f1a5800	st.as r1,[r2,0x5f]
ram:0018aa32	e07e	j_s [blink]
