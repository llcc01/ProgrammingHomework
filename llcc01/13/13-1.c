#include <stdio.h>
#include <string.h>
char str[100101] = {0};

int main()
{
    int i, j, k, n;
    char *p[101], *t;

    p[0] = str;
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++)
    {
        gets(p[i]);
        p[i + 1] = p[i];
        while (*p[i + 1]++)
            ;
    }
    for (i = n - 1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (strcmp(p[j], p[j + 1]) > 0)
            {
                t = p[j];
                p[j] = p[j + 1];
                p[j + 1] = t;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        puts(p[i]);
    }

    return 0;
}