#include <cs50.h>
#include <stdio.h>

int get_change(void);
int calculate_change(int n);

// main
int main(void)
{
    int n = get_change();

    calculate_change(n);
}

// get amount of change
int get_change(void)
{
    int input;

    do
    {
        input = get_int("Change owed: ");
    } 
    while (input < 0);
    
    return input; 
}

// calculate the least amount of coins to give the exect change
int calculate_change(int n)
{
    int change = 0;
    // 1 cent
    const int o = 1;
    // 5 cents
    const int f = 5;
    // 10 cents
    const int t = 10;
    // 25 cents
    const int tf = 25;

    change = 0;

    // amount of coins after division by 25 
    change += n / tf;
    n = n % tf;

    // amount of coins after division by 10 
    change += n / t;
    n = n % t;

    // amount of coins after division by 5 
    change += n / f;
    n = n % f;

    // previous amount + 1 cent coins 
    change += n;
    printf("%i\n", change);
}   
