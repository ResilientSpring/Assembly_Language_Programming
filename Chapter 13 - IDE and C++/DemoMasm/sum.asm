; Subroutine thesum adds a variable number of integers.
;	RCX:Memory address of variable to receive the sum.
;	RDX: Memory address of array of integer values
;	R8: Number of integers in the array
;	Supports X64 Calling Convention

	    .code
thesum  proc              ; Subroutine thesum entry point
		mov EAX, [RDX]    ; Load first value.
		dec R8            ; Decrement number of integers.
		jle retsub		  ; Return with just one alue.
thelp:  add EAX, [RDX+4*R8]   ; Add next integer to running t
		dec R8		; Numer of integers still to add.
		jnz thelp		  ; Continue with next integer
retsub: mov [RCX], EAX	  ; Return sum to calling program
		ret				  ; Return to the calling program
thesum  endp
