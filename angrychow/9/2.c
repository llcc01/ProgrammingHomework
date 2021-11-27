#include <stdio.h>
#include <stdbool.h>
int arr[10001];
int main() {
    int n;scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",arr+i);
    int Q;scanf("%d",&Q);
    while(Q--) {
        int patt;scanf("%d",&patt);
        bool isMatch = false;
        for(int i=1;i<=n;i++) {
            if(*(arr+i) == patt&&n!=1) {
                isMatch = true;
                if(i!=1)printf("%d",*(arr+i-1));
                if(i!=n&&i!=1)printf(" ");
                if(i!=n)printf("%d",*(arr+i+1));
            }
        }
        if(!isMatch) {
            printf("NULL");
        }
        printf("\n");
    }
}