/*已知一个只包含0和1的二进制数，二进制数的长度不大于10。你的任务是将其转换为十进制数并打印出来
输入为一个只包含0和1的整数n（长度不超过10位），代表二进制数 
输出为转换得到的十进制数*/
#include <stdio.h>
int pow(int m,int n)//写一个整数乘方的子程序 ,该程序输出m的n次方 
{
	
	if (n == 0)
		m = 1;
	else
	{
		int i,m0;
		m0 = m;
		for(i = 1;i < n;i++)
		{
			m *= m0;
		}
	}
	return m;
}
main()
{
	int two;//读入的二进制数 
	int i;//位数 
	int p;//用来转化的变量 
	int ten = 0;//输出的十进制数 
	
	scanf("%d",&two);
	for (i = 0 ; two != 0 ; i++)
	{
		p = two%10;
		two /= 10;
		if (p == 1)
			ten += pow(2,i);
	}
	printf("%d",ten);
} 
