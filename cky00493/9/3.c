#include<stdio.h>
int main(){
    int num1[200], n, num2[200], j=0;
    scanf("%d\n", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &num1[i]);
        if(num1[i]%2 == 0){
            num2[j] = num1[i];
            j++;
        }
    }
    for(int i=0; i<n; i++){
        if(num1[i]%2 == 1){
            num2[j] = num1[i];
            j++;
        }
    }
    for(int i=0; i<n-1; i++){
        printf("%d ", num2[i]);
    }
    printf("%d\n", num2[j-1]);
    return 0;
}
