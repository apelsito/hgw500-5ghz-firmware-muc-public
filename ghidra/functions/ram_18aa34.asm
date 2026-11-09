; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0018aa34 entry ram:0018aa34
ram:0018aa34	0a23800f00e68006	mov r3,0xe6000680
ram:0018aa3c	28130486	ld.as r4,[r3,-0xd8]
ram:0018aa40	cf72ffe584fe	mov_s r2,0xe5fffe84
ram:0018aa46	60120106	ld.as r1,[r2,0x60]
ram:0018aa4a	4521c103	or r1,r1,0xf
ram:0018aa4e	601a5800	st.as r1,[r2,0x60]
ram:0018aa52	281b1881	st.as r4,[r3,-0xd8]
ram:0018aa56	60120006	ld.as r0,[r2,0x60]
ram:0018aa5a	84203f0c	and r0,r0,-0x10
ram:0018aa5e	601a1800	st.as r0,[r2,0x60]
ram:0018aa62	e07e	j_s [blink]
