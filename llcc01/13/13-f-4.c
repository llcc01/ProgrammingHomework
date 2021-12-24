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

/* 请在这里填写答案 */
char *locatesubstr(char *str1, char *str2)
{
    char *p = str1;
    int i;
    while (*p)
    {
        i = 0;
        while (*(str2 + i) && *(p + i) == *(str2 + i))
        {
            i++;
        }
        if (!*(p + i) && *(str2 + i))
        {
            return NULL;
        }
        if(!*(str2 + i))
        {
            return p;
        }
        p++;
    }
    return NULL;
}