// write a program to find whether a no is divisible  by 97 or not

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number to check whether it is divisble by 97 or not\n");
    scanf("%d", &num);
    printf("The remainder of the number is %d\n", num % 97);

    return 0;
}