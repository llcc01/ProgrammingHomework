#include <stdio.h>
int ma[100][100] = {0};
int main()
{
    int m, n, i, j, rMax, cMin;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &ma[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        //寻找i行中最大
        rMax = 0;
        for (j = 0; j < m; j++)
        {
            if (ma[i][rMax] < ma[i][j])
            {
                rMax = j;
            }
        }
        //列最小
        cMin = i;
        for (j = 0; j < n; j++)
        {
            if (ma[cMin][rMax] > ma[j][rMax])
            {
                cMin = j;
                break;
            }
        }
        if (cMin == i)
        {
            printf("The saddle point is (%d,%d)=%d.", cMin,rMax , ma[cMin][rMax]);
            return 0;
            //多出口
        }
    }

    printf("There is no saddle point in the matrix.");

    return 0;
}