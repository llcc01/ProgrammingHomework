#include <stdio.h>
#define MAX_SIZE 200

int main(void)
{
    int num;
    int flag = 0;
    int n = 1;
    int result[MAX_SIZE][MAX_SIZE];
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        if (flag == 0)
        {
            int row = 0;
            int column = i;
            for (; column >= 0; column--)
            {
                result[row][column] = n;
                row++;
                n++;
            }
            flag = 1;
        }
        else
        {
            int column = 0;
            int row = i;
            for (; row >= 0; row--)
            {
                result[row][column] = n;
                column++;
                n++;
            }
            flag = 0;
        }
    }
    for (int i = 1; i < num; i++)
    {
        if (flag == 0)
        {
            int row = i;
            int column = num - 1;
            for (; row <= num - 1; row++)
            {
                result[row][column] = n;
                column--;
                n++;
            }
            flag = 1;
        }
        else
        {
            int column = i;
            int row = num - 1;
            for (; column <= num - 1; column++)
            {
                result[row][column] = n;
                row--;
                n++;
            }
            flag = 0;
        }
    }
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (j == num - 1)
            {
                printf("%d\n", result[i][j]);
                break;
            }
            printf("%d ", result[i][j]);
        }
    }
    return 0;
}