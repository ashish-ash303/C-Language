#include <stdio.h>

int main()
{
    int i = 0;
    while (i <= 20)
    {
        if (i >= 10)
        {
            printf("The Value of i is %d\n", i);
        }
        i += 5;
    }
    return 0;
}