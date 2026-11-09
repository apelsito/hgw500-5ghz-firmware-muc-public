; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0018a848 entry ram:0018a848
ram:0018a848	fc1cc8b7	st.aw blink,[sp,-0x4]
ram:0018a84c	2220800f18001c29	jl 0x0018291c
ram:0018a854	2220800f1800403a	jl 0x00183a40
ram:0018a85c	d1c0	pop_s blink
ram:0018a85e	e07e	j_s [blink]
