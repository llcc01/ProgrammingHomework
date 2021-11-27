#include <stdio.h>
void k(int n){
    if(n/1000 == 0){
        printf("%d",n);
        return;
    }
    k(n/1000);
    printf(",%03d",n%1000);
}
int main() {
    int n;
    scanf("%d",&n);
    k(n);
    return 0;
}
