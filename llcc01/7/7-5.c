#include <stdio.h>

int mypow(int, int);

int main()
{
    int x, n;

    scanf("%d%d", &x, &n);
    printf("%d\n", mypow(x, n));

    return 0;
}

/* 请在这里填写答案 */
int mypow(int x, int n)
{
    int res = 1, i;
    for (i = 0; i < n; i++)
    {
        res *= x;
    }
    return res;
}