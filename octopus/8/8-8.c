#include<stdio.h>

void printFactor( int, int );

int main()
{
    int a,b,i ;

    scanf( "%d%d", &a, &b );
    for( i = a ; i <= b ; i++ )
        printFactor( i , 1 ) ;

    return 0;
}

/* 请在这里填写答案 */
int isPrime(int n){
    if(n==1)return 0;
    if(n==2)return 1;
    for (int i = 3; i*i <= n; ++i) {
        if(n%i==0)return 0;
    }
    return 1;
}
void printFactor( int n , int i){
    if(i==1&&n!=1)printf("%d=",n);
    if(i==1&&n==1)printf("1=1\n");
    for(int j=i;j<=n;j++){
        if((n%j==0)&&(isPrime(j))){
            if(n/j==1){
                printf("%d\n",j);
                return;
            }
            printf("%d*",j);
            printFactor(n/j,j);
            return;
        }
    }
}