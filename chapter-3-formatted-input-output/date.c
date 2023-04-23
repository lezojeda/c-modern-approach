#include <stdio.h>

void date() {
	int day, month, year;

	printf("Enter a date (mm/dd/yyyy): ");
	scanf_s("%d/%d/%d", &month, &day, &year);
	printf("%d%2.2d%2.2d", year, month, day);
}