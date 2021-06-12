// create a 2d  vector using structure in c

#include <stdio.h>
#include <string.h>
typedef struct vector
{
    int x;
    int y;

} ve;

int main()
{
    ve v1;
    v1.x = 44;
    v1.y = 22;
    printf("X is %d & y is %d\n", v1.x, v1.y);

    ve v2;
    v2.x = 43;
    v2.y = 23;

    printf("X is %d & y is %d\n", v2.x, v2.y);
    return 0;
}