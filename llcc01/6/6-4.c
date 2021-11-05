#include <stdio.h>
int main()
{
    int n, o, re = 0;
    scanf("%d", &n);
    o = n;
    while (n)
    {
        re = re * 10 + n % 10;
        n /= 10;
    }
    if (re == o)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}