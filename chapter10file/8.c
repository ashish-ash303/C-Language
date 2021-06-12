#include <stdio.h>

int main()
{
    FILE *ptr;
    FILE *ptr1;
    ptr = fopen("sample2.txt", "r");
    ptr = fopen("sample5.txt", "w");
    char c = fgetc(ptr);
    while (c != EOF)
    {
        fputc(c, ptr1);
        fputc(c, ptr1);
        c = fgetc(ptr);
    }

    fclose(ptr);

    return 0;
}