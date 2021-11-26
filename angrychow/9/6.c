#include <stdio.h>
int arr[11],n;
int swap(int* a,int* b){
    int c = *b;
    *b = *a;
    *a = c;
}
int main() {
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",arr+i);
    }
    for(int i=0;i<n;i++) {
        int order;scanf("%d",&order);
        swap(arr+i,arr+order);
    }
    for(int i=0;i<n;i++) {
        printf("%d%c",arr[i]," \n"[i==n-1]);
    }
}