#include <stdio.h>
int old[200], new[200];
int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &old[i]);
    }
    j = 0;
    for (i = 0; i < n; i++)
    {
        if (!(old[i] & 1))
        {
            new[j++] = old[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (old[i] & 1)
        {
            new[j++] = old[i];
        }
    }

    printf("%d", new[0]);
    for (i = 1; i < n; i++)
    {
        printf(" %d", new[i]);
    }
    return 0;
}