// sum of two vector
#include <stdio.h>
#include <string.h>
typedef struct vector
{
    int x;
    int y;
};
struct vector sumvector(struct vector v1, struct vector v2)
{
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
}
int main()
{
    struct vector v1, sum;
    v1.x = 44;
    v1.y = 22;
    printf("X is %d & y is %d\n", v1.x, v1.y);

    struct vector v2;
    v2.x = 43;
    v2.y = 23;

    printf("X is %d & y is %d\n", v2.x, v2.y);
    sum = sumvector(v1, v2);
    printf("x dim of result is %d & y dim is %d is \n", sum.x, sum.y);
    return 0;
}