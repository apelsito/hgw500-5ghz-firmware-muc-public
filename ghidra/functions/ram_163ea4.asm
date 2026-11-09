; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00163ea4 entry ram:00163ea4
ram:00163ea4	4a230000	mov r3,0x0
ram:00163ea8	0a22800f20000cfe	mov r2,0x20fe0c
ram:00163eb0	60aa	stb_s r3,[r2,0x0]
ram:00163eb2	61aa	stb_s r3,[r2,0x1]
ram:00163eb4	8a200f0a	mov r0,0x3e8
ram:00163eb8	01a2	st_s r0,[r2,0x4]
ram:00163eba	081a800f00008813	st 0x1388,[r2,0x8]
ram:00163ec2	8a213f04	mov r1,-0x30
ram:00163ec6	23a2	st_s r1,[r2,0xc]
ram:00163ec8	101a800f00000010	st 0x1000,[r2,0x10]
ram:00163ed0	74aa	stb_s r3,[r2,0x14]
ram:00163ed2	e07f	j_s.d [blink]
ram:00163ed4	281ac000	_st r3,[r2,0x28]
