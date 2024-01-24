#include <stdio.h>

int main()
{
	int age;
	float gpa;
	char grade;

	printf("Enter you age: ");
	scanf("%i", &age);

	printf("Enter your GPA: ");
	scanf("%f", &gpa);

	printf("Enter you letter grade: ");
	scanf(" %c", &grade);   // 16\n4.5\nA\n

	printf("Age: %i GPA: %f Grade: %c\n", age, gpa, grade);

	return 0;
}
