#include <stdio.h>
#define MAX_SIZE 100

int main(void)
{
    int score[MAX_SIZE];
    int num;
    int sum = 0;
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        scanf("%d", &score[i]);
        sum = sum + score[i];
    }
    double result;
    result = (double) sum / (double) num;
    printf("%.2lf\n", result);
    return 0;
}