#include <stdio.h>
int main()
{
    int t, ans = 0;
    while ((t = getchar() - '0') == 0 || t == 1)
    {
        ans <<= 1;
        ans += t;
    }
    printf("%d\n", ans);
    return 0;
}