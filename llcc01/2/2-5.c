#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    double S, Area;
    scanf("%d %d %d", &a, &b, &c);
    if ((a + b) > c && (a + c) > b && (c + b) > a) //判断是否构成三角形
    {
        S = (a + b + c) / 2.0;
        Area = sqrt(S * (S - a) * (S - b) * (S - c));
        printf("%.3lf\n", Area);
    }
    else
    {
        printf("The edges cannot make up of a triangle.\n");
    }
    return 0;
}