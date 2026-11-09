; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0013db80 entry ram:0013db80
ram:0013db80	fc1c48b3	st.aw r13,[sp,-0x4]
ram:0013db84	3020830f0000c004	ld r3,[r0, 0x4c0]
ram:0013db8c	110b3000	breq.d r3,0x0,0x0013db9c
ram:0013db90	0a25c017	_mov r13,blink
ram:0013db94	4683	ld_s r2,[r3,0x18]
ram:0013db96	80e2	cmp_s r2,0x0
ram:0013db98	e2208200	jlne [r2]
ram:0013db9c	0a274033	mov blink,r13
ram:0013dba0	4a260070	nop
ram:0013dba4	2120c007	j.d [blink]
ram:0013dba8	04140d34	_ld.ab r13,[sp,0x4]
