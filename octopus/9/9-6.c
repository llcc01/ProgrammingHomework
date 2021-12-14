#include <stdio.h>
#include <math.h>
int main() {
    int n;
    int k,pre,len=1,max=1;
    scanf("%d",&n);
    scanf("%d",&pre);
    for (int i = 1; i < n; ++i) {
        scanf("%d",&k);
        if(k==pre){
            len++;
            max=len>max?len:max;
        } else{
            len=1;
        }
        pre=k;
    }
    printf("%d",max);
    return 0;
}
