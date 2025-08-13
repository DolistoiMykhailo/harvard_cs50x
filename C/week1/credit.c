#include <cs50.h>
#include <stdio.h>

long get_input(void);
string is_valid(long n);

int main(void)
{
    long credit_card = get_input();
    printf ("%s\n", is_valid(credit_card));
}

long get_input(void)
{
    long n = get_long("user input: ");
    return n;
}

string is_valid(long n)
{
    int sum_odd = 0;
    int sum_even = 0;
    int pos = 0;

    long n_temp1 = n;
    long n_temp2 = n;
    int length = 0;
    
    // get length
    while (n_temp1 > 0)
    {
        n_temp1 /= 10;
        length++;
    }
    // printf("%i\n", length);

    // luhn algorithm
    while (n > 0)
    {
        long digit = n % 10;
        n /= 10;

        // printf("%li\n", digit);

        if (pos % 2 == 1)
        {
            if (digit >= 5)
            {
                sum_even += ((digit * 2) % 10) + 1;
            }
            else
            {
                sum_even += digit * 2;
            }
        }
        else
        {
            sum_odd += digit;
        }
        pos++;
    }

    // printf("%i, %i, %i\n", sum_even, sum_odd, sum_even + sum_odd);

    // check if is_valid
    if ((sum_even + sum_odd) % 10 != 0)
    {
        return "INVALID";
    }

    long first_two = n_temp2;

    while (first_two >= 100)
    {
        first_two /= 10;
    }

    long first_one = first_two / 10;

    // printf("%i, %i, %i", first_two, first_one, length);

    if (length == 15 && (first_two == 34 || first_two == 37))
    {
        return "AMEX";
    }

    else if (length == 16 && (first_two >= 51 && first_two <= 55))
    {
        return "MASTERCARD";
    }

    else if ((length == 13 || length == 16) && first_one == 4)
    {
        return "VISA";
    }

    else
    {
        return "INVALID";
    }
}
