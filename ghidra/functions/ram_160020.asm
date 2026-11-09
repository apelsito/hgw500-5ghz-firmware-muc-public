; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00160020 entry ram:00160020
ram:00160020	fc1c48b3	st.aw r13,[sp,-0x4]
ram:00160024	9520c10f	add2 r0,r0,0x7f
ram:00160028	2d093100	brne.d r1,0x0,0x00160054
ram:0016002c	0a25c017	_mov r13,blink
ram:00160030	190a7201	brlt.d r2,0x5,0x00160048
ram:00160034	0c108380	_ldb r3,[r0,-0xf4]
ram:00160038	1d0b1100	brne r3,0x0,0x00160054
ram:0016003c	8220030e	sub r0,r0,0xf8
ram:00160040	11002000	b.d 0x00160050
ram:00160044	4a210000	_mov r1,0x0
ram:00160048	06eb	breq_s r3,0,0x00160054
ram:0016004a	8220030e	sub r0,r0,0xf8
ram:0016004e	01d9	mov_s r1,0x1
ram:00160050	da0ecfff	bl 0x0015ff28
ram:00160054	0a274033	mov blink,r13
ram:00160058	4a260070	nop
ram:0016005c	2120c007	j.d [blink]
ram:00160060	04140d34	_ld.ab r13,[sp,0x4]
