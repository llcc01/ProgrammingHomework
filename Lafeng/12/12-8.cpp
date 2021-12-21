#include <stdio.h>
#include <stdlib.h>
main()//本来是打算用堆的，咋弄也不行，csdn有说貌似c里面没有malloc给string赋内存的机制阿巴阿巴 
{
	int n;
	scanf("%d",&n);
	int subsequence[n];
	char array[12][32];
	for (int i=0;i<n;i++){
		scanf("%s",array[i]);
	}
	for (int i=0;i<n;i++){
		scanf("%d",&subsequence[i]);
	}
	for (int i=0;i<n;i++){
		printf("%s\n",array[subsequence[i]]);//如果你只有一个测试点对了，不妨把这一部分改一改 
	}
	
	return 0;
}
