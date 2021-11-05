/*编写一个程序，用下面的公式计算e^x的值（公式打不出来）
因此可以假设当某一项小于1e－8时，循环终止。1e－8即为10的-8次方。 
还有个提示告诉我们可以用一个库函数检验233
所有数储存为double*/
#include <stdio.h>
#include <math.h>
double jiecheng(double a)//关于阶乘的子程序 血与泪的教训，千万别把前面int的子程序拿来执行……我这块改麻了 
{
	double i;
	double ans = 1.0;
	for (i = 1 ; i <= a ; i ++)
	{
		ans *= i;
	}
	return ans;
 } 
double power(double m,int n)//写一个小数乘方的子程序 ,该程序输出m的n次方 
//如果这块继续使用pow会编译错误，会告诉你头文件被重复引用了，为什么捏？因为math.h里也有pow函数。而且定义的不一样 
{
	
	if (n == 0)
		m = 1.0;
	else
	{
		int i;
		double m0;
		m0 = m;
		for(i = 1;i < n;i++)
		{
			m *= m0;
		}
	}
	return m;
}
main ()
{
	double x;//读入的数 x 
	double mouyixiang = 1.0;//某一项……
	double ans = 1.0;
	double p;//指示项数 
	
	scanf ("%lf",&x);
	p = 1.0;
	while (fabs(mouyixiang) >= 1e-8)
	{
		mouyixiang = (power(x,p))/(jiecheng(p)) ;
		ans += mouyixiang;
		p = p+1;
	}
	printf("%.4lf\n",ans);
return 0;
}
