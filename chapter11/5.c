#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    // int num=7;
    ptr = (int *)malloc(10 * sizeof(int)); // it returns pointer so We use

    for (int i = 0; i < 10; i++)
    {
        ptr[i] = 7 * (i + 1);
        printf(" the Value of 7X%d=%d \n", i + 1, ptr[i]);
    }
    //reallocation ptr using realloc()
    ptr = realloc(ptr, 15 * sizeof(int));
    printf("After reallocation");
    for (int i = 0; i < 15; i++)
    {
        ptr[i] = 7 * (i + 1);
        printf(" the Value of 7X%d=%d \n", i + 1, ptr[i]);
    }

    return 0;
}