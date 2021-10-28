#include <stdio.h>
int main()
{
    float a, b, c, d, t, ans;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    t = b * c - d;
    if (t > -0.000001 && t < 0.000001)
    {
        printf("error\n");
    }
    else
    {
        ans = a / t;
        printf("%.1f\n", ans);
    }
}