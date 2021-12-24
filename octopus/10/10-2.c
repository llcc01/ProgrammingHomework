
#include<stdio.h>

#define        LEN        100

//调整函数 
void distribute(int *bullets, int size, int number);

int main() {
    int bullets[LEN];
    int n, m, i;

    scanf("%d", &n);    //读入战士总数
    for (i = 0; i < n; i++) {
        scanf("%d", &bullets[i]);//读入每个战士手中初始的子弹数
    }
    scanf("%d", &m);//读入调整的次数（m>0)
    distribute(bullets, n, m);//调整
    for (i = 0; i < n - 1; i++)//输出调整后结果
    {
        printf("%d ", bullets[i]);
    }
    printf("%d\n", bullets[i]);

    return 0;
}


/* 请在这里填写答案 */
void distribute(int *bullets, int size, int number) {
    if(number==0)return;
    for (int i = 0; i < size; ++i) {
        if(bullets[i] %2 == 1)bullets[i]++;
        bullets[i]/=2;
    }
    int k[2] = {bullets[size-1],bullets[0]},m=1;
    for (int i = 0; i < size; ++i) {
        k[m%2]=bullets[i];m++;
        bullets[i]+=k[m%2];
    }
    distribute(bullets,size,number-1);
}