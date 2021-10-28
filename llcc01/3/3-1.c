#include <stdio.h>
int main()
{
    int x,y,ans=1;
    scanf("%d %d",&x,&y);
    while(y--)
    {
        ans *= x;
    }
    printf("%d\n",ans);
    return 0;
}