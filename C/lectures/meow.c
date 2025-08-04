#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int i = 3;
    while (i > 0)
    {
        printf("while_meow\n");
        i--;
    }

    for (int i = 0; i < 3; i++)
    {
        printf("for_meow\n");
    }

    while (true)
    {
        printf("while_true_meow\n");
    }
}