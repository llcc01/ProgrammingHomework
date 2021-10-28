#include <stdio.h>
int main()
{
    int m, n, i, j, k;
    scanf("%d %d", &m, &n);
    for (i = 0; i * 2 <= n; i++)
    {
        for (j = 0; i * 2 + j * 4 <= n; j++)
        {
            k = m - i - j;
            if (i * 2 + j * 4 + k * 6 == n)
            {
                printf("%d %d %d\n", i, j, k);
            }
        }
    }
    return 0;
}