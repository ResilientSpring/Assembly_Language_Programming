/*
* 
* How to convert a number from binary to decimal using a stack in c?

ChatGPT said:

To convert a binary number to decimal using a stack in C, we can take the following approach:

1. Push the binary digits (bits) onto the stack, one by one.

2. Pop the digits from the stack and calculate their decimal value by multiplying each digit by the corresponding power of 2.

Here's a simple C program to do that:

*/


#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 32  // Assuming a maximum of 32 bits for the binary number

// Stack structure
typedef struct {
    int arr[MAX_STACK_SIZE];
    int top;
} Stack;

// Stack operations
void push(Stack* stack, int value) {
    if (stack->top < MAX_STACK_SIZE - 1) {
        stack->arr[++(stack->top)] = value;
    }
    else {
        printf("Stack overflow\n");
    }
}

int pop(Stack* stack) {
    if (stack->top >= 0) {
        return stack->arr[(stack->top)--];
    }
    else {
        printf("Stack underflow\n");
        return -1;
    }
}

// Function to convert binary string to decimal using stack
int binaryToDecimal(const char* binary) {
    Stack stack;
    stack.top = -1;  // Initialize the stack

    // Push the binary digits onto the stack
    for (int i = 0; binary[i] != '\0'; i++) {
        push(&stack, binary[i] - '0');  // Convert char to int ('0' -> 0, '1' -> 1)
    }

    // Pop the binary digits and compute the decimal value
    int decimal = 0;
    int powerOfTwo = 1;  // Start with 2^0 for the least significant bit (LSB)
    while (stack.top >= 0) {
        int bit = pop(&stack);
        decimal += bit * powerOfTwo;
        powerOfTwo *= 2;  // Move to the next power of 2
    }

    return decimal;
}

int main() {
    const char* binary = "1101";  // Example binary string
    int decimal = binaryToDecimal(binary);
    printf("Binary: %s\nDecimal: %d\n", binary, decimal);
    return 0;
}

/*

How it works:
Push binary digits to the stack: We take each digit of the binary string and push it onto the stack. Since we process the string from left to right, the most significant bit (MSB) ends up at the bottom of the stack.

Pop and calculate the decimal: We then pop each bit from the stack, starting from the least significant bit (LSB). For each bit, we multiply it by the corresponding power of 2 (starting from 2^0) and add it to the final decimal result.

Example:
For the binary string 1101:

The stack will store the binary digits in the order: 1, 1, 0, 1.
We then calculate:
1 * 2^3 = 8
1 * 2^2 = 4
0 * 2^1 = 0
1 * 2^0 = 1
The total decimal value will be 8 + 4 + 0 + 1 = 13.

*/