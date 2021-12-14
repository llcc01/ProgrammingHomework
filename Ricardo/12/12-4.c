#include <stdio.h>

#define MAX 48

int getScore(char *s);

int main()
{
    char input[MAX];
    int score;

    scanf("%s", input);
    score = getScore(input);
    printf("%d\n", score);

    return 0;
}

int getScore(char *s)
{
    int score = 0;
    while (*s != '\0')
    {
        switch (*s)
        {
        case 'W':
            score = score + 3;
            break;
        case 'D':
            score++;
            break;
        }
        s++;
    }
    return score;
}