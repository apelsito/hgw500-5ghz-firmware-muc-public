; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0010560c entry ram:0010560c
ram:0010560c	001604700280dcc8	ld r4,[0x8002c8dc]
ram:00105614	0d0c1201	brlt r4,0x4,0x00105620
ram:00105618	0d002000	b.d 0x00105624
ram:0010561c	4a248000	_mov r4,0x2
ram:00105620	f90c1280	brlt r4,0x0,0x00105618
ram:00105624	cf71180040cd	mov_s r1,0x18cd40
ram:0010562a	15210101	add2 r1,r1,r4
ram:0010562e	4380	ld_s r2,[r0,0xc]
ram:00105630	6081	ld_s r3,[r1,0x0]
ram:00105632	00228c0f00006830	add r12,r2,0x3068
ram:0010563a	60a4	st_s r3,[r12,0x0]
ram:0010563c	e07e	j_s [blink]
