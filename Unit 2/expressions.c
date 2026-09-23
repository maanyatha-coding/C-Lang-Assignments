// This program demonstrates operator precedence in C programming language.
#include <stdio.h>

int main() {
    int a = 10 , b = 5 , c = 2;
    int result;

    printf("Expression : a + b * c\n");
    result = a + b * c;
    printf("Result : %d\n", result);

    printf("Expression : (a + b) * c\n");
    result = (a + b) * c;
    printf("Result : %d\n", result);

    printf("Expression : a / b + c\n");
    result = a / b + c;
    printf("Result : %d\n", result);

    return 0;
}