// Area of a Triangle Using Four Types of User-Defined Functions
#include <stdio.h>

// No arguments and no return value
void areaNoArgsNoReturn() {
    float base, height, area;
    printf("Enter base and height of the triangle: ");
    scanf("%f %f", &base, &height);
    area = 0.5 * base * height;
    printf("Area of the triangle (No Args, No Return): %.2f\n", area);
}

int main() {
    areaNoArgsNoReturn();
    return 0;
}

// No arguments but returns a value
float areaNoArgsReturn() {
    float base, height, area;
    printf("Enter base and height of the triangle: ");
    scanf("%f %f", &base, &height);
    area = 0.5 * base * height;
    return area;
}

int main() {
    float result = areaNoArgsReturn();
    printf("Area of the triangle (No Args, Return): %.2f\n", result);
    return 0;
}

// Takes arguments but does not return a value
void areaWithArgsNoReturn(float base, float height) {
    float area = 0.5 * base * height;
    printf("Area of the triangle (With Args, No Return): %.2f\n", area);
}

int main() {
    float base, height;
    printf("Enter base and height of the triangle: ");
    scanf("%f %f", &base, &height);
    areaWithArgsNoReturn(base, height);
    return 0;
} 

// Takes arguments and returns a value
float areaWithArgsReturn(float base, float height) {
    float area = 0.5 * base * height;
    return area;
}

int main() {
    float base, height;
    printf("Enter base and height of the triangle: ");
    scanf("%f %f", &base, &height);
    float result = areaWithArgsReturn(base, height);
    printf("Area of the triangle (With Args, Return): %.2f\n", result);
    return 0;
}

