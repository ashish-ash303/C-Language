#include <stdio.h>
void good(int i);
int main()
{
    int i;
    printf("The address of i is %u\n", i);

    good(i); //here we only call the function

    return 0;
}
void good(int i)
{
    printf("The address of i  inside the fuction is %u\n", &i);
}