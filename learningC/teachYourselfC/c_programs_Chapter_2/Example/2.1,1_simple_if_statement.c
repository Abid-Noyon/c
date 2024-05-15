//_simple_if_statement
#include <stdio.h>

int main(void)
{

	int answer;
	printf("What is 10+14?\n");
	scanf("%d", &answer);

	if (answer == 10 + 14)
		printf("Right!");

	return 0;
}
