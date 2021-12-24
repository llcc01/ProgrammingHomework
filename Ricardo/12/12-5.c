#include <stdio.h>
#define MAXLEN 200

int main(void)
{
    char string[MAXLEN];
    scanf("%s", string);
    char *letter = string;
    int flag = 1;
    int left_num = 0;
    int right_num = 0;
    while (*letter != '\0')
    {
        switch (*letter)
        {
        case '(':
            left_num++;
            break;
        case ')':
            right_num++;
            break;
        }
        letter++;
    }
    if (left_num == right_num)
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }
    if (flag == 1)
    {
        letter = string;
        while (*letter != '\0')
        {
            if (*letter == '(')
            {
                flag = 0;
                char *p = letter;
                while (*p != '\0')
                {
                    if (*p == ')')
                    {
                        flag = 1;
                        *p = '0';
                        break;
                    }
                    p++;
                }
            }
            if (flag == 0)
            {
                break;
            }
            letter++;
        }
    }
    if (flag == 1)
    {
        printf("parentheses match!\n");
    }
    else
    {
        printf("parentheses do not match!\n");
    }
    return 0;
}