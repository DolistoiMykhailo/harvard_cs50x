#include "include/cs50.h"
#include <stdio.h>

int get_size();
void print_pyramid(int n);

// main
int main(void)
{
    int size = get_size();
    
    print_pyramid(size);
}

// get size
int get_size(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1);
    return n;
}

// print pyramid
void print_pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        // loop for spaces
        for (int k = n - i; k > 1; k--)
        {
            printf(" ");
        }

        // loop for hashes
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        
        printf(" ");
        
        // loop for hashes
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

        for (int k = n - i; k > 1; k--)
        {
            printf(" ");
        }

        printf("\n");
    }
}