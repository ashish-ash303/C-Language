#include <stdio.h>

int main()
{
    FILE *ptr;
    int num = 88;

    ptr = fopen("sample1.txt", "w");
    fprintf(ptr, "The number is %d\n", num);
    fprintf(ptr, "Okk Report ");
    fclose(ptr);

    return 0;
}