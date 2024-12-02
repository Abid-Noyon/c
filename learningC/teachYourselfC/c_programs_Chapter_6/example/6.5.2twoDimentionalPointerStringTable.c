#include<stdio.h>
#include <string.h>

char *p[][2]={
        "Red delicious", "red",
        "Golden delicious", "golden",
        "Winesap", "red",
        "Gala","reddish orange",
        "Lodi","green",
        "Mutsu", "yellow",
        "Cortland", "red",
        "Jonathan", "red",
        "", "",
    };
    
int main ()
{
    int i;
    char apple[80];
    printf("Enter name of apple: ");
    gets(apple);
    /**
     * This loop iterates through a two-dimensional pointer string table.
     * It starts from the first row and continues until it reaches a null character.
     * 
     * @param p The two-dimensional pointer string table.
     * @param i The index variable used in the loop.
     */
    for(i=0; *p[i][0]; i++)
    {
        if (!strcmp(apple, p[i][0]))
            printf("%s is %s\n", apple, p[i][1]);
    }
    
    return 0;
}
