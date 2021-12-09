#include <stdio.h>
int p[] = {100, 50, 20, 10, 5, 2, 1, 0};
int main()
{
    int n, i = 0, t;
    scanf("%d", &n);
    while (p[i])
    {
        t = n / p[i];
        if (t)
        {
            printf("%d:%d\n", p[i], t);
        }
        n %= p[i];
        i++;
    }
}