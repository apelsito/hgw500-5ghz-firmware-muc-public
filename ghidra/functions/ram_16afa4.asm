; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0016afa4 entry ram:0016afa4
ram:0016afa4	4a210000	mov r1,0x0
ram:0016afa8	0a20800fffe584fe	mov r0,0xe5fffe84
ram:0016afb0	b7185800	st.as r1,[r0,0xb7]
ram:0016afb4	b8185800	st.as r1,[r0,0xb8]
ram:0016afb8	e07e	j_s [blink]
