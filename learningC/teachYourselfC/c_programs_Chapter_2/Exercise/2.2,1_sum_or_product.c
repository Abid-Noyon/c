#include <stdio.h>
int main()
{
    int num1, num2, choice;

    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);

    printf("\nTo see the sum of numbers press 1  or To see the product of numbers press 2.\n");
    scanf("%d", &choice);

    if (choice == 1)
        printf("Sum is: %d", num1 + num2);
    else if (choice == 2)
        printf("product is %d", num1 * num2);
    else
        printf("Wrong input");

    return 0;
}
//_sum_or_product