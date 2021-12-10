#include <stdio.h>
float matrix[6][5] = {0};
int main()
{
    int n, i1, i2, i, j;
    float p;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d %d %f", &i1, &i2, &p);
        matrix[i2 - 1][i1 - 1] += p;
    }
    //其实可以合并for，比较费脑
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            matrix[i][4] += matrix[i][j];
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            matrix[5][i] += matrix[j][i];
        }
    }
    for (i = 0; i < 6; i++)
    {
        printf("%.1f", matrix[i][0]);
        for (j = 1; j < 5; j++)
        {
            printf("\t%.1f", matrix[i][j]);
        }
        putchar('\n');
    }
    return 0;
}