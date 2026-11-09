; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0015692c entry ram:0015692c
ram:0015692c	e1c5	push_s r13
ram:0015692e	cf7303e10050	mov_s r3,0xe1035000
ram:00156934	2083	ld_s r1,[r3,0x0]
ram:00156936	eb75	mov_s r13,blink
ram:00156938	80e0	cmp_s r0,0x0
ram:0015693a	0421820fffffff00	and r2,r1,0xffff00ff
ram:00156942	c421810ffffffe00	and.eq r1,r1,0xffff00fe
ram:0015694a	04f2	beq_s 0x00156950
ram:0015694c	4f220100	bset r1,r2,0x0
ram:00156950	001b4000	st r1,[r3]
ram:00156954	00130008	ld.di r0,[r3]
ram:00156958	6f233f00	sync
ram:0015695c	0a274033	mov blink,r13
ram:00156960	4a260070	nop
ram:00156964	2120c007	j.d [blink]
ram:00156968	04140d34	_ld.ab r13,[sp,0x4]
