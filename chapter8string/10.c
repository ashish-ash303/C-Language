#include <stdio.h>
int occurance(char st[], char c)
{
    char *ptr = st;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}

int main()
{
    char st[] = "Ashish";
    int count = occurance(st, "s");
    printf("occuramce= %d", count);
    return 0;
}