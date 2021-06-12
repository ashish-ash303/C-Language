#include <stdio.h>

int main()
{
    int skip = 5;

    for (int i = 0; i < 10; i++)
    {
        if (i == skip)
        {
            continue;
        }
        else
        {
            printf("The Value of i is %d\n", i);
        }
    }
    return 0;
}