#include <stdio.h>

int main(){

    int a, b, c, sum;
    float avg;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);

    sum = a + b + c;
    avg = sum / 3.0;

    printf("The average of the three numbers is: %.2f\n", avg);
    return 0;
}