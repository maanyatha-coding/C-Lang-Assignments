// Exchanging two values using call by reference
#include <stdio.h>

void exchange(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    printf("Before exchange: x = %d, y = %d\n", x, y);
    exchange(&x, &y);
    printf("After exchange: x = %d, y = %d\n", x, y);
    return 0;
}