/*设有整数数组A和B，它们长度均为n。A数组中的元素为任意整数，不超过int型数据范围。
B数组中元素的值互不相同，且取值介于0至n-1之间。
现要求按数组B的内容调整A中数据的次序，比如当B[0]=9时，则要求将A[0]的内容与A[9]互换
首先输入一个整数n（0<n<=10），代表数组A、B元素的个数。然后输入n个整数代表数组A中的元素。
最后输入 n个整数代表数组B中的元素，注意B中元素的要求。测试用例保证所有整数可以用int存储。*/
#include <stdio.h>
main()
{
	int n;
	
	scanf("%d",&n);
	int A[n];
	int B[n];
	
	for (int i=0;i<n;i++){
		scanf("%d",&A[i]);
	} 
	for (int i=0;i<n;i++){
		scanf("%d",&B[i]);
	} 
	for (int i=0;i<n;i++){
		int trans;
		int p=B[i];
		trans=A[i];
		A[i]=A[p];
		A[p]=trans;
	}
	for (int i=0;i<n-1;i++){
		printf("%d ",A[i]);
	}
	printf("%d\n",A[n-1]);
	return 0;
}

