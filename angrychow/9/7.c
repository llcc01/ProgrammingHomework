#include <stdio.h>
#include <stdbool.h>
int arr1[1001],arr2[1001];
int cnt1,cnt2;
int main(void) {
    int Temp;scanf("%d",&Temp);
    while(Temp!=-1) {
        arr1[++cnt1]=Temp;
        scanf("%d",&Temp);
    }
    scanf("%d",&Temp);
    while(Temp!=-1) {
        arr2[++cnt2]=Temp;
        scanf("%d",&Temp);
    }
    if(cnt1<cnt2) {
        printf("ListB is not the sub sequence of ListA.");
    } else {
        bool fl = false;
        for(int i=1;i<=cnt1-cnt2+1;i++) {
            bool this_term = true;
            for(int j=1;j<=cnt2;j++) {
                if(arr1[i+j-1]!=arr2[j])this_term=false;
            }
            if(this_term) {
                fl=true;
                break;
            }
        }
        if(fl)printf("ListB is the sub sequence of ListA.");
        else printf("ListB is not the sub sequence of ListA.");
    }
    return 0;
}