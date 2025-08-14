#include "cs50_lib/cs50.h"
#include <stdio.h>

int get_size(void);
void print_grid(int n);

int main(void)
{
    // Get size of grid
    int size = get_size();
    
    // Print nxn grid 
    print_grid(size);
}

int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    return n;
}

void print_grid(int n)
{
    for (int rows = 0; rows < n; rows++)
    {
        for (int columns = 0; columns < n; columns++)
        {
            printf("# ");
        }
        printf("\n");
    }
}