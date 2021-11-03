#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    double x, ans = 1, pLast = 1;
    scanf("%lf", &x);
    for (n = 1; fabs(pLast) >= 1e-8; n++)
    {
        pLast = pLast / n * x;
        ans += pLast;
    }
    printf("%.4lf\n", ans);
    return 0;
}