#include <stdio.h>

int main() {
    int n;
    int a[1003];
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        scanf("%d",&a[i]);
    }
    if(n==1){
        printf("NULL");
        return 0;
    }
    int m,k;
    scanf("%d",&m);
    for (int i = 0; i < m; ++i) {
        scanf("%d",&k);
        int flag = 0;
        for (int j = 0; j < n&&(!flag); ++j) {
            if(a[j]==k){
                if(j>0&&j<n-1){
                    printf("%d %d\n",a[j-1],a[j+1]);flag=1;
                    break;
                }
                if(j==0){
                    printf("%d\n",a[1]);flag=1;
                    break;
                }
                if(j==n-1){
                    printf("%d\n",a[n-2]);flag=1;
                    break;
                }
            }

        }if(!flag) {
            printf("NULL\n");
        }
    }
    return 0;
}
