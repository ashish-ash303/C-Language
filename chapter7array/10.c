// Multiplicationn table
#include <stdio.h>
void tableprint(int *table, int num, int n)
{
    for (int i = 0; i < n; i++)
    {
        table[i] = num * (i + 1);
        printf("%dX%d=%d\n", num, i + 1, table[i]);
    }
    printf("******************************************\n\n");
}

int main()
{
    int table[3][10];
    tableprint(table[0], 2, 10);
    tableprint(table[1], 7, 10);
    tableprint(table[2], 9, 10);

    // for (int i = 0; i < 10; i++)
    // {
    //     table[0][i] = 2 * (i + 1);
    //     printf("2X%d=%d\n", i + 1, table[0][i]);
    // }
    // printf("******************************************\n");

    // for (int i = 0; i < 10; i++)
    // {
    //     table[1][i] = 7 * (i + 1);
    //     printf("7x%d=%d\n", i + 1, table[1][i]);
    // }

    // printf("******************************************\n");

    // for (int i = 0; i < 10; i++)
    // {
    //     table[2][i] = 9 * (i + 1);
    //     printf("9x%d=%d\n", i + 1, table[2][i]);
    // // }
    return 0;
}