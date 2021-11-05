#include <stdio.h>
#include <math.h>
#define maxScore 22
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if ((a <= maxScore && b < maxScore-1) || (a < maxScore-1 && b <= maxScore))
    {
        if (a == b)
        {
            printf("no result\n");
        }
        else if (a > b)
        {
            printf("A win\n");
        }
        else
        {
            printf("B win\n");
        }
    }
    else
    {
        printf("error\n");
    }
    return 0;
}