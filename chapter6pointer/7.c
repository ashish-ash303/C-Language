#include <stdio.h>

int main()
{
    int i = 43;
    int *j = &i;
    int **k = &j;
    printf("The address of i is %d\n", **k);
    return 0;
}