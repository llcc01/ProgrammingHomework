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

/* 请在这里填写答案 */
void delcharfun(char *str, char ch)
{
    int offset = 0;
    for (; *(str + offset); str++)
    {
        for (; *(str + offset) == ch; offset++)
            ;
        *str = *(str + offset);
    }
    *str = *(str + offset);
}