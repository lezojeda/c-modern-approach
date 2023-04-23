#include <stdio.h>

void telephone_number() {
	int first_group, second_group, third_group;

	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf_s("(%d) %d-%d", &first_group, &second_group, &third_group);

	printf("You entered %d.%d.%d\n", first_group, second_group, third_group);
}