#include <stdio.h>

int main()
{
    int modNumber = -50;
    if (modNumber < 0)
        modNumber = -modNumber;
    printf("The absolute value is: %d\n", modNumber);
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     char Name[20] = "Abid Noyon";
//     int age = 19;
//     if (age >= 18)
//         printf("You name is %s and you are %d\n. You can drive car.", Name, age);
//     return 0;
// }