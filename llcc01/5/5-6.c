#include <stdio.h>
int main()
{
    int m, n, i, j, k, t, t2;
    scanf("%d %d", &m, &n);

    for (i = 0; i * 2 <= n; i++)
    {
        for (j = 0; i * 2 + j * 3 <= n; j++)
        {
            for (k = 0; i * 2 + j * 3 + k * 4 <= n; k++)
            {
                if (i * 2 + j * 3 + k * 4 + m - i - j - k == n)
                {
                    printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }
    return 0;
}