
#include <stdio.h>

#define MAXLEN 110

int isPrime(int n); //判断一个整数是否是质数，是则返回1，否则返回0
int getResult(char word[]);

int main()
{
    char word[MAXLEN];

    scanf("%s", word);
    printf("%d\n", getResult(word));

    return 0;
}

/* 请在这里填写答案 */
int getResult(char word[])
{
    int count[26] = {0}, max, min, i = 0;
    while (word[i])
    {
        count[word[i] - 'a']++;
        i++;
    }
    for (i = 0; i < 26; i++)
    {
        if (count[i])
        {
            break;
        }
    }
    max = count[i];
    min = count[i];
    for (; i < 26; i++)
    {
        if (max < count[i])
        {
            max = count[i];
        }
        if (count[i] && min > count[i])
        {
            min = count[i];
        }
    }
    return (isPrime(max - min) ? max - min : -1);
}
