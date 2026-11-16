#include <stdio.h>

struct Student {
	int rollNumber;
	char name[100];
	float marks[3];
};

int main(void) {
	struct Student student;
	float total, average;

	printf("Enter roll number: ");
	scanf("%d", &student.rollNumber);

	printf("Enter name: ");
	scanf(" %99[^\n]", student.name);

	printf("Enter marks in three subjects: ");
	scanf("%f %f %f", &student.marks[0], &student.marks[1], &student.marks[2]);

	total = student.marks[0] + student.marks[1] + student.marks[2];
	average = total / 3.0f;

	printf("\nStudent details\n");
	printf("Roll number: %d\n", student.rollNumber);
	printf("Name: %s\n", student.name);
	printf("Marks: %.2f, %.2f, %.2f\n", student.marks[0], student.marks[1], student.marks[2]);
	printf("Total marks: %.2f\n", total);
	printf("Average marks: %.2f\n", average);

	return 0;
}
