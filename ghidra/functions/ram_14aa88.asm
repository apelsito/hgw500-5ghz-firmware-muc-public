; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0014aa88 entry ram:0014aa88
ram:0014aa88	f81c48b3	st.aw r13,[sp,-0x8]
ram:0014aa8c	041c8033	st r14,[sp,0x4]
ram:0014aa90	35093100	brne.d r1,0x0,0x0014aac4
ram:0014aa94	0a26c017	_mov r14,blink
ram:0014aa98	3220820f00002e40	ldb r2,[r0, 0x402e]
ram:0014aaa0	00208d0f0000803f	add r13,r0,0x3f80
ram:0014aaa8	490a1000	breq r2,0x0,0x0014aaf0
ram:0014aaac	f60ecfff	bl 0x0014a9a0
ram:0014aab0	4a210000	mov r1,0x0
ram:0014aab4	ae1d4210	stb r1,[r13,0xae]
ram:0014aab8	fb76	mov_s blink,r14
ram:0014aaba	01c6	ld_s r14,[sp,0x4]
ram:0014aabc	2120c007	j.d [blink]
ram:0014aac0	08140d34	_ld.ab r13,[sp,0x8]
ram:0014aac4	3220840f00002e40	ldb r4,[r0, 0x402e]
ram:0014aacc	00208d0f0000803f	add r13,r0,0x3f80
ram:0014aad4	1d0c1100	brne r4,0x0,0x0014aaf0
ram:0014aad8	be0dcfff	bl 0x0014a894
ram:0014aadc	4a234000	mov r3,0x1
ram:0014aae0	ae1dc210	stb r3,[r13,0xae]
ram:0014aae4	fb76	mov_s blink,r14
ram:0014aae6	01c6	ld_s r14,[sp,0x4]
ram:0014aae8	2120c007	j.d [blink]
ram:0014aaec	08140d34	_ld.ab r13,[sp,0x8]
ram:0014aaf0	fb76	mov_s blink,r14
ram:0014aaf2	01c6	ld_s r14,[sp,0x4]
ram:0014aaf4	2120c007	j.d [blink]
ram:0014aaf8	08140d34	_ld.ab r13,[sp,0x8]
