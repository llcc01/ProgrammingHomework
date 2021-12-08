#include <stdio.h>
#define MAX_SIZE 200

int main(void)
{
    int martix[MAX_SIZE][MAX_SIZE];
    struct average
    {
        int id;
        float item;
    };
    struct average average_array[MAX_SIZE];
    //我知道现在用结构体有点不好，但是这样写真的非常好理解
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            scanf("%d", &martix[i][j]);
        }
    }
    for (int i = 0; i < num; i++)
    {
        int sum = 0;
        for (int j = 0; j < num; j++)
        {
            sum = sum + martix[i][j];
        }
        average_array[i].id = i;
        average_array[i].item = (float)sum / (float)num;
    }
    for (int i = 0; i < num; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (average_array[j].item > average_array[j + 1].item)
            {
                struct average temp = average_array[j];
                average_array[j] = average_array[j + 1];
                average_array[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < num; i++)
    {
        int x = average_array[i].id;
        for (int j = 0; j < num; j++)
        {
            if (j == num - 1)
            {
                printf("%d\n", martix[x][j]);
                break;
            }
            printf("%d ", martix[x][j]);
        }
    }
    return 0;
}