; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001191b4 entry ram:001191b4
ram:001191b4	f01c48b3	st.aw r13,[sp,-0x10]
ram:001191b8	041cc037	st blink,[sp,0x4]
ram:001191bc	42c6	st_s r14,[sp,0x8]
ram:001191be	43c7	st_s r15,[sp,0xc]
ram:001191c0	0877	mov_s r15,r0
ram:001191c2	2876	mov_s r14,r1
ram:001191c4	04e0	add_s r0,r0,0x4
ram:001191c6	2220800f0e00507d	jl 0x000e7d50
ram:001191ce	4587	ld_s r2,[r15,0x14]
ram:001191d0	1d0a3000	breq.d r2,0x0,0x001191ec
ram:001191d4	4a250010	_mov r13,0x0
ram:001191d8	0082	ld_s r0,[r2,0x0]
ram:001191da	2090	ldw_s r1,[r0,0x0]
ram:001191dc	0d0e4010	breq r14,r1,0x001191e8
ram:001191e0	4182	ld_s r2,[r2,0x4]
ram:001191e2	fcea	brne_s r2,0,0x001191d8
ram:001191e4	09000000	b 0x001191ec
ram:001191e8	0a258010	mov r13,r2
ram:001191ec	046f	add_s r0,r15,0x4
ram:001191ee	2220800f0e00a87d	jl 0x000e7da8
ram:001191f6	04141f30	ld blink,[sp,0x4]
ram:001191fa	02c6	ld_s r14,[sp,0x8]
ram:001191fc	a970	mov_s r0,r13
ram:001191fe	03c7	ld_s r15,[sp,0xc]
ram:00119200	2120c007	j.d [blink]
ram:00119204	10140d34	_ld.ab r13,[sp,0x10]
