#include <Stdio.h>
void first();
// function prototype
int main()
{
    int i;
    printf("Initialising first function\n");
    first();
    // function Call
    printf("First fucntion finished his Work|n");
    return 0;
}
// function defination
void first()
{
    printf("This is first function\n");
}