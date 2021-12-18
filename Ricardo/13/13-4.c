#include <stdio.h>

int getString(char *source, char *strPtr[]);

int main()
{
    char str[100005];
    char *strPtr[1005] = {0};
    int i, num;

    gets(str);
    num = getString(str, strPtr);
    for (i = 0; i < num; i++)
        puts(strPtr[i]);

    return 0;
}

int getString(char *source, char *strPtr[])
{
    char *p = source;
    int pos;

    //将指针数组的第一位填给第一个单词
    //需要注意第一个字符是不是空格
    if (*p != ' ')
    {
        pos = 1;
        strPtr[0] = p;
    }
    else
    {
        pos = 0;
    }

    while (*p != '\0')
    {
        if (*p == ' ')
        {
            *p = '\0';
            char *temp = p + 1;
            if (*temp != '\0' && *temp != ' ')
            {
                strPtr[pos] = temp;
                pos++;
            }
        }
        p++;
    }

    return pos;
}