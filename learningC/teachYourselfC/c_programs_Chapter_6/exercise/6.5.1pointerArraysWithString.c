#include <stdio.h>
#include <string.h>

char *p[3] = {"Yes", "No", "Maybe. Rephrase the question"}; // global pointer array

int main()
{
    char str[80];
    printf("Enter your question:\n");
    gets(str); // instead we can use fgets, read below for details

    printf(p[strlen(str) % 3]);

    return 0;
}

// improved version


/* #include <stdio.h>
#include <string.h>

char *p[3] = {"Yes", "No", "Maybe. Rephrase the question"}; // Corrected global pointer array

int main()
{
    char str[80];
    printf("Enter your question:\n");
    fgets(str, sizeof(str), stdin); // Replaced gets with fgets

    // Using printf safely
    printf("%s\n", p[strlen(str) % 3]);

    return 0;
} */

/*
**`gets` function**: It reads a line from `stdin` into the buffer pointed to by `str` until a terminating newline or EOF, which it replaces with a null byte (`\0`). `gets` does not store the newline character in the buffer.

1. **`fgets` function**: It reads in at most one less than `sizeof(str)` characters from `stdin` into the buffer pointed to by `str` until a newline (`\n`) or EOF. The newline, if any, is retained. If a newline is read, it is stored into the buffer. A terminating null byte (`\0`) is stored after the last character in the buffer.

Given the input "what?", the length of the string as processed by each function differs:

- With `gets`, the input "what?" would be stored as `what?\0`, making the length 5.
- With `fgets`, the input would be stored as `what?\n\0`, making the length 6.

Since the output depends on the length of the input string (`strlen(str) % 3`), the presence of the newline character in the version using `fgets` changes the result of this calculation, potentially leading to a different index being selected from the `p` array, and thus a different output. */

// Third version

/* #include <stdio.h>
#include <string.h>

char *p[3] = {"Yes", "No", "Maybe. Rephrase the question"}; // Corrected global pointer array

int main()
{
    char str[80];
    printf("Enter your question:\n");
    fgets(str, sizeof(str), stdin); // Replaced gets with fgets

    // Remove newline character if present
    size_t len = strlen(str); // size_t is an unsigned data type used to represent the size of objects in bytes. It is commonly used for array indexing and loop counting.
    if (len > 0 && str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    }

    // Using printf safely
    printf("%s\n", p[strlen(str) % 3]);

    return 0;
} */
