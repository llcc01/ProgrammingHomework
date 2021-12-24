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

/* 请在这里填写答案 */
int getScore(char *s)
{
    int score = 0;
    while (*s)
    {
        switch (*s)
        {
        case 'W':
            score += 3;
            break;
        case 'D':
            score += 1;
            break;
        }
        s++;
    }
    return score;
}