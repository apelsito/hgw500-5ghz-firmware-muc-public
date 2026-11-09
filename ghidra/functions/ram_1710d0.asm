; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001710d0 entry ram:001710d0
ram:001710d0	e81c48b3	st.aw r13,[sp,-0x18]
ram:001710d4	041cc037	st blink,[sp,0x4]
ram:001710d8	42c6	st_s r14,[sp,0x8]
ram:001710da	43c7	st_s r15,[sp,0xc]
ram:001710dc	101c0034	st r16,[sp,0x10]
ram:001710e0	141c4034	st r17,[sp,0x14]
ram:001710e4	3a70	mov_s r17,r0
ram:001710e6	1a71	mov_s r16,r1
ram:001710e8	4877	mov_s r15,r2
ram:001710ea	6875	mov_s r13,r3
ram:001710ec	2220800f18008c3c	jl 0x00183c8c
ram:001710f4	0a71	mov_s r1,r16
ram:001710f6	0876	mov_s r14,r0
ram:001710f8	2a70	mov_s r0,r17
ram:001710fa	e972	mov_s r2,r15
ram:001710fc	060fefff	bl.d 0x00171000
ram:00171100	0a234003	_mov r3,r13
ram:00171104	0a208003	mov r0,r14
ram:00171108	2220800f1800d03c	jl 0x00183cd0
ram:00171110	04141f30	ld blink,[sp,0x4]
ram:00171114	02c6	ld_s r14,[sp,0x8]
ram:00171116	03c7	ld_s r15,[sp,0xc]
ram:00171118	10141030	ld r16,[sp,0x10]
ram:0017111c	14141130	ld r17,[sp,0x14]
ram:00171120	2120c007	j.d [blink]
ram:00171124	18140d34	_ld.ab r13,[sp,0x18]
