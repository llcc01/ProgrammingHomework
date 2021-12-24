#include <stdio.h>

int main() {
    int a[101];
    int n;
    double sum=0;
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; ++i) {
        sum+=a[i];
    }
    printf("%.2lf",sum/n);
    return 0;
}
