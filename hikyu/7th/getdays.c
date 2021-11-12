#include<stdio.h>

int    getDays(int,int) ;

int main()
{
    int    year, month ;

    scanf("%d%d",&year,&month);
    printf("There are %d days in month %d year %d.",getDays(year,month), month, year) ;

    return 0 ;    
}
int getDays(int year,int month){
    const int bigmonth=31;
    const int smallmonth=30;
    int days=0;
    if (year%4==0&&year%100!=0||year%400==0){
        switch (month){
            case 1:case 3:case 5:case 7:case 8:case 10:case 12: days=bigmonth;break;
            case 4:case 6:case 9:case 11: days=smallmonth;break;
            case 2: days=29;break;
        }
    }
    else{
        switch (month){
            case 1:case 3:case 5:case 7:case 8:case 10:case 12: days=bigmonth;break;
            case 4:case 6:case 9:case 11: days=smallmonth;break;
            case 2: days=28;break;
        }
    }
        return days;
}