; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0018a860 entry ram:0018a860
ram:0018a860	4a260000	mov r6,0x0
ram:0018a864	0a25800f09e60002	mov r5,0xe6090200
ram:0018a86c	8a240300	mov r4,0xc0
ram:0018a870	00d9	mov_s r1,0x0
ram:0018a872	8fb9	bset_s r1,r1,0xf
ram:0018a874	0a23800f180010c4	mov r3,0x18c410
ram:0018a87c	681d800f00000020	st 0x2000,[r5,0x68]
ram:0018a884	ca1d1801	st.as r4,[r5,0xca]
ram:0018a888	21083000	breq.d r0,0x0,0x0018a8a8
ram:0018a88c	4a224000	_mov r2,0x1
ram:0018a890	8f1d5800	st.as r1,[r5,0x8f]
ram:0018a894	f61d1801	st.as r4,[r5,0xf6]
ram:0018a898	de1d5800	st.as r1,[r5,0xde]
ram:0018a89c	dc1d9801	st.as r6,[r5,0xdc]
ram:0018a8a0	21002000	b.d 0x0018a8c0
ram:0018a8a4	181b8000	_st r2,[r3,0x18]
ram:0018a8a8	8f1d980f38008096	st.as 0x389680,[r5,0x8f]
ram:0018a8b0	f61d1801	st.as r4,[r5,0xf6]
ram:0018a8b4	de1d5800	st.as r1,[r5,0xde]
ram:0018a8b8	dc1d9800	st.as r2,[r5,0xdc]
ram:0018a8bc	181b8001	st r6,[r3,0x18]
ram:0018a8c0	cf711c0074b0	mov_s r1,0x1cb074
ram:0018a8c6	01d8	mov_s r0,0x1
ram:0018a8c8	2020800f1500a4b2	j 0x0015b2a4
