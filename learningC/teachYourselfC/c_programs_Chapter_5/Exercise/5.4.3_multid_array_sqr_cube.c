#include <stdio.h>
#include <math.h>

int main()
{
    int a[10][3];
    int i, j, x, cube;

    for (i = 0; i < 10; i++)
    {
        x = i + 1;
        for (j = 0; j < 3; j++)
        {
            a[i][j] = x;
            x = (i + 1) * x;
        }
    }

    for (i = 0; i < 10; i++)
    {

        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\nWhats the cube value you wanna look up for further operation: ");
    scanf("%d", &cube);
    j = 0;
    if (!j)
    {
        for (i = 0; i < 10; i++)
        {
            if (cube == a[i][2]) // look just column 3
            {
                printf("\nThe cubes is: %d and root is: %.6f\n", cube, sqrt(cube));
                float temp = sqrt(cube);
                printf("\nRoots square is: %.6f\n", temp * temp);
                j=1;
                break;
            }
            else
                j = 0;

            // else
            // printf("Wrong entry."); // but this statement is printing 10 times we dont want that for this we wanna introduce another if statement before
        }
    }
    if (!j)
    {
        printf("Wrong entry.");
    }

    return 0;
}

//_multid_array_sqr_cube