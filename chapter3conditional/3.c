#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;
    printf("Enter the num1\n");
    scanf("%d", &num1);
    printf("Enter the num2\n");
    scanf("%d", &num2);
    printf("Enter the num3\n");
    scanf("%d", &num3);
    printf("Enter the num4\n");
    scanf("%d", &num4);

    if (num1 > num2 && num1 > num3 && num1 > num4)
    {
        printf("Num1 is greater");
    }
    else if (num2 > num1 && num2 > num3 && num2 > num4)
    {
        printf("Num2 is greater");
    }
    else if (num3 > num1 && num3 > num2 && num3 > num4)
    {
        printf("Num3 is greater");
    }
    else if (num4 > num1 && num4 > num2 && num4 > num3)
    {
        printf("Num4 is greater");
    }
    return 0;
}