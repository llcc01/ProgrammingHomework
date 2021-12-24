#include <stdio.h>
int a[101][101];
int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <=m ; ++j) {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 1; i <= n; ++i) {
        int max=1,isDouble = 0;
        for (int j = 2; j <=m ; ++j) {
            if(a[i][j]==a[i][max]){
                isDouble = 1;
            }
            if(a[i][j]>a[i][max]){
                max = j;isDouble = 0;
            }
        }
        if(isDouble){
            printf("There is no saddle point in the matrix.");
            return 0;
        }
        a[i][0]=max;
        for (int j = 1; j <= n; ++j) {
            if(i!=j&&a[j][max]<=a[i][max]){
                a[i][0]=0;
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        if(a[i][0]){
            printf("The saddle point is (%d,%d)=%d.",i-1,a[i][0]-1,a[i][a[i][0]]);\
            return 0;
        }
    }
    printf("There is no saddle point in the matrix.");
    return 0;
}
