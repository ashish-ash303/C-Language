#include <stdio.h>

int main()
{

    int n = 6, factorial = 1;

    for (int i = 1; i < n; i++)
    {
        factorial *= i;
    }
    printf("The factorial is %d is %d ", n, factorial);
    return 0;
}