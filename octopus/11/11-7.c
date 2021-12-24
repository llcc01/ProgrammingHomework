#include <stdio.h>
int a[101][101];
int main() {
    int n;
    scanf("%d",&n);
    int k=n*n;
    int d[4][2]={{1,0},{-1,1},{0,1},{1,-1}};
    int head=0;
    int x=1,y=1;
    for (int i = 1; i <= k; ++i) {
        a[x][y]=i;
        x+=d[head%4][0];y+=d[head%4][1];
        if(x>n){
            x=n;y++;
            int d[4][2] ={{0,1},{-1,1},{1,0},{1,-1}};
        }if(y>n){
            y=n;x++;
            int d[4][2] ={{0,1},{-1,1},{1,0},{1,-1}};
        }
        if(y==1||x==n||x==1||y==n)head++;


    }

    for (int i = 1; i <=n ; ++i) {
        for (int j = 1; j <=n ; ++j) {
            printf("%d%c",a[i][j]," \n"[j==n]);
        }
    }
    return 0;
}

