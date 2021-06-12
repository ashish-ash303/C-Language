// strcat :- No Space
// strcmp:- compare two Value
#include <stdio.h>
#include <string.h>

int main()
{
    char st[45] = "Ashish";
    char *st2 = "Srivastav";
    strcat(st, st2);
    int val = strcmp(st, st2);
    printf("Now the st1 is %s", st);
    printf("Now the val is %d", val);
    return 0;
}
