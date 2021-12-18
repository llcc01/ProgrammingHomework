#include <stdio.h>

char *locatesubstr(char *str1, char *str2);
int main()
{
    char str1[505], str2[505];
    char *p;
    gets(str1);
    gets(str2);
    p = locatesubstr(str1, str2);

    if (p == NULL)
        printf("NULL!\n");
    else
        puts(p);

    return 0;
}

char *locatesubstr(char *str1, char *str2)
{
    char *raw = str1;
    char *target = NULL;
    int flag = 0;
    while (*raw != '\0')
    {
        if (*str2 == *raw)
        {
            char *temp = raw;
            char *want = str2;
            target = raw;
            flag = 1;
            while (*want != '\0')
            {
                if (*want != *raw || *raw == '\0')
                {
                    flag = 0;
                    break;
                }
                want++;
                raw++;
            }
            raw = temp;
        }
        if (flag == 1)
        {
            break;
        }
        raw++;
    }
    if (flag == 1)
    {
        return target;
    }
    else
    {
        return NULL;
    }
}