#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a, b;

    a = 8;
    b = a;

    // clear concept it occurs because of garbage value

    printf("The value of a %d \n", a);
    printf("The value of b %d \n", b);
    printf("The value of a+ b is :- %d \n", a + b);
    printf("The value of a*b is :- %d \n", a * b);
    printf("The value of a/ b is :- %d \n", a / b);
    printf("when 5 is divided  by 2 is gives remainder :- %d \n", 5 % 2);
    printf("when 5 is divided  by -2 is gives remainder :- %d \n", 5 % -2);
    // because it always take the sign of numerator
    printf("the power of 4^5 :- %f \n", pow(4, 5));

    printf("the remainder  of 5/2 :- %d \n", 5 / 2);
    // integer
    printf("the power of 5.2/2 :- %f \n", 5.2 / 2);
    // float
    printf("the power of 5.2/2.1 :- %f \n", 5.2 / 2.1);
    // float
    printf("the power of 3.0/9 :- %f \n", 3.0 / 9);
    // float

    return 0;
}