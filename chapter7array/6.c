// array inside Fuction
#include <stdio.h>
void print(int *ptr, int n);
// void print(int ptr[], int n);
int main()
{
    int arr[] = {
        22,
        33,
        44,
        55,
        55,
    };
    print(arr, 5);
    printf("%d", arr[1]);
    return 0;
}

void print(int *ptr, int n)
{
    for (int i = 0; i < 4; i++)
    {
        printf("THe Value  of element %d is %d\n", i + 1, *(ptr + i));
    }
    // ptr[1] = 444; IT can change the Value
}
