#include <stdio.h>

//判断一个数是否为完全数的函数
int        isPerfect(int);

//打印完全数的函数 
void    printPerfact(int);

int main()
{
    int i,a,b,count;

    scanf("%d%d",&a,&b);
    count = 0 ;//a,b两数间完全数的数量，初始化为0 
    for(i=a;i<=b;i++)
    {
        if (isPerfect(i))  //如果是完全数 
        {
            printPerfect(i) ;//打印该完全数 
            count ++ ;  //计数器加1 
        }        
    }
    printf("The total number is %d.\n",count);//输出a,b两数间完全数的数量 
    return 0 ;
}
#include <math.h>
int isPerfect(int n){
    int sum=0;
    int isPerfect=0;
    for (int i=1; i<sqrt(n); i++) {
        if (n%i==0) {
            if (i==1)
            sum+=i;
            else
                sum=sum+i+n/i;
        }
    }
    if (sum==n) {
        isPerfect=1;
    }
    return isPerfect;
}

void printPerfect(int n){
    
    int sum2=0;

        printf("%d=",n);
        for (int i=1; sum2<n; i++) {
            if (n%i==0) {
                printf("%d",i);
                sum2+=i;
                if (sum2<n) {
                    printf("+");
                }
                if (sum2==n) {
                    printf("\n");
                }
            }
        }
    
}
