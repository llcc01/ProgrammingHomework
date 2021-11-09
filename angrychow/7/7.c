#include "math.h"
int isPerfect(int n){
    if(n==1)return 0;
    int tot = 0;
    int upper = sqrt(n);
    for(int i=1;i<=upper;i++){
        if((n%i)!=0)continue;
        if(i*i==n)tot+=i;
        else tot+=i+(n/i);
    }
    tot-=n;
    return tot==n;
} void printPerfect(int n) {
    int tot = 0;printf("%d=",n);
    for(int i=1;i<n;i++){
        if((n%i)!=0)continue;
        if(i!=1)printf("+");
        printf("%d",i);
    }
    printf("\n");
}