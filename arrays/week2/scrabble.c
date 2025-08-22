#include "include/cs50.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// letter scores
int POINTS[26] = {
    1, 3, 3, 2, 1, 4, 2, 4, 1, 8,
    5, 1, 3, 1, 1, 3, 10, 1, 1, 1,
    1, 4, 4, 8, 4, 10
};

// predeclaration
int calc_score(char *word);
void compare_score(int sum1, int sum2);

// main reads two words from players and compares their scores
int main(void)
{
    char *words[2];
    words[0] = get_string("Player 1: ");
    words[1] = get_string("Player 2: ");

    int score1 = calc_score(words[0]);
    int score2 = calc_score(words[1]);

    compare_score(score1, score2);
}
// a func, that calculates the Scrabble score of a word using the POINTS lookup table
int calc_score(char *word)
{
    int sum = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (isalpha(word[i]))
        {
            char lower = tolower(word[i]);
            sum += POINTS[lower - 'a'];
        }
    }
    return sum;
}

// a function, that compares two scores and prints the winner
void compare_score(int sum1, int sum2)
{
    if (sum1 > sum2)
        printf("Player 1 wins!\n");
    else if (sum2 > sum1)
        printf("Player 2 wins!\n");
    else
        printf("Tie!\n");
}
