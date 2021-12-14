#include <stdio.h>

int main() {
    int n;
    int a[7]={100,50,20,10,5,2,1};
    scanf("%d",&n);
    for (int i = 0; i < 7; ++i) {
        if(n/a[i]>0){
            printf("%d:%d\n",a[i],n/a[i]);
            n=n%a[i];
        }
    }
    return 0;
}
