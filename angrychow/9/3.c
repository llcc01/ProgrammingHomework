#include <stdio.h>
int cnt_odd,cnt_even,n;
int odd[201],even[201];
int main() {
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        int Temp;scanf("%d",&Temp);
        if(Temp&1)odd[++cnt_odd]=Temp;
        else even[++cnt_even]=Temp;
    }
    for(int i=1;i<cnt_even;i++)printf("%d ",even[i]);
    if(cnt_even>=1)printf("%d",even[cnt_even]);
    if(cnt_even>=1&&cnt_odd>=1)printf(" ");
    for(int i=1;i<cnt_odd;i++)printf("%d ",odd[i]);
    if(cnt_odd>=1)printf("%d",odd[cnt_odd]);
    printf("\n");
    return 0;
}