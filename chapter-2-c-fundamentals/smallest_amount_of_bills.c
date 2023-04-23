#include <stdio.h>

void smallest_amount_of_bills()
{
	float amount;
	printf("Enter a dollar amount: \n");
	scanf_s("%f", &amount);

	int bills_of_20 = amount / 20;
	int bills_of_10 = (amount - bills_of_20 * 20) / 10;
	int bills_of_5 = (amount - bills_of_10 * 10 - bills_of_20 * 20) / 5;
	int bills_of_1 = amount - bills_of_5 * 5 - bills_of_10 * 10 - bills_of_20 * 20;

	printf("$20 bills: %d\n", bills_of_20);
	printf("$10 bills: %d\n", bills_of_10);
	printf("$5 bills: %d\n", bills_of_5);
	printf("$1 bills: %d\n", bills_of_1);

}