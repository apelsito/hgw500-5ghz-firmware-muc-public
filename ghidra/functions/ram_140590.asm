; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00140590 entry ram:00140590
ram:00140590	e81c48b3	st.aw r13,[sp,-0x18]
ram:00140594	041cc037	st blink,[sp,0x4]
ram:00140598	42c6	st_s r14,[sp,0x8]
ram:0014059a	43c7	st_s r15,[sp,0xc]
ram:0014059c	101c0034	st r16,[sp,0x10]
ram:001405a0	141c4034	st r17,[sp,0x14]
ram:001405a4	3a70	mov_s r17,r0
ram:001405a6	1a71	mov_s r16,r1
ram:001405a8	0a278010	mov r15,r2
ram:001405ac	0a25c090	mov.f r13,r3
ram:001405b0	20002100	beq.d 0x001405d0
ram:001405b4	0a260011	_mov r14,r4
ram:001405b8	cf711a00d490	mov_s r1,0x1a90d4
ram:001405be	9921c10f	sub3 r1,r1,0x7f
ram:001405c2	0271	add_s r1,r1,r16
ram:001405c4	3221800f00007c03	ldb r0,[r1, 0x37c]
ram:001405cc	0d000000	b 0x001405d8
ram:001405d0	4f20c021	bset r0,r16,0x7
ram:001405d4	2f200700	extb r0,r0
ram:001405d8	e971	mov_s r1,r15
ram:001405da	2220800f1300c077	jl 0x001377c0
ram:001405e2	00218c2f0000d624	add r12,r17,0x24d6
ram:001405ea	001c0414	sth r16,[r12]
ram:001405ee	00218c2f0000d824	add r12,r17,0x24d8
ram:001405f6	e0ac	stb_s r15,[r12,0x0]
ram:001405f8	00218c2f0000da24	add r12,r17,0x24da
ram:00140600	a0ac	stb_s r13,[r12,0x0]
ram:00140602	00218c2f0000d924	add r12,r17,0x24d9
ram:0014060a	04141f30	ld blink,[sp,0x4]
ram:0014060e	c0ac	stb_s r14,[r12,0x0]
ram:00140610	02c6	ld_s r14,[sp,0x8]
ram:00140612	03c7	ld_s r15,[sp,0xc]
ram:00140614	10141030	ld r16,[sp,0x10]
ram:00140618	14141130	ld r17,[sp,0x14]
ram:0014061c	2120c007	j.d [blink]
ram:00140620	18140d34	_ld.ab r13,[sp,0x18]
