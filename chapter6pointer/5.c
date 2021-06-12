//FInd 10 times of a number Using Pointer

#include <stdio.h>
void change(int *a);
int main()
{
    int x = 10;

    change(&x);
    return 0;
}
void change(int *a)
{
    int c = *a * 10; // Call by reference
    printf("The Value of c is %d\n", c);
}
