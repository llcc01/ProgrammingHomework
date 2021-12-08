#include <stdio.h>
#include <string.h>

int main(void)
{
    float result[6][5];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            result[i][j] = 0;
        }
    }
    int num;
    int retailor, kind;
    float amount;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d %d %f", &retailor, &kind, &amount);
        result[kind - 1][retailor - 1] = result[kind - 1][retailor - 1] + amount;
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            result[i][4] = result[i][4] + result[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            result[5][i] = result[5][i] + result[j][i];
        }
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j == 4)
            {
                printf("%.1f\n", result[i][4]);
                break;
            }
            printf("%.1f\t", result[i][j]);
        }
    }
    return 0;
}