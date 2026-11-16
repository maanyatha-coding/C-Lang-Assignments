
#include <stdio.h>

struct Employee
{
    int id;
    char name[100];
    float salary;
};

int main()
{
    struct Employee emp[100];
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Accept employee details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Employee Name: ");
        scanf(" %99[^\n]", emp[i].name);

        printf("Enter Employee Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Display employee details
    printf("\n--- Employee Information ---\n");

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("ID: %d\n", emp[i].id);
        printf("Name: %s\n", emp[i].name);
        printf("Salary: %.2f\n", emp[i].salary);
    }

    return 0;
}
