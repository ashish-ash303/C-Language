// input function
#include <stdio.h>

int main()
{
    char s[34];
    printf("Enter Your Name ");
    scanf("%s", s); //Cannot get multistring .
    gets(s);        //can get multi word string
    puts(s);        // print the  string && can send the cursor in next line
    printf("Your Name is :%s\n", s);
    return 0;
}
