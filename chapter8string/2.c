#include <stdio.h>
// Print Character Of string
int main()
{
    // char str[] = {'A', 's', 'h', 'i', 's', 'h', '\0'};
    char str[] = "Ashish";
    char *ptr = str;
    printf("%s \n", ptr); //Another Way
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}