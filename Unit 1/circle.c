#include <stdio.h>

int main(){

    int radius;
    float area;
    const float pi = 3.14;

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);   

    area = pi * radius * radius;
    printf("The area of the circle is: %.2f\n", area);
    return 0;
}