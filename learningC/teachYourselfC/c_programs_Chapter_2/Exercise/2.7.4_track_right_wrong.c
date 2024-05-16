#include <stdio.h>

int main(void)
{
    int i, answer, rightAns = 0, wrongAns = 0;
    for (i = 1; i <= 10; i++)
    {
        printf("\nWhat is: %d + %d: ", i, i);
        scanf("%d", &answer);
        if (answer == (i + i))
        {
            printf("Right!\n");
            rightAns++;
        }
        else
        {
            printf("\nOh no! Its wrong. Right ans: %d", i + i);
            wrongAns++;
        }
    }
    printf("\nYour total right answer: %d", rightAns);
    printf("\nYour total wrong answer: %d", wrongAns);
    return 0;
}