#include <stdio.h>

int main()
{
    int i = 1, sum = 0;
    while (i < 11)
    {
        sum += i;
        i++;
    }
    printf("THe Sum is %d\n", sum);
    return 0;
}
