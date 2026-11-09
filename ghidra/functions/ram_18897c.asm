; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0018897c entry ram:0018897c
ram:0018897c	4c200080	cmp r0,0x0
ram:00188980	cc212280	cmp.ne r1,0x0
ram:00188984	3c000100	beq 0x001889c0
ram:00188988	8a244173	mov lp_count,0x4d
ram:0018898c	4a260000	mov r6,0x0
ram:00188990	a8200006	lp 0x001889c0
ram:00188994	01118504	ldb.ab r5,[r1,0x1]
ram:00188998	01108404	ldb.ab r4,[r0,0x1]
ram:0018899c	5325c500	bmsk r5,r5,0x3
ram:001889a0	402d0501	asl r5,r5,0x4
ram:001889a4	5324c400	bmsk r4,r4,0x3
ram:001889a8	402e8800	asl r8,r6,0x2
ram:001889ac	05244401	or r4,r4,r5
ram:001889b0	02208c1ffa1950ff	sub r12,r8,0x19faff50
ram:001889b8	001c0011	st r4,[r12]
ram:001889bc	40264600	add r6,r6,0x1
ram:001889c0	0a27800f05e60004	mov r7,0xe6050400
ram:001889c8	7e1f9880	st.as r2,[r7,-0x82]
ram:001889cc	831fd880	st.as r3,[r7,-0x7d]
ram:001889d0	e07e	j_s [blink]
