#include <stdio.h>

//将字符串str中的内容反向打印的函数
void reversePrint(char str[]);

int main()
{
    char s[100];

    scanf("%s", s);
    reversePrint(s);
    printf("\n");

    return 0;
}

/* 请在这里填写答案 */
void reversePrint(char str[])
{
    int i = 0;
    while (str[i])
    {
        i++;
    }

    if (i != 0)
    {
        i--;
        putchar(str[i]);
        str[i] = 0;
        reversePrint(str);
    }
}
