#include <stdio.h>
#define MAX_SIZE 200

int main(void)
{
    int matrix[MAX_SIZE][MAX_SIZE];
    int row, column;
    int pos_x, pos_y;
    int flag = 0;
    scanf("%d %d", &row, &column);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        pos_y = 0;
        //这里遍历每一行找到每一行最大的那个数
        for (int j = 0; j < column; j++)
        {
            if (matrix[i][j] > matrix[i][pos_y])
            {
                pos_y = j;
            }
        }
        //这里遍历行最大数所在的那一列
        pos_x = i;
        int min_pos = 0;
        for (int j = 0; j < row; j++)
        {
            if (matrix[j][pos_y] < matrix[min_pos][pos_y])
            {
                min_pos = j;
            }
        }
        if (pos_x == min_pos)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("The saddle point is (%d,%d)=%d.\n", pos_x, pos_y, matrix[pos_x][pos_y]);
    }
    else
    {
        printf("There is no saddle point in the matrix.\n");
    }
    return 0;
}