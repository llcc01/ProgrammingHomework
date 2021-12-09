#include <stdio.h>
int ma[100][100] = {0};
float avg[100] = {0};
int list[100] = {0}; //输出顺序
int main()
{
    int n, i, j, t;
    float t2;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &ma[i][j]);
            avg[i] += ma[i][j];
        }
        avg[i] /= n;
        list[i] = i;
    }

    //排序
    for (i = n; i > 0; i--)
    {
        for (j = 1; j < i; j++)
        {
            if (avg[j - 1] > avg[j])
            {
                t2 = avg[j - 1];
                avg[j - 1] = avg[j];
                avg[j] = t2;

                t = list[j - 1];
                list[j - 1] = list[j];
                list[j] = t;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d", ma[list[i]][0]);
        for (j = 1; j < n; j++)
        {
            printf(" %d", ma[list[i]][j]);
        }
        putchar('\n');
    }

    return 0;
}