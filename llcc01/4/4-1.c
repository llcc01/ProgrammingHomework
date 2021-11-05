#include <stdio.h>
int main()
{
    int n,in,max,min,sum;
    scanf("%d",&n);

    scanf("%d",&in);
    max = min = in;
    sum = min;
    n--;
    while(n--)
    {
        scanf("%d",&in);
        if(in>max)
        {
            max=in;
        }
        else if(in<min)
        {
            min=in;
        }
        sum+=in;
    }

    printf("%d %d %d\n",sum,max,min);
    return 0;
}