#include <stdio.h>
int maxi(int a, int b)//求最大公约数
{
	int t;
	if (a<b)
	{
		t = a;
		a = b;
		b = t;
	}
	//debug小提示，如果不采用t的话实际上是做不了的，就跟把俩坑里面的俩球换位，要多引入一个坑 
	while (a%b)
	{
		t = a%b;
		a = b;
		b = t;
	}
	return b;
} 
int mini (int c, int d)
{
	int max,min;
	max = maxi(c,d);
	min = c/max*d;//debug小提示，你如果先乘再除是过不了第5个的，因为c*d并不是结果，不一定可以用int存储哦 
	return min;
}
int main()
{
	int m,n;
	int ansmax,ansmin;
	
	scanf("%d%d",&m,&n);
	ansmax = maxi(m,n);
	ansmin = mini(m,n);
	printf("%d %d",ansmax,ansmin);
	return 0;
}
