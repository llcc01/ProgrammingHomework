#include<stdio.h>
#include<math.h>
int func( int num )
{
     int i=0;
     for(i= 2;i*i<=num; i++)
        if(num %i== 0)
          return 0 ;
     return 1 ;
}

int main()
{
    int i=0;
    int n=0;
    int j=0;
    scanf("%d",&n);
    for( j=0;j<n;j++)
    { 
        int sum=0;
        while (1)
         {      
            scanf("%d",&i);
            if(i==-1)
                break;
            sum+=func(i);
         }
        printf("%d\n",sum);
    }
    return 0;
}
