#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    printf("The size of integer in pc is %d\n", sizeof(int));
    ptr = (int *)calloc(6, sizeof(int)); // it returns pointer so We use
    // for (int i = 0; i < 6; i++)
    // {
    //     printf("Enter the Value of %d element is \n", i + 1);
    //     scanf("%d", &ptr[i]);
    // }
    for (int i = 0; i < 6; i++)
    {
        printf(" the Value of %d element is %d\n", i + 1, ptr[i]);
    }
    return 0;
}