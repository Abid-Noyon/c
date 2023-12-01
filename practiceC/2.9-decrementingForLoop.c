// #include <stdio.h>
// int main()
// {
//     for (int i = 4; i; i--) // here no condition in i so it will print any non zero number
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     for (int i = 4; i >= -4; i--) // for printing negativ numbers
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }

// printing n natural number in reverse order.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = n; i >= 0; i--) // for printing negativ numbers
    {
        printf("%d\n", i);
    }
    return 0;
}