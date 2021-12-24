#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, j, k;
    unsigned int n;
    char **p;
    char *t;

    scanf("%u", &n);
    getchar();

    p=(char**)malloc(sizeof(void*)*n);

    for (i = 0; i < n; i++)
    {
        p[i]=(char*)malloc(sizeof(char)*1000);
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