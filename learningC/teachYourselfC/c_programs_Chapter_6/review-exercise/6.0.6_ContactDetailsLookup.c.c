/* #include <stdio.h>
#include <string.h>

int main()
{
    char namebook[][2][20] = {"Amy", "0191817161",
                              "Paul", "01971615",
                              "Farin", "01534694346",
                              "Abid", "01954872024"};
    char name[20];
    int i;
    printf("Enter name: ");
    gets(name);
    for (i = 0; i < 4; i++)
    {
        if (!strcmp(name, namebook[i][0]))
        {
            printf("%s", namebook[i][1]);
            return 0;
        }
    }
    printf("Name not found");
    return 0;
} */

// practice 2
// There is some error, I will solve it later
#include <stdio.h>
#include <string.h>

int main()
{
    char namebook[][2][20] = {"Amy", "0191817161",
                              "Paul", "01971615",
                              "Farin", "01534694346",
                              "Abid", "01954872024"};
    char name[20];
    int i;

    printf("Enter name: ");
    gets(name);
    char yesNo = 'y';
    while (yesNo == 'y')
    {
        if (!strcmp(name, namebook[i][0]))
        {
            printf("%s", namebook[i][1]);
            return 0;
        }
        else
        {
            printf("Wanna search again? y/n: ");
            char yesNo;
            scanf("%c", &yesNo);
            if (yesNo == 'n')
            {
                return 0;
            }
        }
    }
    printf("Name not found");
    return 0;
}