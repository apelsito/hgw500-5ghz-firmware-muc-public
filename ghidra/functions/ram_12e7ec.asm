; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0012e7ec entry ram:0012e7ec
ram:0012e7ec	f01c48b3	st.aw r13,[sp,-0x10]
ram:0012e7f0	0c100900	ld r9,[r0,0xc]
ram:0012e7f4	43c7	st_s r15,[sp,0xc]
ram:0012e7f6	00110810	ld r8,[r9]
ram:0012e7fa	42c6	st_s r14,[sp,0x8]
ram:0012e7fc	14110710	ld r7,[r9,0x14]
ram:0012e800	1c100f10	ld r15,[r8,0x1c]
ram:0012e804	3c170600	ld r6,[r7,0x3c]
ram:0012e808	041cc037	st blink,[sp,0x4]
ram:0012e80c	3026850f0000280d	ld r5,[r6, 0xd28]
ram:0012e814	3427821f0000a45a	ldh r2,[r15, 0x5aa4]
ram:0012e81c	40290d04	asl r13,r1,0x10
ram:0012e820	00150e00	ld r14,[r5]
ram:0012e824	04258d1fff010000	and r13,r13,0x1ff0000
ram:0012e82c	190a7200	brlt.d r2,0x1,0x0012e844
ram:0012e830	4f254d16	_bset r13,r13,0x19
ram:0012e834	0a20800f1c00e842	mov r0,0x1c42e8
ram:0012e83c	2220800f0e0060e2	jl 0x000ee260
ram:0012e844	b2a6	st_s r13,[r14,0x48]
ram:0012e846	3027831f0000203b	ld r3,[r15, 0x3b20]
ram:0012e84e	04141f30	ld blink,[sp,0x4]
ram:0012e852	4f130406	ld.as r4,[r3,0x4f]
ram:0012e856	02c6	ld_s r14,[sp,0x8]
ram:0012e858	481c4003	st r13,[r4,0x48]
ram:0012e85c	03c7	ld_s r15,[sp,0xc]
ram:0012e85e	e07f	j_s.d [blink]
ram:0012e860	10140d34	_ld.ab r13,[sp,0x10]
