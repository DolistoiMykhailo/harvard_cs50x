#include "include/cs50.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");

    printf("After: ");
    // for (int i = 0; i < strlen(s); i++)
    // {
    //     if (s[i] >= 'a' && s[i] <= 'z')
    //     {
    //         printf("%c", s[i] - 32);
    //     }
    //     else
    //     {
    //         printf("%c", s[i]);
    //     }
    // }
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}