#include <stdio.h>

int main(void)
{
    int A_score, B_score;
    scanf("%d %d", &A_score, &B_score);
    if((A_score - B_score) > 3 || (B_score - A_score) > 3){
        printf("error\n");
    }else if((A_score >= 22 && B_score >= 22)){
        printf("error\n");
    }else if((A_score == 22 && B_score == 23) || (A_score == 23 && B_score == 22)){
        printf("error\n");
    }else if(A_score >= 24 || B_score >= 24){
        printf("error\n");
    }
    else if(A_score == B_score){
        printf("error\n");
    }else{
        if(A_score > B_score){
            printf("A win\n");
        }else{
            printf("B win\n");
        }
    }
    return 0;
}
