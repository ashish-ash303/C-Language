#include <Stdio.h>
#include <string.h>

int length(char *st, int lenght)

{
    char *ptr = st;
    int len = 0;
    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }
    return len;
}
int main()
{
    char st[] = "Ashish";
    int l = strlen(st);
    printf("The Length of the string is %d", l);
    return 0;
}