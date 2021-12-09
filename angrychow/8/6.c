#include<math.h>
int evaluation(int n,int a) {
    return n==-1?pow(a,n+1):evaluation(n-1,a)+pow(a,n+1);
}