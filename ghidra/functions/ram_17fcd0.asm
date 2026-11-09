; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0017fcd0 entry ram:0017fcd0
ram:0017fcd0	001682700280bcc8	ldb r2,[0x8002c8bc]
ram:0017fcd8	0a21800f1800b0c3	mov r1,0x18c3b0
ram:0017fce0	090ad100	brne r2,0x3,0x0017fce8
ram:0017fce4	0081	ld_s r0,[r1,0x0]
ram:0017fce6	e07e	j_s [blink]
ram:0017fce8	0181	ld_s r0,[r1,0x4]
ram:0017fcea	e07e	j_s [blink]
