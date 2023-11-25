#include <stdio.h>

int main()
{
    int physics, math, english;
    printf("Enter mark of physics: ");
    scanf("%d", &physics);
    printf("Enter mark of math: ");
    scanf("%d", &math);
    printf("Enter mark of english: ");
    scanf("%d", &english);
    float avgMark = (physics + math + english) / 3;

    if ((avgMark <= 40) || physics < 33 || math < 33 || english < 33)
    {
        printf("Your Average percentage is %.2f and you are failed.", avgMark);
    }

    else if (avgMark >= 40 && avgMark < 60)
    {
        printf("Your average percentage is %.2f And your grade is: C", avgMark);
    }

    else if (avgMark >= 60 && avgMark < 80)
    {
        printf("Your average percentage is %.2f And your grade is: B", avgMark);
    }

    else if (avgMark >= 80)
    {
        printf("Your average percentage is %f. And your grade is: A+", avgMark);
    }
    else
        printf("You have entered wrong values.");

    return 0;
}