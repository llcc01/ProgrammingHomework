#include <stdio.h>
int changes[]={100,50,20,10,5,2,1};
int main(void) {
    int x;scanf("%d",&x);
    for(int i=0;i<7;i++) {
        if(x/changes[i]!=0) {
            printf("%d:%d\n",changes[i],x/changes[i]);
            x-=(x/changes[i])*changes[i];
        }
    }
    return 0;
}