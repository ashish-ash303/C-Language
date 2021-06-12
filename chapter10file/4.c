#include <stdio.h>

int main()
{
    FILE *ptr;

    // ptr = fopen("sample2.txt", "r");
    // printf("THe value of the character is %c\n", fgetc(ptr));// used to read character by character
    // printf("THe value of the character is %c\n", fgetc(ptr));
    // printf("THe value of the character is %c\n", fgetc(ptr));
    // printf("THe value of the character is %c\n", fgetc(ptr));
    // printf("THe value of the character is %c\n", fgetc(ptr));
    // printf("THe value of the character is %c\n", fgetc(ptr));
    // printf("THe value of the character is %c\n", fgetc(ptr));
    // printf("THe value of the character is %c\n", fgetc(ptr));

    ptr = fopen("sample3.txt", "w");
    putc('A', ptr); // Used to write character by character
    putc('s', ptr);
    putc('h', ptr);
    putc('h', ptr);
    putc('i', ptr);
    putc('s', ptr);
    putc('h', ptr);
    fclose(ptr);

    return 0;
}