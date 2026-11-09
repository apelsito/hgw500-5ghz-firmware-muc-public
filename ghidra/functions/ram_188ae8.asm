; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00188ae8 entry ram:00188ae8
ram:00188ae8	4c200080	cmp r0,0x0
ram:00188aec	4a260070	nop
ram:00188af0	e07c	jeq_s [blink]
ram:00188af2	80e1	cmp_s r1,0x0
ram:00188af4	e07c	jeq_s [blink]
ram:00188af6	00100a00	ld r10,[r0]
ram:00188afa	0a21801f09e6f811	mov r9,0xe60911f8
ram:00188b02	54198092	st r10,[r9,-0xac]
ram:00188b06	00110800	ld r8,[r1]
ram:00188b0a	54190092	st r8,[r9,-0xac]
ram:00188b0e	04100700	ld r7,[r0,0x4]
ram:00188b12	5819c091	st r7,[r9,-0xa8]
ram:00188b16	04110600	ld r6,[r1,0x4]
ram:00188b1a	58198091	st r6,[r9,-0xa8]
ram:00188b1e	6280	ld_s r3,[r0,0x8]
ram:00188b20	5c19c090	st r3,[r9,-0xa4]
ram:00188b24	4281	ld_s r2,[r1,0x8]
ram:00188b26	5c198090	st r2,[r9,-0xa4]
ram:00188b2a	0c100400	ld r4,[r0,0xc]
ram:00188b2e	60190091	st r4,[r9,-0xa0]
ram:00188b32	0c110500	ld r5,[r1,0xc]
ram:00188b36	60194091	st r5,[r9,-0xa0]
ram:00188b3a	e07e	j_s [blink]
