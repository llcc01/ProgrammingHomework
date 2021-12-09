#include <stdio.h>
int ma[11][11] = {0};
int main()
{
    int m, n, i, j, x, y, sum = 0;
    scanf("%d %d", &m, &n);
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &ma[i][j]);
        }
    }
    scanf("%d %d", &x, &y);
    for (i = -1; i <= 1; i++)
    {
        for (j = -1; j <= 1; j++)
        {
            sum += ma[x + i][y + j];
        }
    }
    printf("%d\n", sum - ma[x][y]);
    return 0;
}