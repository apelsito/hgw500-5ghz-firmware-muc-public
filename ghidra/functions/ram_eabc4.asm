; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000eabc4 entry ram:000eabc4
ram:000eabc4	f81c48b3	st.aw r13,[sp,-0x8]
ram:000eabc8	41c6	st_s r14,[sp,0x4]
ram:000eabca	eb76	mov_s r14,blink
ram:000eabcc	0a220000	mov r2,r0
ram:000eabd0	42204500	sub r5,r0,0x1
ram:000eabd4	110df401	brlo.d r5,0x7,0x000eabe4
ram:000eabd8	0a244000	_mov r4,r1
ram:000eabdc	cf731b0034cf	mov_s r3,0x1bcf34
ram:000eabe2	4af0	b_s 0x000eac74
ram:000eabe4	f0264c710e00f0ab	ld.as r12,[0xeabf0, r5]
ram:000eabec	007c	j_s [r12]
ram:000eac0c	0a23800f1b003ccf	mov r3,0x1bcf3c
ram:000eac14	61002000	b.d 0x000eac74
ram:000eac18	4a224000	_mov r2,0x1
ram:000eac1c	0a23800f1b004ccf	mov r3,0x1bcf4c
ram:000eac24	51002000	b.d 0x000eac74
ram:000eac28	4a228000	_mov r2,0x2
ram:000eac2c	0a23800f1b0068cf	mov r3,0x1bcf68
ram:000eac34	41002000	b.d 0x000eac74
ram:000eac38	4a22c000	_mov r2,0x3
ram:000eac3c	0a23800f1b0088cf	mov r3,0x1bcf88
ram:000eac44	31002000	b.d 0x000eac74
ram:000eac48	4a220001	_mov r2,0x4
ram:000eac4c	0a23800f1b00a8cf	mov r3,0x1bcfa8
ram:000eac54	21002000	b.d 0x000eac74
ram:000eac58	4a224001	_mov r2,0x5
ram:000eac5c	0a23800f1b00c4cf	mov r3,0x1bcfc4
ram:000eac64	11002000	b.d 0x000eac74
ram:000eac68	4a228001	_mov r2,0x6
ram:000eac6c	07da	mov_s r2,0x7
ram:000eac6e	cf731b00e0cf	mov_s r3,0x1bcfe0
ram:000eac74	0a21800f1b00fccf	mov r1,0x1bcffc
ram:000eac7c	4a0eefff	bl.d 0x000eaac4
ram:000eac80	4a200000	_mov r0,0x0
ram:000eac84	cf7500e00400	mov_s r13,0xe0000004
ram:000eac8a	f81d801f00400040	st 0x40004000,[r13,0xf8]
ram:000eac92	cf7300e0fc00	mov_s r3,0xe00000fc
ram:000eac98	00130008	ld.di r0,[r3]
ram:000eac9c	6f233f00	sync
ram:000eaca0	0a24800f00e08401	mov r4,0xe0000184
ram:000eaca8	601d981f01000100	st.as 0x10001,[r13,0x60]
ram:000eacb0	00140008	ld.di r0,[r4]
ram:000eacb4	6f233f00	sync
ram:000eacb8	0a278033	mov blink,r14
ram:000eacbc	04140e30	ld r14,[sp,0x4]
ram:000eacc0	2120c007	j.d [blink]
ram:000eacc4	08140d34	_ld.ab r13,[sp,0x8]
