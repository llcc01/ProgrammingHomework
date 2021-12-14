#include <stdio.h>
int ma[100][100] = {0};
int main()
{
    int n, i, j, x, y, count = 1;
    scanf("%d", &n);
    //左上角
    for (i = 0; i < n; i++)
    {
        if (i & 1)
        {
            //奇数
            y = i;
            x = 0;
            for (j = 0; j < i + 1; j++)
            {
                ma[y][x] = count++;
                y--;
                x++;
            }
        }
        else
        {
            x = i;
            y = 0;
            for (j = 0; j < i + 1; j++)
            {
                ma[y][x] = count++;
                y++;
                x--;
            }
        }
    }

    //右下角
    for (i = 1; i < n; i++)
    {
        if ((n + i) & 1)
        {
            //奇数
            x = n - 1;
            y = i;
            for (j = 0; j < n - i; j++)
            {
                ma[y][x] = count++;
                x--;
                y++;
            }
        }
        else
        {
            x = i;
            y = n - 1;
            for (j = 0; j < n - i; j++)
            {
                ma[y][x] = count++;
                x++;
                y--;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d", ma[i][0]);
        for (j = 1; j < n; j++)
        {
            printf(" %d", ma[i][j]);
        }
        putchar('\n');
    }

    return 0;
}