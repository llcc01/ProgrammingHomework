#include <stdio.h>

int findMax(int n) ;

int main()
{
    int n ;

    scanf("%d", &n);
    printf("%d\n" , findMax( n ) ) ;

    return 0;
}

/* 请在这里填写答案 */
int findMax(int n){
    int k;
    scanf("%d",&k);
    if(n==1)return k;
    int rest = findMax(n-1);
    return rest>k?rest:k;
}