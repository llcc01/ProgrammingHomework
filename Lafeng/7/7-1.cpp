/*已知分段函数，当x<1时，y=x；当1<=x<=10时，y=2x-1；
当10< x <=100时，y=3x-11；当x>100时，y=x*x-24
设计函数int fun(int x)，根据分段函数计算y值
输入为一个整数x,即自变量x。输出为函数值y的结果*/
#include<stdio.h>

int fun(int);

int main()
{
    int x;

    scanf("%d",&x);
    printf("The result is:y=%d\n",fun(x)) ;

    return 0 ;    
}

/* 请在这里填写答案 */
int fun (int a)
{
	int ans;
	if (a<1) 
		ans = a;
	else if ((a>=1)&&(a<=10)) 
		ans = 2*a-1;
	else if ((a>10) && (a<=100)) 
		ans = 3*a-11;
	else 
		ans = a*a-24;
	return ans;
 } 
