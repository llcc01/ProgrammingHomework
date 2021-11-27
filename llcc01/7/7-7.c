#include <stdio.h>

//判断一个数是否为完全数的函数
int isPerfect(int);

//打印完全数的函数
void printPerfact(int);

int main()
{
    int i, a, b, count;

    scanf("%d%d", &a, &b);
    count = 0; //a,b两数间完全数的数量，初始化为0
    for (i = a; i <= b; i++)
    {
        if (isPerfect(i)) //如果是完全数
        {
            printPerfact(i); //打印该完全数
            count++;         //计数器加1
        }
    }
    printf("The total number is %d.\n", count); //输出a,b两数间完全数的数量
    return 0;
}
/* 请在这里填写答案 */

void printPerfect(int n)
{
    int i;
    printf("%d=1", n);
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0) //n能被i整除
        {
            printf("+%d", i);
        }
    }
    printf("\n");
}

int isPerfect(int n)
{
    int i, sum = 0, t;
    for (i = 1; i * i <= n; i++)//只处理1~n^(1/2)
    {
        t = n / i;
        if (i * t == n) //n能被i整除
        {
            sum += i + t;
        }
    }
    sum -= n; //去除本身
    i -= 1;
    if (i * i == n) //去除一个平方数
    {
        sum -= i;
    }
    return (sum == n);
}