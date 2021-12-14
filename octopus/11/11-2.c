#include <stdio.h>

int main() {
    int n,m;
    int a[101][101];
    scanf("%d%d",&n,&m);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d",&a[j][i]);
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d%c",a[i][j]," \n"[j==n-1]);
        }
    }
    return 0;
}
