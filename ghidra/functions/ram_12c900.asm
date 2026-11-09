; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0012c900 entry ram:0012c900
ram:0012c900	e81c48b3	st.aw r13,[sp,-0x18]
ram:0012c904	041cc037	st blink,[sp,0x4]
ram:0012c908	42c6	st_s r14,[sp,0x8]
ram:0012c90a	43c7	st_s r15,[sp,0xc]
ram:0012c90c	101c0034	st r16,[sp,0x10]
ram:0012c910	141c4034	st r17,[sp,0x14]
ram:0012c914	a1c1	sub_s sp,sp,0x4
ram:0012c916	001605701a005866	ld r5,[0x1a6658]
ram:0012c91e	0877	mov_s r15,r0
ram:0012c920	4a200020	mov r16,0x0
ram:0012c924	00208d0f0000fc07	add r13,r0,0x7fc
ram:0012c92c	4a260011	mov r14,0x4
ram:0012c930	0a210024	mov r17,r16
ram:0012c934	001c4031	st r5,[sp]
ram:0012c938	32244134	ldb r1,[sp, r17]
ram:0012c93c	16254210	add3 r2,r13,r1
ram:0012c940	24120486	ld.as r4,[r2,-0xdc]
ram:0012c944	0d0c1000	breq r4,0x0,0x0012c950
ram:0012c948	15002000	b.d 0x0012c95c
ram:0012c94c	0f205024	_bset r16,r16,r17
ram:0012c950	e970	mov_s r0,r15
ram:0012c952	2220800f1500805e	jl 0x00155e80
ram:0012c95a	f8e8	brne_s r0,0,0x0012c948
ram:0012c95c	42264e10	sub r14,r14,0x1
ram:0012c960	d90e7590	brhs.d r14,0x1,0x0012c938
ram:0012c964	40215120	_add r17,r17,0x1
ram:0012c968	21081120	brne r16,0x0,0x0012c988
ram:0012c96c	3427831f00000c04	ldh r3,[r15, 0x40c]
ram:0012c974	51234080	btst r3,0x1
ram:0012c978	d123e180	btst.eq r3,0x3
ram:0012c97c	ca212100	mov.eq r1,0x0
ram:0012c980	ca20c103	mov.eq r0,r15
ram:0012c984	ac0ec1ff	bleq 0x0012c830
ram:0012c988	0a200004	mov r0,r16
ram:0012c98c	40241c31	add sp,sp,0x4
ram:0012c990	04141f30	ld blink,[sp,0x4]
ram:0012c994	02c6	ld_s r14,[sp,0x8]
ram:0012c996	03c7	ld_s r15,[sp,0xc]
ram:0012c998	10141030	ld r16,[sp,0x10]
ram:0012c99c	14141130	ld r17,[sp,0x14]
ram:0012c9a0	2120c007	j.d [blink]
ram:0012c9a4	18140d34	_ld.ab r13,[sp,0x18]
