#include <stdio.h>

#define RANDOM_NUMBER 1234 // A random number to give as data

// Different format specifiers to represent addresses
int display(int data) {
    printf("Hexdecimal: %x\n", data);
    printf("Octal:      %o\n", data);
    printf("Pointer:    %p\n", (void*)&data);
}

int main() {
    display(RANDOM_NUMBER);
}