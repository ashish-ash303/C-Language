#include <stdio.h>

int main()
{
    FILE *ptr;
    char c;
    ptr = fopen("sample2.txt", "r");
    c = fgetc(ptr);
    while (c != EOF) // EOF :-End of file
    {
        printf("%c", c);
        c = fgetc(ptr); // to get the file character
    }
    return 0;
}