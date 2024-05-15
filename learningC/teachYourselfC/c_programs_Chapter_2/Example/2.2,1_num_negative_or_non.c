//_num_negative_or_non
#include <stdio.h>

int main(void)
{
	int num;
	printf("Enter an integer: ");
	scanf("%d", &num);
	if (num < 0)
		printf("Numberer is negative");
	else
		printf("Number is non-negative");

	return 0;
}

// what happened when no condiotion applied
// lets see
// we see theres an error.

/* #include <stdio.h>

int main(void)
{
	int num;
	printf("Enter an integer: ");
	scanf("%d", &num);
	if ()
		printf("Numberer is negative");
	else
	printf ("Number is non-negative");

	return 0;
} */
