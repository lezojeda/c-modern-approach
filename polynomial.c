#include <stdio.h>

void polynomial()
{
	float x;
	printf("Enter the value of x: \n");
	scanf_s("%f", &x);

	float result = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;

	printf("The result is: %f\n", result);
}