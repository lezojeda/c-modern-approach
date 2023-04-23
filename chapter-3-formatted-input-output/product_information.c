#include <stdio.h>

void product_information() {
	int item_number;
	float price;
	int purchase_month, purchase_day, purchase_year;

	printf("Enter item number: ");
	scanf_s("%d", &item_number);

	printf("Enter unit price: ");
	scanf_s("%f", &price);

	printf("Enter purchase date(mm/dd/yyyy): ");
	scanf_s("%d/%d/%d", &purchase_month, &purchase_day, &purchase_year);

	printf("Item\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n");
	printf("%d\t\t$%8.2f\t%d/%d/%d", item_number, price, purchase_month, purchase_day, purchase_year);
}