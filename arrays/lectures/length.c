#include "include/cs50.h"
#include <stdio.h>
#include <string.h> 

int main(void)
{
    // string name = get_string("What is your name? ");

    // int length = 0;
    // while (name[length] != '\0')
    // {
    //     length++;
    // }
   
    // printf("%i\n", length);

    int length = strlen(get_string("What is your name? "));

    printf("%i\n", length);
}
