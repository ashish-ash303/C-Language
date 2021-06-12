#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number\t");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("The number is  Even \n", a);
    }
    else
    {
        printf("The number is Odd\n");
    }
}