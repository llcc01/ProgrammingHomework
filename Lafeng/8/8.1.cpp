/*现有函数f(n)，n为大于等于0的整数。当n等于0时f(n) = 0，当n大于0时 f(n)=f(n-1) +n^3 */
#include <stdio.h>
int fuc (int n)
{
	if(n==0){
		return 0;
	}
	if(n>0){
		return fuc(n-1)+n*n*n;
	}
}
//好家伙fucktion…… 
