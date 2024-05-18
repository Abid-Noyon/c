#include <stdio.h>
int main()
{
    char ch;
    int digit, punc, letter;

    printf("Enter any character, Press 'Enter' to stop: ");
    digit = 0;
    punc = 0;
    letter = 0;
    do
    {
        ch = getchar();
        switch (ch)
        {
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case '0':
            digit++;
            break;
        case '.':
        case ',':
        case '?':
        case '!':
        case ':':
        case ';':
            punc++;
            break;
        default:
            letter++;
        }
    } while (ch != '\r' && ch != '\n');
    printf("\ndigit: %d\n", digit);
    printf("Punctuation: %d\n", punc);
    printf("letter: %d\n", letter);
    return 0;
}

// ch != '\n' && ch != '\r'

// The do-while loop wasn't terminating correctly because it was checking for \r (carriage return) instead of \n (newline). Pressing Enter typically enters \n followed by \r depending on the operating system. However, getchar() only reads one character at a time, and in this case, it might only capture the \n in the first iteration, never reaching the \r check.

// \n Check Added: The do-while loop condition now checks for both \n and \r. This ensures the loop terminates even on systems that handle Enter

//_digits_alpha_character_counter_switch
// 3.10.1_goto_while_loop.c