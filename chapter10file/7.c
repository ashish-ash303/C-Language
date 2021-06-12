#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    printf("Enter the table number");
    scanf("%d", &num);

    ptr = fopen("sample4.txt", "w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr, "%dx%d=%d\n", num, i + 1, num * (i + 1));
    }

    fclose(ptr);
    fprintf(ptr, "Okk Report ");

    return 0;
}