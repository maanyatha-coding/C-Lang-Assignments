// Program to calculate sum of array elements
#include <stdio.h>

int main() {
    int intArray[5];
    int sum = 0;
    int i;

    printf("Enter 5 integers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &intArray[i]);
        sum += intArray[i];
    }

    printf("Sum of the integers is: %d\n", sum);

    return 0;
}