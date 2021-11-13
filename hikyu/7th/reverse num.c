#include<stdio.h>

int reverseNum(int) ; 

int main()
{
    int        num ;

    scanf("%d",&num);
    printf("The reverse form of number %d is %d.\n",num,reverseNum(num)) ;

    return 0;
}
int reverseNum(int x){
    int a=x;
    int mask=1;
    int d=0;
    while (a>9){
        a=a/10;
        mask*=10;
    }
    a=x;
    int contain=0;
    for (int i=0;mask>0;i++){
        contain=a%10;
        d=d+contain*mask;
        mask/=10;
        a=a/10;
    }
    return d;
}