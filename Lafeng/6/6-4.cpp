/*回文是指正读和反读都一样的数或文本段。例如，12321、55555、45554、11611都是回文数。
输入一个长度不超过10位的整数n，判断它是否是回文数。 
输入n
输出Yes或No*/
//emm上课讲了…… 
#include <stdio.h>
main()
{
	int n,n0;
	int remake = 0;
	int t;
	
	scanf("%d",&n);
	n0 = n;
	while (n)
	{
		t = n%10;
		remake = remake*10+t;
		n = n/10;
	}
	if (n0 == remake)
		printf("Yes");
	else
		printf("No");
return 0;
 } 
