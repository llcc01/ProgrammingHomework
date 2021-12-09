#include <stdio.h>
#define MAX_SIZE 100

void fill(int m[][MAX_SIZE]);

int main(void)
{
    int matrix[MAX_SIZE][MAX_SIZE];
    int row, column;
    int pos_x, pos_y;
    int result;
    fill(matrix);
    scanf("%d %d", &row, &column);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    //只要我在矩阵的周围在包上一圈的0，我就不用考虑边边角角的问题了
    scanf("%d %d", &pos_x, &pos_y);
    result = matrix[pos_x - 1][pos_y - 1] + matrix[pos_x - 1][pos_y] + matrix[pos_x - 1][pos_y + 1] + matrix[pos_x][pos_y - 1] + matrix[pos_x][pos_y + 1] + matrix[pos_x + 1][pos_y - 1] + matrix[pos_x + 1][pos_y] + matrix[pos_x + 1][pos_y + 1];
    printf("%d\n", result);
    return 0;
}

void fill(int m[][MAX_SIZE])
{
    for (int i = 0; i < MAX_SIZE; i++)
    {
        for (int j = 0; j < MAX_SIZE; j++)
        {
            m[i][j] = 0;
        }
    }
}