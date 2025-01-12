#include <stdio.h>

int main() {

    int eax;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                eax = i + j + k;
            }
        }
    }

}

// Source: https://stackoverflow.com/questions/15995696/how-to-create-nested-loops-in-x86-assembly-language