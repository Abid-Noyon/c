/* #include <stdio.h>

int main()
{
    int answer, count, chances, right;

    for (count = 1; count < 11; count++)
    {

        printf("Enter the value of %d+%d=?,count,count");
        scanf("%d", &answer);

        if (answer == count + count)
            printf("you are right\n");

        else
        {
            printf("sorry!you are wrong.\ntry again.");

            right = 0;

            for (chances = 0; chances < 3 && !right; chances++)
            {
                printf("what is %d+%d?", count, count);
                scanf("%d", &answer);

                if (answer == count + count)
                {
                    printf("You are right\n");
                    right = 1;
                }
            }
        }
        return 0;
    }
}
 */

// ____________________________
// my version
//_and_and_mistake_check_third_opportunity

#include <stdio.h>

int main(void)
{
    int answer, rightSecTry, rightAns, mistakes, choice, right, i;
    for (i = 1; i < 11; i++)
    {
        printf("What is: %d + %d: ", i, i);
        scanf("%d", &answer);
        if (answer == i + i)
        {
            printf("Right!\n");
            // int rightAns;
            rightAns++;
        }
        else
        {
            printf("Wrong! Try again.\n");
            // int mistakes;
            mistakes++;
            right = 0;
            for (choice = 0; choice < 3 && !right; choice++)
            {
                printf("what is: %d + %d: ", i, i);
                scanf("%d", &answer);
                if (answer == i + i)
                {
                    printf("Right!\n");
                    right = 1;
                    // int rightSecTry;
                    rightSecTry++;
                }
                if (!right)
                {
                    mistakes++;
                    printf("\nWrong again!\n");
                }
            }
            if (!right)
            {
                printf("The answer is: %d\n", i + i);
                // mistakes++;
            }
        }
    }
    printf("Total right answer: %d\n", rightAns);
    printf("right answer on second try: %d\n", rightSecTry);
    printf("Total mistake: %d\n", mistakes);
    return 0;
}