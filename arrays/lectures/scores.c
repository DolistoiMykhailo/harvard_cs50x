#include "include/cs50.h"
#include <stdio.h>


float average(int sum, int user_input);

int main(void)
{
    int user_input = get_int("number of scores: ");
    
    int sum = 0;
    int scores[user_input];

    for (int i = 0; i < user_input; i++)
    {
        scores[i] = get_int("grade %i: ", i + 1);
        sum += scores[i];
    }

    printf("Average: %f\n", average(sum, user_input));
}

float average(int sum, int user_input)
{
    return (float)sum / user_input;
}
