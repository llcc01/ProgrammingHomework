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

int isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int getResult(char word[])
{
    char *letter = word;
    int temp;
    int num = 0;
    int num_array[MAXLEN] = {0};
    int max, min;
    while (*letter != '\0')
    {
        char *p = word;
        temp = *letter;
        while (*p != '\0')
        {
            if (temp == *p)
            {
                num_array[num]++;
            }
            p++;
        }
        num++;
        letter++;
    }
    temp = num_array[0];
    for (int i = 0; i < num; i++)
    {
        if (temp < num_array[i])
        {
            temp = num_array[i];
        }
    }
    max = temp;
    temp = num_array[0];
    for (int i = 0; i < num; i++)
    {
        if (temp > num_array[i])
        {
            temp = num_array[i];
        }
    }
    min = temp;
    if (isPrime(max - min) == 1)
    {
        return max - min;
    }
    else
    {
        return -1;
    }
}