#include <stdio.h>

int main() {
    int n;
    int a[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char b[11]={'1','0','X','9','8','7','6','5','4','3', '2'};
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        int sum=0;
        for (int j = 0; j < 17; ++j) {
            int k;
            scanf("%1d",&k);
            sum+=k*a[j];
        }
        char ei;
        ei = getchar();
        if(ei==b[sum%11]){
            printf("right\n");
        }
        else{
            printf("wrong\n");
        }
    }
    return 0;
}
