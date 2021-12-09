#include <stdio.h>
int arr[11],ans;
int main(void) {
    int n;scanf("%d",&n);
    for(int i=1;i<=n;i++)scanf("%d",&arr[i]);
    for(int i=1;i<=n;i++) {
        int Temp;scanf("%d",&Temp);
        ans+=Temp*arr[i];
    }
    printf("%d",ans);
    return 0;
}