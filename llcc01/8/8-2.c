
#include <stdio.h>

int getSum(int n, int a);

int main()
{
    int n, a;

    scanf("%d%d", &n, &a);
    printf("%d\n", getSum(n, a));

    return 0;
}

/* 请在这里填写答案 */
int getSum(int n, int a)
{
    return n ? (getSum(n - 1, a) + a + n * 3) : a;
}