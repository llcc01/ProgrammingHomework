#include <stdio.h>
int n,arr[1001],Ans=1,Temp=1;
int main(void) {
    scanf("%d",&n);
    for(int i=1;i<=n;i++)scanf("%d",arr+i);
    for(int i=2;i<=n;i++) {
        if(arr[i-1]==arr[i]) {
            Temp++;
        } else {
            if(Temp>Ans)Ans=Temp;
            Temp = 1;
        }
        if(Temp>Ans)Ans=Temp;
    }
    printf("%d",Ans);
}