/*已知一个长度为n的整数数组，在保证原顺序的前提下，
将该数组中所有的偶数放到所有的奇数之前，存到一个新数组中，并将新数组输出 
共2行，第一行为一个整数n(0<n<=200)，代表输入整数个数，第二行为n个用空格分隔的整数，
需保存在待处理数组中。测试用例保证所有整数可以用int存储*/
#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int num[n];
	int re[n];
	int p = 0;
	
	for (int i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	for (int i = 0 ; i<n;i++){
		if (num[i]%2==0){
			re[p]=num[i];
			p++;
		}
	}
	for (int i = 0 ; i<n;i++){
		if (num[i]%2==1){
			re[p]=num[i];
			p++;
		}
	}
	for (int i = 0 ; i<n-1;i++){
		printf("%d ",re[i]);
	}
	printf("%d",re[n-1]);
	puts("");
	return 0;
 } 
