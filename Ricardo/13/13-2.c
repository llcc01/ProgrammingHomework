#include <stdio.h>
#include <stdlib.h>

char **create1(int n);
void create2(char **strPtr, int n);
void fill(char **strPtr, int n);

int main()
{
    int n, i;
    char **strPtr;

    scanf("%d", &n);
    strPtr = create1(n * 2 + 1);
    create2(strPtr, n * 2 + 1);
    fill(strPtr, n);

    for (i = 0; i < 2 * n + 1; i++)
    {
        printf("%s\n", strPtr[i]);
    }

    for (i = 0; i < n * 2 + 1; i++)
        free(strPtr[i]);
    free(strPtr);

    return 0;
}

char **create1(int n)
{
    char **p = malloc(sizeof(char *) * n);
    return p;
}

void create2(char **strPtr, int n)
{
    for (int i = 0; i < n; i++)
    {
        *strPtr = malloc(sizeof(char) * (n + 1));
        strPtr++;
    }
}

void fill(char **strPtr, int n)
{
    if (n != 0)
    {
        char **p = strPtr;
        char *raw = *p;
        //先填第一行
        for (int i = 0; i < n; i++)
        {
            **p = ' ';
            *p = *p + 1;
        }
        **p = 'X';
        *p = *p + 1;
        **p = '\0';
        //这里要把指针的位置复原到mallco函数返回的值，否则free函数不给释放
        *p = raw;
        //填上中间的部分
        for (int i = 1; i < n; i++)
        {
            p++;
            raw = *p;
            for (int j = 0; j < n - i; j++)
            {
                **p = ' ';
                *p = *p + 1;
            }
            **p = '/';
            for (int j = 1; j < i * 2; j++)
            {
                *p = *p + 1;
                **p = ' ';
            }
            *p = *p + 1;
            **p = '\\';
            *p = *p + 1;
            **p = '\0';
            *p = raw;
        }
        //填中间的那一行
        p++;
        raw = *p;
        **p = 'X';
        for (int i = 0; i < n * 2 - 1; i++)
        {
            *p = *p + 1;
            **p = ' ';
        }
        *p = *p + 1;
        **p = 'X';
        *p = *p + 1;
        **p = '\0';
        *p = raw;
        //填下中间的部分
        for (int i = 1; i < n; i++)
        {
            p++;
            raw = *p;
            for (int j = 0; j < i; j++)
            {
                **p = ' ';
                *p = *p + 1;
            }
            **p = '\\';
            for (int j = 1; j < (n - i) * 2; j++)
            {
                *p = *p + 1;
                **p = ' ';
            }
            *p = *p + 1;
            **p = '/';
            *p = *p + 1;
            **p = '\0';
            *p = raw;
        }
        //填最后一行
        p++;
        raw = *p;
        for (int i = 0; i < n; i++)
        {
            **p = ' ';
            *p = *p + 1;
        }
        **p = 'X';
        *p = *p + 1;
        **p = '\0';
        *p = raw;
    }
    else
    {
        //处理输入值为0的特殊情况
        char *raw = *strPtr;
        **strPtr = 'X';
        *strPtr = *strPtr + 1;
        **strPtr = '\0';
        *strPtr = raw;
    }
}
