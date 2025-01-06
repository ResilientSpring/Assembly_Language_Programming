.MODEL SMALL
.STACK 100h

.DATA

binary DW 1010010111000011b
result DB "Result: ", '$'
newline DB 0Dh, 0Ah, '$'

.CODE
main:

	MOV AX, @DATA
	MIV DS, AX

	LEA DX, result
	MOV AH, 09h
	INT 21