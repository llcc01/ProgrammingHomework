#include <stdio.h>
int main()
{
    double a, b, c, d, ans;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    ans = (a + b) * (a - b) + c / d;
    printf("%lf\n", ans);
    return 0;
}