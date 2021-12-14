#include <stdio.h>
int vote[100003];
int main() {
    int n;
    scanf("%d",&n);
    int sum=0,k;
    for (int i = 0; i < n; ++i) {
        scanf("%d",&k);
        vote[k]++;
        sum+=k;
    }
    int half=sum/2;
    int m=0,p=0;
    for (int i = 100002; i >= 0&&p<=half ; --i) {
        while (vote[i]>0&&p<=half){
            p+=i;
            vote[i]--;
            m++;
        }
    }
    printf("%d",m);
    return 0;
}
