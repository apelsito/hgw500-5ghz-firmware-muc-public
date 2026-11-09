; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00110768 entry ram:00110768
ram:00110768	fc1c48b3	st.aw r13,[sp,-0x4]
ram:0011076c	3220810f0000be40	ldb r1,[r0, 0x40be]
ram:00110774	11093000	breq.d r1,0x0,0x00110784
ram:00110778	0a25c017	_mov r13,blink
ram:0011077c	c60acfff	bl 0x00110240
ram:00110780	09000000	b 0x00110788
ram:00110784	760fc000	bl 0x001126f8
ram:00110788	0a274033	mov blink,r13
ram:0011078c	04140d34	ld.ab r13,[sp,0x4]
ram:00110790	2120c007	j.d [blink]
ram:00110794	4a200000	_mov r0,0x0
