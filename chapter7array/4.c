#include <stdio.h>

int main()
{
    char i = 44;
    char *j = &i;
    printf("The address of j is %u\n", j);
    j = j + 5;
    j = j - 5;
    printf("The address of j  after incremetion is : %u\n", j);
    printf("The address of j  after decremetion is : %u\n", j);
}