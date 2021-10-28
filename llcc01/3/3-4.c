#include <stdio.h>
int main()
{
    int n;
    long long i, ans = 0;
    scanf("%d", &n);

    for (i = 3; i <= n; i++)
    {
        ans += (i - 2) * (i - 1) * i * (n - i + 1);
    }
    printf("%lld\n", ans);

    return 0;
}