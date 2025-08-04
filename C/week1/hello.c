#include <cs50.h>
#include <stdio.h>

// ask and print user's name
int main(void)
{
    // ask name
    string name = get_string("What is your name?\n");
    // print name
    printf("hello, %s\n", name);
}