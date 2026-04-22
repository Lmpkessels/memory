#include <stdio.h>
#include <stdlib.h>

// Accessible to entire program 
// Lifetime: is of the time of the application lives in the same memory 
// space as static
// Stack allocated
int global = 10;

int memory() {
    // Static memory is accassible within the scope of where it is declared
    // can be local or global
    // Lifetime: for as long as the program runs
    // Stack allocated
    static int _static = 12;

    // Local memory is accessible only within the function where it is
    // declared
    // Lifetime: for as long as the function is being executed
    // Stack allocated
    int local = 13;

    // Dynamic memory is accessible within the function where it is
    // declared
    // Lifetime: for as long as the function is being executed
    // Heap allocated
    int *dynamic = (int*)malloc(14);

    printf("Global:  %p\n", (void*)&global);
    printf("Static:  %p\n", (void*)&_static);
    printf("Local:   %p\n", (void*)&local);
    printf("Dynamic: %p\n", (void*)&dynamic);
}

int main(void) {
    memory();
}