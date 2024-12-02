#include <stdio.h>
#include <conio.h>
// feet_to_meters\n2. meters_to_feet\n3. ounces_to_pounds\n4. pounds_to_ounces

int feet_to_meters();
int meters_to_feet();
int ounces_to_pounds();
int pounds_to_ounces();

int main()
{
    char ch;
    // printf("What do you want? \n");
    do
    {
        printf("\nConvert\n1. feet to meters\n2. meters to feet\n3. ounces to pounds\n4. pounds to ounces\n5. Quit\n\nEnter number of your choice: ");
        ch = getche();
        switch (ch)
        {
        case '1':
            feet_to_meters();
            break;
        case '2':
            meters_to_feet();
            break;
        case '3':
            ounces_to_pounds();
            break;
        case '4':
            pounds_to_ounces();
            break;

            // default:
            //     printf("Wrong entry. ");
            //     break;
        }
    } while (ch != '5');

    return 0;
}

int feet_to_meters()
{
    printf("\n\nfeet_to_meters is: \n");
}
int meters_to_feet()
{
    printf("\n\nmeters_to_feet is: \n");
}
int ounces_to_pounds()
{
    printf("\n\nounces_to_pounds is: \n");
}
int pounds_to_ounces()
{
    printf("\n\npounds_to_ounces is: \n");
}