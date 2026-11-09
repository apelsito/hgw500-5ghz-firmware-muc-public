; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0018aab8 entry ram:0018aab8
ram:0018aab8	0a22800f09e60002	mov r2,0xe6090200
ram:0018aac0	20120300	ld r3,[r2,0x20]
ram:0018aac4	0d0b1e00	bbit0 r3,0x0,0x0018aad0
ram:0018aac8	84120100	ld r1,[r2,0x84]
ram:0018aacc	e5e1	cmp_s r1,0x65
ram:0018aace	06f2	beq_s 0x0018aad8
ram:0018aad0	2120c007	j.d [blink]
ram:0018aad4	4a200000	_mov r0,0x0
ram:0018aad8	2120c007	j.d [blink]
ram:0018aadc	4a204000	_mov r0,0x1
