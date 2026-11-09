; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000fe74c entry ram:000fe74c
ram:000fe74c	4022c200	add r2,r2,0x3
ram:000fe750	412a8200	lsr r2,r2,0x2
ram:000fe754	42224400	sub r4,r2,0x1
ram:000fe758	8c24ff8f	cmp r4,-0x1
ram:000fe75c	e07c	jeq_s [blink]
ram:000fe75e	2f248970	abs lp_count,r2
ram:000fe762	e078	nop_s
ram:000fe764	a8208001	lp 0x000fe770
ram:000fe768	04110304	ld.ab r3,[r1,0x4]
ram:000fe76c	0418d000	st.ab r3,[r0,0x4]
ram:000fe770	e07e	j_s [blink]
