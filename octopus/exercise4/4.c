#include <stdio.h>
int num[203];
int main() {
    int k;
    do{
        scanf("%d",&k);
        num[k]++;
    } while (k!=0);
    int sum=0;
    for (int i = 1; i < 101; ++i) {
        if(num[i]&&num[2*i]){
            sum++;
        }
    }
    printf("%d",sum);
    return 0;
}
