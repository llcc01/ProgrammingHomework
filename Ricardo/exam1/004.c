#include <stdio.h>

int main(void)
{   
    int lineNum, columnNum, rowNum;
    scanf("%d %d %d", &lineNum, &columnNum, &rowNum);
    int star_num = columnNum * (rowNum + 1) + 1;
    for(int i = 0; i < star_num; i++){
        if(i == star_num - 1){
            printf("*\n");
            break;
        }
        printf("*");
    }
    for(int i = 0; i < lineNum; i++){
        for(int j = 0; j < 3; j++){
            // 这里打那三行
            for(int k = 0; k < columnNum; k++){
                printf("*");
                for(int m = 0; m < rowNum; m++){
                    printf(".");
                    //打印中间的点
                }
                if(k == columnNum -1){
                    printf("*\n");
                }
            }
        }
        for(int j = 0; j < star_num; j++){
            if(j == star_num - 1){
                printf("*\n");
                break;
            }
            printf("*");
        }
    }
    return 0;
}