#include <stdio.h>

#define PI 3.1415f

void volume_sphere()
{
	int radius = 10;
	float volume = (4.0f / 3.0f) * PI * radius * radius * radius;

	printf("The volume of a sphere with a 10-meter radius is: %.2f\n", volume); // %.2f corresponds to a conversion specification indicating a float number with 2 digits after the decimal point
}