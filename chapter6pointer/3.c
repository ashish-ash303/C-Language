#include <stdio.h>

int main()
{
    int i = 4;
    int *x;
    x = &i;
    printf("The Value  of i is %u\n", i);
    printf("The Value  of i is %d\n", *x);
    printf("The address  of i is %u\n", x);
    printf("The address  of i is %u\n", &i);
    return 0;
}