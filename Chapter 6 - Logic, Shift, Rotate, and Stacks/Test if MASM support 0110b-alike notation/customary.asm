.model small
.stack 200h

.data

	count dword 0;
	temp   byte 0;


.code

main proc

		mov count, 0;
		mov temp, al;

		mov ecx, 8;

	for01:

		test al, 00000001b;
		jz ramification;

		inc count;

	ramification:
		shr al, 1;
		loop for01;

		mov al, temp;

main endp

end main 