#include <stdio.h>
int tab[10000];
int tc=0;
int check(int num)
{
	int i;
	for(i=0;i<tc;i++)
	{
		if(num%tab[i]==0)
		{
			return 0;
		}
	}
	tab[tc]=num;
	tc++;
	return 1;
}
//没事打个表
int main()
{
	int i;
	for(i=2;i<50000;i++)
	{
		if(check(i))
		{
			printf("%d,",i);
		}
	}
	//printf("hello,world");
	return 0;
}