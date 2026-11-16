// Double pointer 

#include <stdio.h>

int main() {
    int num = 42; // Declare an integer variable
    int *ptr = &num; // Declare a pointer and initialize it with the address of the integer variable
    int **dptr = &ptr; // Declare a double pointer and initialize it with the address of the pointer

    // Display the values stored in the variable, pointer, and double pointer
    printf("Value of num: %d\n", num);
    printf("Value pointed to by ptr: %d\n", *ptr);
    printf("Value pointed to by dptr: %d\n", **dptr);

    return 0;
}