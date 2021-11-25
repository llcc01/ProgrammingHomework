#include<stdio.h>
int main(){
    int n, m, money[] = {100, 50, 20, 10, 5, 2, 1};
    scanf("%d", &n);
    for(int i=0; i<7; i++){
        if(n >= money[i]){
            m = n/money[i];
            
            if(m > 0)
                printf("%d:%d\n", money[i], m);
            n %= money[i];
        }
    }
    return 0;
}
