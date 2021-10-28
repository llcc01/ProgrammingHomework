#include <stdio.h>
int main()
{
    float sum = 0;
    int n, a3 = 0, a5 = 0, a7 = 0, t3, t5, t7;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        t3 = n % 3;
        t5 = n % 5;
        t7 = n % 7;

        sum++;

        if (t3 == 0 && t5 != 0 && t7 != 0)
        {
            a3++;
        }
        if (t5 == 0 && t3 != 0 && t7 != 0)
        {
            a5++;
        }
        if (t7 == 0 && t5 != 0 && t3 != 0)
        {
            a7++;
        }
    }
    printf("%.2f%%\n", a3 / sum * 100);
    printf("%.2f%%\n", a5 / sum * 100);
    printf("%.2f%%\n", a7 / sum * 100);
    return 0;
}