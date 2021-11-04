#include "stdio.h"

long long gcd(int a,int b)
{
    if(!b)return a;
    else return gcd(b,a%b);
}

int main(void)
{
    long long m,n;scanf("%lld%lld",&m,&n);
    long long ret1=gcd(m,n);
    long long ret2=m*n/ret1;
    printf("%lld %lld",ret1,ret2);
    return 0;
}