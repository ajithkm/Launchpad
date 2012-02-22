org 0xf800
start:
	mov.w #0x5a80,&0x0120
	
	mov.w #1,&0x022
	mov.w #0,&0x021
	L1:
		xor.w #1,&0x021
		mov.w #0xffff,R7
	L2:
		sub.w #1,R7
		jnz L2
	jmp L1
loop:
	org 0xfffe
	dw start	
