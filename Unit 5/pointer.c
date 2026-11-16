// Pointer to an integer variable
#include <stdio.h>

int main() {
    int var = 10;
    int *ptr = &var;

    printf("Value of variable: %d\n", var);
    printf("Address of variable: %p\n", (void*)&var);
    printf("Value of pointer: %d\n", *ptr);
    printf("Address of pointer: %p\n", (void*)ptr);

    return 0;
}