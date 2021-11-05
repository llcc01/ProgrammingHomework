#include <stdio.h>
int check(int num)
{
    int i,c=1;
    for(i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            c=0;
            break;
        }
    }
    return c;
}
int main()
{
    int n,in,count;
    scanf("%d",&n);
    while (n--)
    {
        count=0;
        scanf("%d",&in);
        while (in!=-1)
        {
            if(check(in))
            {
                count++;
            }
            scanf("%d",&in);
        }
        printf("%d\n",count);
    }
    
    return 0;
}