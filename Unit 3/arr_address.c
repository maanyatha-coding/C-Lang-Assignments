// Program to display addresses of array elements
#include <stdio.h>

int main() {
    int intArray[5];
    float floatArray[5];        
    char charArray[5];
    int i , j;

    printf("Enter 5 integers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &intArray[i]);  
    }

    printf("Enter 5 floats:\n");
    for(i = 0; i < 5; i++) {
        scanf("%f", &floatArray[i]);
    }

    printf("Enter 5 characters:\n");
    for(i = 0; i < 5; i++) {
        scanf(" %c", &charArray[i]);
    }

    printf("\nYou entered the following integers & their addresses:\n");
    for(i = 0; i < 5; i++) {
        printf("%d : %p \n", intArray[i], (void*)&intArray[i]); 
    }
    printf("\n");

    printf("\nYou entered the following floats & their addresses:\n");
    for(i = 0; i < 5; i++) {
        printf("%f : %p \n", floatArray[i], (void*)&floatArray[i]);
    }
    printf("\n");   

    printf("\nYou entered the following characters & their addresses:\n");
    for(i = 0; i < 5; i++) {
        printf("%c : %p \n ", charArray[i], (void*)&charArray[i]);
    }
    printf("\n");

    return 0;   
}