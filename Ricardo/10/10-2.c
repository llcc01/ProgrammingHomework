#include <stdio.h>

#define LEN 100

//调整函数
void distribute(int *bullets, int size, int number);

int main()
{
    int bullets[LEN];
    int n, m, i;

    scanf("%d", &n); //读入战士总数
    for (i = 0; i < n; i++)
    {
        scanf("%d", &bullets[i]); //读入每个战士手中初始的子弹数
    }
    scanf("%d", &m);            //读入调整的次数（m>0)
    distribute(bullets, n, m);  //调整
    for (i = 0; i < n - 1; i++) //输出调整后结果
    {
        printf("%d ", bullets[i]);
    }
    printf("%d\n", bullets[i]);

    return 0;
}

void distribute(int *bullets, int size, int number)
{
    for (int i = 0; i < number; i++)
    {
        int temp[LEN];
        for (int fighter = 0; fighter < size; fighter++)
        {
            if (bullets[fighter] % 2 != 0)
            {
                bullets[fighter]++;
            }
            temp[fighter] = bullets[fighter] / 2;
        }
        for (int fighter = 0; fighter < size; fighter++)
        {
            if (fighter == size - 1)
            {
                bullets[0] = bullets[0] + temp[fighter] - temp[0];
                break;
            }
            bullets[fighter + 1] = bullets[fighter + 1] + temp[fighter] - temp[fighter + 1];
        }
    }
}