#include <stdio.h>

int main()
{
    int i = 34;
    int *j = &i;
    //  It is a int pointer Which Storex  the addres of i
    int **k;
    k = &j;
    printf("The Value of i is %d\n", i);
    // Here we are finding the Value of i i.e, 34
    printf("The Value of i is %d\n", *j);
    // Here we getting the Value of i in different Way Using Pointer bcz *j Is equal to&i
    printf("The address of i is %u\n", &i);
    // Here We are getting the address of i by Using &i Which is equal to *j  and \u is Used to get the Pointer Value
    printf("The address of j is %u\n", &j);
    // Accesing the address  of j
    printf("The Value of j is %u\n", *(&j));
    // Accesing the  Value  of j
    printf("The Value of j is %u\n", &k);
    // Here We  are getting the  address  of &k
    return 0;
}