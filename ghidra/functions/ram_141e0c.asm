; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00141e0c entry ram:00141e0c
ram:00141e0c	15204200	add2 r2,r0,r1
ram:00141e10	4a230000	mov r3,0x0
ram:00141e14	69a2	st_s r3,[r2,0x24]
ram:00141e16	4c1ad800	st.as r3,[r2,0x4c]
ram:00141e1a	8f1ad800	st.as r3,[r2,0x8f]
ram:00141e1e	d21ad800	st.as r3,[r2,0xd2]
ram:00141e22	80201105	add r0,r0,0x454
ram:00141e26	1961	add_s r1,r1,r0
ram:00141e28	2120c007	j.d [blink]
ram:00141e2c	0019c200	_stb r3,[r1]
