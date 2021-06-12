// typedef keyword  :- used to make own datatype, custom datatype
#include <stdio.h>
#include <string.h>
typedef struct employee
{
    int code;
    float salary;
    char name[10];
} em;
void show(em emp)
{
    printf("%d\n", emp.code);
    printf("%.2f\n", emp.salary);
    printf("%s\n", emp.name);
}
int main()
{
    em e1;
    em *ptr;
    ptr = &e1;
    // (*ptr).code = 101;Same
    ptr->code = 191;
    ptr->salary = 191;
    strcpy(ptr->name, "Ashish");
    show(e1);

    return 0;
}