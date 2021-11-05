#include <stdio.h>
int main()
{
    int a, b, c, d, total, ans;
    scanf("%d %d %d %d",&a, &b, &c, &d);
    total = a + b + c + d;
    ans = total;
    if (total < 20)
    {
        ans += 10;
    }
    else if (total >= 20 && total < 30)
    {
        ans += 8;
    }
    else if (total >= 30 && total < 40)
    {
        ans += 5;
    }
    printf("%d\n",ans);
    return 0;
}