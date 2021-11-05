#include <stdio.h>

int getDays(int, int);

int main()
{
    int year, month;

    scanf("%d%d", &year, &month);
    printf("There are %d days in month %d year %d.", getDays(year, month), month, year);

    return 0;
}

/* 请在这里填写答案 */
int getDays(int year, int month)
{
    int isLY = 0, days;
    isLY = ((year % 4) == 0 && year % 100) || (year % 400) == 0;
    switch (month)
    {
    case 1:
        days = 31;
        break;
    case 2:
        if (isLY)
        {
            days = 29;
        }
        else
        {
            days = 28;
        }
        break;
    case 3:
        days = 31;
        break;
    case 4:
        days = 30;
        break;
    case 5:
        days = 31;
        break;
    case 6:
        days = 30;
        break;
    case 7:
        days = 31;
        break;
    case 8:
        days = 31;
        break;
    case 9:
        days = 30;
        break;
    case 10:
        days = 31;
        break;
    case 11:
        days = 30;
        break;
    case 12:
        days = 31;
        break;
    }
    return days;
}