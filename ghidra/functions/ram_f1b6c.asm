; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000f1b6c entry ram:000f1b6c
ram:000f1b6c	f41c48b3	st.aw r13,[sp,-0xc]
ram:000f1b70	041cc037	st blink,[sp,0x4]
ram:000f1b74	42c6	st_s r14,[sp,0x8]
ram:000f1b76	0876	mov_s r14,r0
ram:000f1b78	6a208002	lr r0,[status32]
ram:000f1b7c	46208101	bic r1,r0,0x6
ram:000f1b80	4420be81	and.f 0,r0,0x6
ram:000f1b84	e9204200	flag.ne r1
ram:000f1b88	0875	mov_s r13,r0
ram:000f1b8a	002e837300000100	asl r3,0x1,r14
ram:000f1b92	cf7100e00400	mov_s r1,0xe0000004
ram:000f1b98	94110000	ld r0,[r1,0x94]
ram:000f1b9c	6678	bic_s r0,r0,r3
ram:000f1b9e	94190000	st r0,[r1,0x94]
ram:000f1ba2	cf7200e09800	mov_s r2,0xe0000098
ram:000f1ba8	00120008	ld.di r0,[r2]
ram:000f1bac	6f233f00	sync
ram:000f1bb0	29204003	flag r13
ram:000f1bb4	04141f30	ld blink,[sp,0x4]
ram:000f1bb8	08140e30	ld r14,[sp,0x8]
ram:000f1bbc	2120c007	j.d [blink]
ram:000f1bc0	0c140d34	_ld.ab r13,[sp,0xc]
