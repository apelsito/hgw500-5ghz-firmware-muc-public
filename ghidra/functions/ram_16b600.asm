; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0016b600 entry ram:0016b600
ram:0016b600	e1c5	push_s r13
ram:0016b602	001602702000ec17	ld r2,[0x2017ec]
ram:0016b60a	eb75	mov_s r13,blink
ram:0016b60c	22208000	jl [r2]
ram:0016b610	0a274033	mov blink,r13
ram:0016b614	04140d34	ld.ab r13,[sp,0x4]
ram:0016b618	2120c007	j.d [blink]
ram:0016b61c	2f200700	_extb r0,r0
