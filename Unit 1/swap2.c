#include <stdio.h>

int main(){

    int a,b, c;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}