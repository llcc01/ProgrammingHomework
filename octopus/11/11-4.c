#include <stdio.h>
int a[11][11];
int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            scanf("%d",&a[i][j]);
        }
    }
    int x,y,sum=0;
    scanf("%d%d",&x,&y);
    for (int i = -1; i <= 1; ++i) {
        for (int j = -1; j <= 1; ++j) {
            sum+=a[x+i][y+j];
        }
    }
    sum -= a[x][y];
    printf("%d",sum);
    return 0;
}
