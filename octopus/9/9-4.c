#include <stdio.h>

int main() {
    int n;
    int a[22];
    scanf("%d",&n);
    for (int i = 1; i <= 2*n; ++i) {
        scanf("%d",&a[i]);
    }
    int ans = 0;
    for (int i = 1; i <=n ; ++i) {
        ans+=a[i]*a[i+n];
    }
    printf("%d",ans);
    return 0;
}
