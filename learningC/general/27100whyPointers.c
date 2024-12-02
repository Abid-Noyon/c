// why pointers
//  #include <stdio.h>
//  void change_value(int nb); // number change function declaration.

// int main()
// {
//     int nb;
//     nb = 42;          // this stores in the main function block same name same value
//     change_value(nb); // calling change_value function.
//     printf("%d\n", nb);
// }
// void change_value(int nb) // change_value funtion
// {
//     nb = 1337; // this stores in the change_value function same name as nb and same value as 42. this this isn't change_value of nb. there's come pointers.
// }

// so, to change value we have to use pointers.

// #include <stdio.h>
// void change_value(int *nb); // number change function declaration. it takes a pointer to an integer.

// int main()
// {
//     int nb;
//     nb = 42;           // this stores in the main function block same name same value
//     change_value(&nb); // calling change_value function with address. And it will pass value by reference
//     printf("%d\n", nb);
// }
// void change_value(int *nb) // change_value funtion
// {
//     *nb = 1337; // the program initializes an integer variable nb with the value 42 in the main function. It then calls the change_value function, passing the address of nb. Inside change_value, the value at the address pointed to by the parameter is changed to 1337. Finally, the modified value of nb is printed in the main function, resulting in the output: 1337.
// }

// #include <stdio.h>
// void change_value(int *nb);
// int main()
// {
//     int nb;
//     nb = 42;
//     change_value(&nb);
//     printf("%d\n", nb);
//     return 0;
// }

// void change_value(int *foobar)
// {
//     *foobar = 1337;
// }

#include <stdio.h>

void swap(int *n, int *n1)
{
    int temp;

    temp = *n;
    *n = *n1;
    *n1 = temp;
}

int main()
{
    int a, b;
    a = 42;
    b = 1337;
    printf("a=%d\tb=%d\n", a, b);
    swap(&a, &b);
    printf("a=%d\tb=%d\n", a, b);
    return 0;
}