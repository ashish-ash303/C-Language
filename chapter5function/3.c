#include <stdio.h>
int sum(int a, int b);
int main()
{
    int d;
    d = sum(2, 8);
    printf("The Value of sum %d", d);
    return 0;
}
int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}
