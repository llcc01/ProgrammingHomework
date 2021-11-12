#include <stdio.h>

void printFactor(int, int);

int main()
{
    int a, b, i;

    scanf("%d%d", &a, &b);
    for (i = a; i <= b; i++)
        printFactor(i, 1);

    return 0;
}

/* 请在这里填写答案 */
void printFactor2(int n)
{
    int i, t;
    for (i = 2; i * i <= n; i++)
    {
        t = n / i;
        if (t * i == n)//n能被i整除
        {
            printf("%d*", i);
            printFactor2(t);
            return;
        }
    }

    //是质数,最后一个数
    printf("%d\n", n);
}
void printFactor(int n, int p)
{
    //拆成两个函数可以加速:)
    printf("%d=", n);
    printFactor2(n);
}