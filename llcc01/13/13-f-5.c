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

/* 请在这里填写答案 */
int getString(char *source, char *strPtr[])
{
    int i = 0;
    while (*source == ' ')
    {
        source++;
    }
    strPtr[0] = source;
    for (i = 1; *source; source++)
    {
        if (*source == ' ')
        {
            *source = '\0';
            source++;
            while (*source == ' ')
            {
                source++;
            }
            if (!*source)
            {
                return i;
            }
            strPtr[i] = source;
            i++;
        }
    }
    return i;
}