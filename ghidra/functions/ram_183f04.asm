; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00183f04 entry ram:00183f04
ram:00183f04	4a23c000	mov r3,0x3
ram:00183f08	0a22800f09e60002	mov r2,0xe6090200
ram:00183f10	bd1ad880	st.as r3,[r2,-0x43]
ram:00183f14	08d8	mov_s r0,0x8
ram:00183f16	be1a1880	st.as r0,[r2,-0x42]
ram:00183f1a	04d9	mov_s r1,0x4
ram:00183f1c	b21a5880	st.as r1,[r2,-0x4e]
ram:00183f20	e07e	j_s [blink]
