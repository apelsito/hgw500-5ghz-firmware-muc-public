; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00138060 entry ram:00138060
ram:00138060	0d081100	brne r0,0x0,0x0013806c
ram:00138064	2120c007	j.d [blink]
ram:00138068	4a200000	_mov r0,0x0
ram:0013806c	f9095280	brlt r1,0x1,0x00138064
ram:00138070	f5095388	brge r1,0x21,0x00138064
ram:00138074	1d095203	brlt r1,0xd,0x00138090
ram:00138078	42210203	sub r2,r1,0xc
ram:0013807c	4e7a	sexw_s r2,r2
ram:0013807e	002e81700000ff07	asl r1,0x7ff,r2
ram:00138086	2478	and_s r0,r0,r1
ram:00138088	1078	extw_s r0,r0
ram:0013808a	e07f	j_s.d [blink]
ram:0013808c	02288000	_asr r0,r0,r2
ram:00138090	4e210303	rsub r3,r1,0xc
ram:00138094	6e7b	sexw_s r3,r3
ram:00138096	022ec1700000ff07	asr r1,0x7ff,r3
ram:0013809e	2478	and_s r0,r0,r1
ram:001380a0	1078	extw_s r0,r0
ram:001380a2	7878	asl_s r0,r0,r3
ram:001380a4	2120c007	j.d [blink]
ram:001380a8	2f200800	_extw r0,r0
