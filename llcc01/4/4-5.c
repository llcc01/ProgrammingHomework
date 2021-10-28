#include <stdio.h>
int main()
{
    int i,n,sum=0,s;
    scanf("%d",&n);
    for(i=21;i<=n;i+=21)
    {
        sum+=i;
    }
    s=sum*sum;
    printf("%d\n",s);
    return 0;
}