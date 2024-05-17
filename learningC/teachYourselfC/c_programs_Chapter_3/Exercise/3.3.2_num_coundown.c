#include <stdio.h>
int main()
{
    int i;
    printf("Enter a number");
    scanf("%d", &i);

    for (; i; i--)
        printf("\a");
    return 0;
}
//_num_coundown
/* #include <stdio.h>

int main() {
    int number, i;

    printf("Enter a number for countdown: ");
    scanf("%d", &number);

    // Countdown loop without output
    for (i = number; i > 0; i--) {
        // Add an empty statement (;) for syntax but no action
    }

    // Sound the bell at the end
    printf("\a"); // Prints an alert character (bell)

    return 0;
}
 */