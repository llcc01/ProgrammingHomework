#include <stdio.h>

int main() {
    int a,b,c,sum=0;
    scanf("%d%d%d",&a,&b,&c);
    for (int i = 0; i*a <= c ; ++i) {
        for (int j = 0; j*b + i*a <= c; ++j) {
            if(j*b + i*a== c)sum++;
        }
    }
    printf("%d",sum);
    return 0;
}
