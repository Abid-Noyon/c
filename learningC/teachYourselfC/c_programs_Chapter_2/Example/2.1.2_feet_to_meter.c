/* #include <stdio.h>

int main(void)
{

	float num;
	int choice;

	printf("Enter value:");
	scanf("%.2f", &num);

	printf("1:Feet to meters,2:Meters to Feet.");
	printf("Enter Choice:");
	scanf("%d", &choice);

	if (choice == 1)
		printf("%.2f", num / 3.28);
	if (choice == 2)
		printf("%.2f", num * 3.28);

	return 0;
} */

//_feet_to_meter
// __________________________________
#include <stdio.h>

int main(void)
{
	int choice;
	float num;
	printf("Enter the value you wanna convert: ");
	scanf("%f", &num);
	printf("Enter your choice. Press 1 or 2: \n");
	printf("\n1. Feet to meters, 2. Meter to feet: ");
	scanf("%d", &choice);
	if (choice == 1)
	{
		printf("\n%.2f Feet = %.2f Meter.", num, num / 3.28);
	}
	if (choice == 2)
	{
		printf("\n%.2f Meter = %.2f Feet.", num, num * 3.28);
	}
	return 0;
}
