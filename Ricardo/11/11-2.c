#include <stdio.h>
#include <string.h>
#define MAX_SIZE 1000

int main()
{
    int matrix[MAX_SIZE][MAX_SIZE];
    //听所要这样设置一下，我现在先不设置试一试
    //memset(matrix, 0, MAX_SIZE * MAX_SIZE);
    int row, column;
    scanf("%d %d", &row, &column);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (j == row - 1)
            {
                printf("%d\n", matrix[j][i]);
                break;
            }
            printf("%d ", matrix[j][i]);
        }
    }
    return 0;
}