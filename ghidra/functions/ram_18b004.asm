; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0018b004 entry ram:0018b004
ram:0018b004	f41c48b3	st.aw r13,[sp,-0xc]
ram:0018b008	041cc037	st blink,[sp,0x4]
ram:0018b00c	42c6	st_s r14,[sp,0x8]
ram:0018b00e	2876	mov_s r14,r1
ram:0018b010	3020800f0000203b	ld r0,[r0, 0x3b20]
ram:0018b018	0bd9	mov_s r1,0xb
ram:0018b01a	00da	mov_s r2,0x0
ram:0018b01c	4873	mov_s r3,r2
ram:0018b01e	2220800f0f009c93	jl 0x000f939c
ram:0018b026	80e6	cmp_s r14,0x0
ram:0018b028	002e0d7000000100	asl r13,0x1,r0
ram:0018b030	24000100	beq 0x0018b054
ram:0018b034	6a208002	lr r0,[status32]
ram:0018b038	46208101	bic r1,r0,0x6
ram:0018b03c	4420be81	and.f 0,r0,0x6
ram:0018b040	e9204200	flag.ne r1
ram:0018b044	aa221003	lr r2,[0x40c]
ram:0018b048	05258d10	or r13,r13,r2
ram:0018b04c	ab251013	sr r13,[0x40c]
ram:0018b050	21000000	b 0x0018b070
ram:0018b054	6a208002	lr r0,[status32]
ram:0018b058	46208101	bic r1,r0,0x6
ram:0018b05c	4420be81	and.f 0,r0,0x6
ram:0018b060	e9204200	flag.ne r1
ram:0018b064	aa211003	lr r1,[0x40c]
ram:0018b068	06214103	bic r1,r1,r13
ram:0018b06c	ab211003	sr r1,[0x40c]
ram:0018b070	29200000	flag r0
ram:0018b074	04141f30	ld blink,[sp,0x4]
ram:0018b078	08140e30	ld r14,[sp,0x8]
ram:0018b07c	2120c007	j.d [blink]
ram:0018b080	0c140d34	_ld.ab r13,[sp,0xc]
