#include<stdio.h>
int main(){
    int n, num[20], sum=0;
    scanf("%d\n", &n);
    for(int i=0; i<2*n; i++){
        scanf("%d", &num[i]);
    }
    for(int i=0; i<n; i++){
        sum += (num[i]*num[i+n]);

    }
    printf("%d\n", sum);
    return 0;
}
