/*在一个平面上有一个圆和n条直线，这些直线中每一条在圆内同其他直线相交，
假设没有3条直线相交于一点，试问这些直线将圆分成多少区域。 
输入n
输出区域数*/
//反正确实是有一个公式……就……
#include <stdio.h>
int main()
{
	int n,ans;
	scanf("%d",&n);
	ans = (n*n+n+2)/2;
	printf("%d",ans);
return 0;
} 
