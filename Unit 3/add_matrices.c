// Program to add two matrices
#include <stdio.h>
int main() {
    int matrix1[2][2], matrix2[2][2], sum[2 ][2], i, j; 

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Adding matrices
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Sum of the matrices is:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}