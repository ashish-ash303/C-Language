#include <stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);
int main()
{
    int x = 3, y = 4;

    printf("The Value of x & y is %d and %d\n", x, y);
    wrong_swap(x, y); // This Will not Work Bcz here we are Calling the Variable by their Value
    swap(&x, &y);     //This Will Work bcz here we are Calling the Variable by their address
    printf("The Value of x & y after the Swap is  %d and %d\n", x, y);
    return 0;
}
void wrong_swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = a;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
