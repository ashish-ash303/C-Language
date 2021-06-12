#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("The size of integeru want to enter \n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int)); // it returns pointer so We use
    for (int i = 0; i < n; i++)
    {
        printf("Enter the Value of %d element is \n", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf(" the Value of %d element is %d\n", i + 1, ptr[i]);
    }
    return 0;
}