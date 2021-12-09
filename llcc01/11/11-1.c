#include <stdio.h>
int matrix[100][100];
int main()
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        printf("%d", matrix[0][i]);
        for (j = 1; j < n; j++)
        {
            printf(" %d", matrix[j][i]);
        }
        putchar('\n');
    }
    return 0;
}