.model small
.stack 100h

.data

    message db "b is now ", 13, 10, "$";

    i sdword ?;
    j sdword ?;
    k sdword ?;

.code

main proc

        mov b, 0;

        mov ecx, 10;  i < 10; Set the loop count of for01.

    for01:

        mov i, 0;     i = 0
        
        push ecx;             Save the loop count of for01.

        mov ecx, 9;   j < 9;  Set the loop count of for02.

    for02:

        mov j, 0;     j = 0

        push ecx;             Save the loop count of for02.

        mov ecx, 8;   k < 8;  Set the loop count of for03.

    for03:

        mov k, 0;     k = 0

        add eax, i;
        add eax, j;
        add eax, k;

        mov b, eax;

        inc k;      k++;
        pop ecx;    Restore inner loop counter;
        loop for03;

        inc j;      j++;
        pop ecx;    Restore middle loop counter.
        loop for02;

        inc i;      i++;
        pop ecx;    Restore outer loop counter.
        loop for01;

main endp

end main
