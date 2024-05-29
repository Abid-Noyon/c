/* #include <stdio.h>

int main()
{
    int a[10], i, ev = 0, od = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            ev = ev + a[i];
        }
        else
            od = od + a[i];
    }
    printf("sum of odd integers %d and sum of even integers %d", od, ev);

    return 0;
} */

#include <stdio.h>

int main()
{
    int arr[10], even = 0, odd = 0;
    printf("Enter 10 integers: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even += arr[i];
        }
        else
        {
            odd += arr[i];
        }
    }
    printf("Sum of even integers: %d\nSum of odd integers: %d", even, odd);
    return 0;
}
//  dir learningC/teachYourselfC/c_programs_Chapter_6/review-exercise