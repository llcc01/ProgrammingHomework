#include <stdio.h>
int main()
{
    int i, j, p, sum;
    scanf("%d", &i);
    while (i--)
    {
        scanf("%d", &j);
        sum = 0;
        while (j--)
        {
            scanf("%d", &p);
            sum += p;
        }
        if (sum >= 400)
        {
            sum -= 160;
        }
        else if (sum >= 300)
        {
            sum -= 110;
        }
        else if (sum >= 200)
        {
            sum -= 70;
        }
        else if (sum >= 100)
        {
            sum -= 30;
        }
        printf("%d\n", sum);
    }
    return 0;
}