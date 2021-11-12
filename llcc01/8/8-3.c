#include <stdio.h>

int findMax(int n);

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", findMax(n));

    return 0;
}

/* 请在这里填写答案 */
int findMax(int n)
{
    int a, b;
    if (n)
    {
        scanf("%d", &a);
        b = findMax(n - 1);
        return a > b ? a : b;
    }
    else
    {
        return -1;
    }
}