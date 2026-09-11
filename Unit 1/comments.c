// C program to take input from user and display it
#include <stdio.h>

int main(){
    char name[100];
    char div[10];
    char address[200];
    char clg[100];
    int rno;
    float percentage;

/*The codeis a simple C program that takes input from the user for their name, division,
 address, college name, roll number, and percentage. 
 It then displays the entered details back to the user. */
 
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your division: ");
    scanf("%s", div);
    printf("Enter your address: ");
    scanf("%s", address);
    printf("Enter your college name: ");
    scanf("%s", clg);
    printf("Enter your roll number: ");
    scanf("%d", &rno);
    printf("Enter your percentage: ");
    scanf("%f", &percentage);
    printf("Name: %s\n", name);
    printf("Division: %s\n", div);
    printf("Address: %s\n", address);
    printf("College: %s\n", clg);
    printf("Roll Number: %d\n", rno);
    printf("Percentage: %.2f\n", percentage);
    return 0;
}