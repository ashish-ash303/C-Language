#include <stdio.h>
void change(int *arr, int n)
{
    int temp;
    for (int i = 0; i < (n / 2); i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i + 1];
        arr[n - i + 1] = temp;
        // printf("The Value of %d  element is %d\n", i, arr[i]);
    }
}
int main()
{
    int arr[] = {3, 4, 5, 2, 1};
    change(arr, 5);
    for (int i = 0; i < 5; i++)
    {

        printf("The Value of %d  element is %d\n", i, arr[i]);
    }
    return 0;
}