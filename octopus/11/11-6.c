#include <stdio.h>
int a[101][102];
int main() {
    int n;
    scanf("%d",&n);
    for (int i = 1; i <=n; ++i) {
        for (int j = 1; j <= n; ++j) {
            scanf("%d",&a[i][j]);
            a[i][101]+=a[i][j];
        }
        a[i][0]=i;
    }
    for (int i = 1; i < n ; ++i) {
        for (int j = 2; j <=n-i+1 ; ++j) {
            if(a[a[j][0]][101]<a[a[j-1][0]][101]){
                int t = a[j][0];
                a[j][0]=a[j-1][0];
                a[j-1][0]=t;
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            printf("%d%c",a[a[i][0]][j]," \n"[j==n]);
        }
    }
    return 0;
}
