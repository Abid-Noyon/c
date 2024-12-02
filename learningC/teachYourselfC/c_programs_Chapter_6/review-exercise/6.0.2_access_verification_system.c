/* #include <stdio.h>

int main ()
{
    char pass[10]="Tristan", tr[10];
    int i;
    printf("Enter password: ");
    for(i=1;i<=3;i++)
    {
        scanf("%s",&tr);
        if( pass[0]==tr[0] && pass[1]==tr[1] && pass[2]==tr[2] && pass[3]==tr[3] && pass[4]==tr[4] && pass[5]==tr[5] && pass[6]==tr[6])
        {
            printf("Log-on successful");
            return 0;
        }
        else printf("try again\n");
    }
    printf("Access denied");
    return 0;
} */

/* #include <stdio.h>
#include <string.h>

int main()
{
    char password[] = "Tristan", input[24];
    printf("Enter password: ");
    int status = 0;
    for (int i = 0; i < 3; i++)
    {
        gets(input);
        if(!strcmp(password, input))
        {
            printf("Log-on successful\n");
            status = 1;
            return 0;
        }
        else
        {
            printf("Try again\n");
        }
    }
    if(!status)
    {
        printf("Access denied\n");
    }
    return 0;
} */

// practice 3
// login system

/**
 * @file 6.0.2_access_verification_system.c
 * @brief This program implements an access verification system that prompts the user for a password and verifies it.
 *        The user has three attempts to enter the correct password. If the password is correct, the program displays
 *        "Log on successful." Otherwise, it displays "Try again." After three unsuccessful attempts, the program
 *        displays "Access Denied."
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char password[] = "Tristan", inputPas[30]; // Declare variables for password and user input
    int status = 0; // Variable to track login status

    for (int i = 0; i < 3; i++) // Loop for three login attempts
    {
        printf("Enter password: "); // Prompt the user for password
        gets(inputPas); // Read user input

        if (!strcmp(inputPas, password)) // Compare user input with password
        {
            printf("Log on successful.\n"); // Display success message
            status = 1; // Set login status to successful
            return 0; // Exit the program
        }
        else
        {
            printf("Try again.\n"); // Display error message
        }
    }

    if (!status) // Check if login status is still unsuccessful
    {
        printf("Access Denied.\n"); // Display access denied message
    }

    return 0; // Exit the program
}
