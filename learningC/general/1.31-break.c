// break is used to exit from a loop/swithcase like for loop, while, do-while etc

// #include <stdio.h>
// int main()
// {
//     for (int i = 0; i < 10; i++)
//     {
//         if (i == 6)
//             break;
//         {
//             printf("%d\n", i);
//         }
//     }
//     return 0;
// }

// while loop
// #include <stdio.h>

// int main()
// {
//     int i = 1;
//     while (i < 10)
//     {
//         if (i == 6)
//             break;
//         {
//             printf("%d\n", i);
//             i++;
//         }
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int i = 1;
    do
    {
        if (i == 6)
            break;
        {
            printf("%d\n", i);
            i++;
        }
    } while (i < 10);

    return 0;
}