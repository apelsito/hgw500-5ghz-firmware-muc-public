; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001889d4 entry ram:001889d4
ram:001889d4	4c200080	cmp r0,0x0
ram:001889d8	4a260070	nop
ram:001889dc	e07c	jeq_s [blink]
ram:001889de	80e1	cmp_s r1,0x0
ram:001889e0	e07c	jeq_s [blink]
ram:001889e2	00100a00	ld r10,[r0]
ram:001889e6	0a21801f09e6f811	mov r9,0xe60911f8
ram:001889ee	34198092	st r10,[r9,-0xcc]
ram:001889f2	00110800	ld r8,[r1]
ram:001889f6	44190092	st r8,[r9,-0xbc]
ram:001889fa	04100700	ld r7,[r0,0x4]
ram:001889fe	3819c091	st r7,[r9,-0xc8]
ram:00188a02	04110600	ld r6,[r1,0x4]
ram:00188a06	48198091	st r6,[r9,-0xb8]
ram:00188a0a	6280	ld_s r3,[r0,0x8]
ram:00188a0c	3c19c090	st r3,[r9,-0xc4]
ram:00188a10	4281	ld_s r2,[r1,0x8]
ram:00188a12	4c198090	st r2,[r9,-0xb4]
ram:00188a16	0c100400	ld r4,[r0,0xc]
ram:00188a1a	40190091	st r4,[r9,-0xc0]
ram:00188a1e	0c110500	ld r5,[r1,0xc]
ram:00188a22	50194091	st r5,[r9,-0xb0]
ram:00188a26	e07e	j_s [blink]
