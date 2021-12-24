#include <stdio.h>

void delcharfun(char *str, char ch);

int main()
{
    char ch, str[110];

    scanf("%s", str);    //读入字符串
    getchar();           //读取回车符号
    scanf("%c", &ch);    //读入字符
    delcharfun(str, ch); //删除
    printf("%s\n", str); //输出删除后结果
    return 0;
}

void delcharfun(char *str, char ch)
{
    char *p = str;
    while (*p != '\0')
    {
        if (*p == ch)
        {
            char *del_p = p;
            while (*del_p != '\0')
            {
                char *temp = del_p + 1;
                *del_p = *temp;
                del_p++;
            }
        }
        else
        {
            p++;
        }
    }
}