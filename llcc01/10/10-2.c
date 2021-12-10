
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

/* 请在这里填写答案 */
void distribute(int *bullets, int size, int number)
{
    int t, i;
    while (number--)
    {
        for (i = 0; i < size; i++)
        {
            if((*(bullets + i))&1)
            {
                (*(bullets + i))++;
            }
            *(bullets + i) = *(bullets + i) / 2;
        }
        t = *(bullets + size - 1);
        for (i = size - 1; i > 0; i--)
        {
            *(bullets + i) += *(bullets + i - 1);
        }
        *bullets += t;
    }
}
