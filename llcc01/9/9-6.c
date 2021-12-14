#include <stdio.h>
int main()
{
    int n, last, now, count = 1, max = 1;
    scanf("%d", &n);
    scanf("%d", &last);
    n--;
    while (n--)
    {
        scanf("%d", &now);
        if (now == last)
        {
            count++;
        }
        else
        {
            if (count > max)
            {
                max = count;
            }
            count = 1;
        }
        last = now;
    }
    if (count > max)
    {
        max = count;
    }
    printf("%d", max);
}