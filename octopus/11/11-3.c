#include <stdio.h>
float a[8][7];
int main() {
    int n;
    int saler,product;
    float prize;
    scanf("%d",&n);
    for (int i = 1; i <=n ; ++i) {
        scanf("%d%d%f",&saler,&product,&prize);
        a[product][saler] += prize;
        a[product][5] += prize;
        a[6][saler] += prize;
        a[6][5] += prize;
    }
    for (int i = 1; i <= 6; ++i) {
        for (int j = 1; j <=5 ; ++j) {
            printf("%.1f%c",a[i][j],"\t\n"[j==5]);
        }
    }
    return 0;
}
