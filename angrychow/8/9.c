#include<stdbool.h>
#include<math.h>
bool isPrime(int x) {
    int upper = sqrt(x);
    if(x==2)return true;
    for(int i=2;i<=upper;i++) {
        if(x%i==0)return false;
    }
    return true;
}
void printFactor(int n,int fl) {
    if(fl==1) {
        printf("%d=",n);
        printFactor(n,0);
    } else {
        if(isPrime(n)) {
            printf("%d\n",n);
        } else {
            bool fl = false;
            for(int i=2;i<=n;i++) {
                if(!isPrime(i))continue;
                int Temp=n;
                while(n%i==0){
                    n/=i;
                    if(fl){
                        printf("*%d",i);
                    } else {
                        printf("%d",i);
                        fl=true;
                    }
                }
            }
            printf("\n");
        }
        
    }
}