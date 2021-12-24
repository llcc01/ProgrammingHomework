#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[203];
    int flag=0;
    for (int i = 1; i <= n; ++i) {
        scanf("%d",&a[i]);
        if(a[i]%2==0&&(!flag)){
            printf("%d",a[i]);
            flag=i;
        }
    }
    for (int i = flag+1; i <= n; ++i) {
        if(a[i]%2==0){
            printf(" %d",a[i]);
        }
    }
    if(!flag){
        printf("%d",a[1]);
        flag=2;
    } else{
        flag=1;
    }
    for (int i = flag; i <=n ; ++i) {
        if(a[i]%2==1){
            printf(" %d",a[i]);
        }
    }
    putchar('\n');

    return 0;
}
