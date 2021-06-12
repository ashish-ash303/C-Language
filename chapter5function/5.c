#include <stdio.h>
float mass(float a);
int main()
{
    float force, n;
    printf("Enter the mass of an object ");
    scanf("%f", &n);
    force = mass(n);
    printf("The force on  body Which Has Mass 10 is %.2f", force);
    return 0;
}

float mass(float a)
{
    float result;
    result = a * 9.8;
    return result;
}