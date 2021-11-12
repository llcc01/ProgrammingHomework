/*设计函数int mypow(int x,int n)，返回正整数x的n次幂，如mypow(2,10)值为1024
输入与输出要求： 输入两个非负整数x、和n，x的n次幂不会超过int型范围。输出计算结果，占一行*/
#include<stdio.h>

int mypow(int m, int t) ;

int main()
{
    int x, n ;

    scanf("%d%d",&x,&n) ;
    printf("%d\n",mypow(x,n)) ;

    return 0;
}

/* 请在这里填写答案 */
int mypow(int m,int t)
{
	
	if (t == 0)
		m = 1;
	else
	{
		int i,m0;
		m0 = m;
		for(i = 1;i < t;i++)
		{
			m *= m0;
		}
	}
	return m;
}
