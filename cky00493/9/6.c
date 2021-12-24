#include<stdio.h>
int main(){
    int n, num[1000], sum[1000], max;
    scanf("%d\n", &n);
    for(int i=0, x=1; i<n; i++){
        scanf("%d ", &num[i]);
        if(i>0){
            if(num[i] == num[i-1]){
                x += 1;
                sum[i] = x;
            }
            else
                x = 1;
        }
        sum[i] = x;
    }
    max = sum[0];
    for(int i=1; i<n; i++){
        if(sum[i] > max)
            max = sum[i];
    }
        printf("%d\n", max);
    return 0;
}
