#include <stdio.h>

int main()
{

    char c;
    printf("Enter the Character %c \n");
    scanf("%c", &c);

    if (c > 97 && c < 127)
    {
        printf("You entered the Small Character");
    }
    else
    {
        printf("You enterd the Invalid Character");
    }
    return 0;
}