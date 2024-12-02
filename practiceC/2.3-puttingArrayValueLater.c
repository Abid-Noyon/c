// #include <stdio.h>

// int main()
// {
//     // int classRoll[] = {80, 81, 83, 84, 85};
//     // classRoll[3] = 1;
//     int classRoll[5];
//     classRoll[0] = 84;
//     classRoll[1] = 85;
//     printf("%d", classRoll[0]);
// }

#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)
    {
        sum = sum + i;
        printf("+%d", i);
    }
    printf("\nSum=%d", sum);
    return 0;
}