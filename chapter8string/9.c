// Encrypt && decrypt

#include <stdio.h>
// void encrypt(char *c)
// {
//     char *ptr = c;
//     while (*ptr != '\0')
//     {
//         *ptr = *ptr + 1;
//         ptr++;
//     }
// }

void decrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}
int main()
{
    // char c[] = "Ashish";
    char c[] = " Btijti";
    // encrypt(c);
    decrypt(c);
    // printf("Your Encrypted message is %s:", c);
    printf("Your decrypted message is %s", c);
    return 0;
}