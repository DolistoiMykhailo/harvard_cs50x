#include "include/cs50.h"
#include <stdio.h>

int get_input(void);

int main(void)
{
    int credit_card = get_input();
}

// get user's input
int get_input(void)
{
    long n;
    n = get_long("Enter card number: ");
    return n;
}

string is_valid(long n)
{
    int i = 0;
    long cc = n;
    while (cc > 0)
    {
        cc /= 10;
        i++;
    } 
    
    if (i != 13 && i != 15 && i != 16)
    {
        printf("INVALID\n");
        return 0;
    }

    
}
