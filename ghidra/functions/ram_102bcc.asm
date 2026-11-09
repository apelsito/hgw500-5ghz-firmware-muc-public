; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00102bcc entry ram:00102bcc
ram:00102bcc	00110000	ld r0,[r1]
ram:00102bd0	4a260070	nop
ram:00102bd4	2120c007	j.d [blink]
ram:00102bd8	53200000	_bmsk r0,r0,0x0
