#include <stdio.h>

int isLeap(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        return 1;
    }else {
        return 0;
    }
}

int main(void)
{
    int rowNum;
    scanf("%d", &rowNum);
    for(int i = 0; i < rowNum; i++){
        int leapYearNum = 0;
        while(1){
            int year;
            scanf("%d", &year);
            if(year == -1){
                break;
            }
            if(isLeap(year) == 1){
                leapYearNum++;
            }
        }
        printf("%d\n", leapYearNum);
    }
    return 0;
}