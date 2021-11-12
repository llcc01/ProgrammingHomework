/*设计函数int getDays(int year,int month)，根据给定的年year和月份month,计算该月的天数并返回。
提示：注意闰年的判断。
输入与输出要求： 输入两个整数y,m，即年份与月份
输出该年内该月的天数，占一行。 测试用例保证输入合法*/ 
#include<stdio.h>

int getDays(int y,int m) ;

int main()
{
    int year, month ;

    scanf("%d%d",&year,&month);
    printf("There are %d days in month %d year %d.",getDays(year,month), month, year) ;

    return 0 ;    
}

/* 请在这里填写答案 */ 
int getDays(int y,int m)
{
	int ans;
	int isLeapyear = 0;
	
	if ((y%4 == 0 && y%100 != 0) || (y%400 == 0))
		isLeapyear = 1;
	
	if ((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12))
		ans = 31;
	else if ((m == 4) || (m == 6) || (m == 8) ||  (m == 9) || (m == 11))
		ans = 30;
	else 
		ans = 28+isLeapyear;
	return ans;
}
