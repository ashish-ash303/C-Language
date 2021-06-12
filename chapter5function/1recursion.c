#include <stdio.h>
int factorial(int a);
int main()
{
    int d;

    d = factorial(4);
    printf("The  factorial of 4 id %d", d);
    return 0;
}
int factorial(int a)
{
    printf("getting  factorial %d\n", a);
    if (a == 1 || a == 0)
    {
        return 1;
    }
    else
    {
        return a * factorial(a - 1);
    }
}