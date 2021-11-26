#include <stdio.h>
int main(void) {
    int n;scanf("%d",&n);
    double avg = 0;
    for(int i=1;i<=n;i++)
    {
        double temp;scanf("%lf",&temp);
        avg+=temp;
    }
    avg/=(float)n;
    printf("%.2lf",avg);
    return 0;
}