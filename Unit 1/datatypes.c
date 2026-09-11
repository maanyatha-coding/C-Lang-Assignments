#include <stdio.h>

int main(){

    char name[100];
    char div[10];
    char address[100];
    char clg[100];
    int rno;
    float percentage;

    printf("Enter your name: ");
    scanf("%49[^\n]", name);
    printf("Enter your division: ");
    scanf(" %9[^\n]", div);
    printf("Enter your address: ");
    scanf(" %99[^\n]", address);
    printf("Enter your college: ");
    scanf(" %99[^\n]", clg);
    printf("Enter your roll number: ");
    scanf("%d", &rno);
    printf("Enter your percentage: ");
    scanf("%f", &percentage);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", name);
    printf("Division: %s\n", div);
    printf("Address: %s\n", address);
    printf("College: %s\n", clg);
    printf("Roll Number: %d\n", rno);
    printf("Percentage: %.2f\n", percentage);   
}