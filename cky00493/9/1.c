#include<stdio.h>
int main(){
    double sum=0;
    int num;
    int score[100];
    scanf("%d\n", &num);
    for(int i=0; i < num; i++){
        scanf("%d", &score[i]);
        sum += score[i];
    }
    printf("%.2lf\n", sum/num);
    return 0;
}
