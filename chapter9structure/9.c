#include <stdio.h>
#include <string.h>
typedef struct bankprofile
{
    int accountnumber;
    char name[30];
    int ifsc;
} bank;

int main()
{
    bank e1;
    e1.accountnumber = 1114;
    e1.ifsc = 1111144;
    strcpy(e1.name, "Ashish");
    printf("%d\n", e1.accountnumber);
    printf("%d\n", e1.ifsc);
    printf("%s\n", e1.name);

    return 0;
}