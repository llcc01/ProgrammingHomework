#include <stdio.h>
int main()
{
    int n, m, sum, i, t;
    scanf("%d %d", &n, &m);
    for (i = 1; i <= n; i++)
    {
        sum = 0;
        t = i;
        while (t)
        {
            sum += (t % 10) * (t % 10);
            t /= 10;
        }
        if (i / m == sum)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}