#include <stdio.h>

int main()
{
    int a = 2;
    int b = 4;

    printf("the value of 3*x-8*y %d \n", 3 * a - 8 * b);
    printf("the value of 8*b/3*a %d \n", 8 * b / 3 * a);
    // // 24/3*2,8*2=16 due to operator associvity
    //  decimal value is double in c ex:- .33333
    // printf("The Sum is %d", a + b);

    return 0;
}