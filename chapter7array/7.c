// Multidimensional Array

#include <stdio.h>

int main()
{
    int student = 3;
    int subject = 5;
    int marks[3][5];
    for (int i = 0; i < student; i++)
    {
        for (int j = 0; j < subject; j++)
        {
            printf("Enter the marks of Student %d and in subject   %d \n", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    for (int i = 0; i < student; i++)
    {
        for (int j = 0; j < subject; j++)
        {
            printf(" the marks of Student %d and in subject   %d \n", i + 1, j + 1);
        }
    }

    return 0;
}