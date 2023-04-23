#include <stdio.h>

void book_isbn() {
	int gs1, group_identifier, publisher_code, item_number, check_digit;

	printf("Enter ISBN: ");
	scanf_s("%d-%d-%d-%d-%d", &gs1, &group_identifier, &publisher_code, &item_number, &check_digit);

	printf("GS1 prefix: %d\n", gs1);
	printf("Group identifier: %d\n", group_identifier);
	printf("Publisher code: %d\n", publisher_code);
	printf("Item number: %d\n", item_number);
	printf("Check digit: %d\n", check_digit);
}