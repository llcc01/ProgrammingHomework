#include <stdio.h>
int count[128] = {0}; //浪费空间:)
int main()
{
    char ch;
    char i;
    while ((ch = getchar()) != '\n')
    {
        count[ch]++;
    }
    for (i = 'A'; i <= 'Z'; i++)
    {
        if (count[i])
        {
            printf("The character %c has presented %d times.\n", i, count[i]);
        }
    }
    for (i = 'a'; i <= 'z'; i++)
    {
        if (count[i])
        {
            printf("The character %c has presented %d times.\n", i, count[i]);
        }
    }
}