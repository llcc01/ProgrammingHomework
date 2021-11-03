#include <stdio.h>
int main()
{
    int m, n, t, mo, no;
    scanf("%d %d", &m, &n);
    mo = m;
    no = n;
    if (m < n)
    {
        t = m;
        m = n;
        n = t;
    }
    while ((t = m % n))
    {
        m = n;
        n = t;
    }
    printf("%d %d\n", n, mo * (no / n));
    return 0;
}