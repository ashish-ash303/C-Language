#include <stdio.h>

int main()
{
    FILE *ptr;
    int b, c;

    ptr = fopen("sample.txt", "r");
    fscanf(ptr, "%d"
                "%d",
           &b, &c);
    printf("THe two number is %d %d\n", b, c);
    return 0;
}
