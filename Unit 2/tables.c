// C program to demonstrate the use of for, while, and do-while loops
#include <stdio.h>

int main() {

    int j = 2;
    int i = 1;

    for (i = 1; i < 10; i++) {
        printf("%d * %d = %d\n", j, i, j * i);
    }

    do {
        printf("%d * %d = %d\n", j, i, j * i);
        i++;
    } while (i < 10);

    while (i < 10) {
        printf("%d * %d = %d\n", j, i, j * i);
        i++;
    }
    return 0;
}