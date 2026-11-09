; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0016afbc entry ram:0016afbc
ram:0016afbc	4a224000	mov r2,0x1
ram:0016afc0	4a210000	mov r1,0x0
ram:0016afc4	cf70ffe584fe	mov_s r0,0xe5fffe84
ram:0016afca	b7189800	st.as r2,[r0,0xb7]
ram:0016afce	b8185800	st.as r1,[r0,0xb8]
ram:0016afd2	e07e	j_s [blink]
