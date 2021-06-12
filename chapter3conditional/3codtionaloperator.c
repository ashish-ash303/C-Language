#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value for a \t");
    scanf("%d", &a);
    if (a > 5)
    {
        printf(" A is greater than 5");
    }
    else
    {
        printf(" A is less than 5");
    }
    // (a > 5) ? printf(" A is greater than 5") : printf(" A is less than 5"); Ternary Way

    return 0;
}