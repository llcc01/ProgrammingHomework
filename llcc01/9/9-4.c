#include <stdio.h>
int a[10], b[10];
int main()
{
    int n, i, res = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n; i++)
    {
        res += a[i] * b[i];
    }
    printf("%d", res);
}