#include <stdio.h>

void goodmorning();
void goodafternoon();
void goodnight();

int main()
{
    goodmorning();
    goodafternoon();
    goodnight();
    return 0;
}
void goodmorning()
{
    printf("Good Morning !!!\n");
    // goodafternoon(); This is also true
    // goodnight();
}
void goodafternoon()
{
    printf("Good Afternoon !!!\n");
}
void goodnight()
{
    printf("Good Night!!!\n");
}