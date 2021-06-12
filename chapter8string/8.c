//slice

#include <stdio.h>
void slice(char *st, int n, int m)
{
    int i = 0;
    while ((m + 1) < n)
    {
        st[i] = st[i + m];
        i++;
    }
    st[i] = '\0';
}
int main()
{
    char st[] = "Ashish";
    slice(st, 1, 4);
    printf("%s", st);
    return 0;
}