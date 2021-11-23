/*现有序列： s = 1 + a + a^2+…+ a^(n+1)
其中a>0,n>0，且均为整数。 测试用例保证所有整数可以用int存储。 请写出递归求s的函数*/
#include <stdio.h>

int evaluation(int n,int a) ;
int main()
{
    int n,a; 

    scanf("%d%d",&n,&a);       
    printf("%d\n",evaluation(n,a));
 	return 0;
}

/* 请在这里填写答案 */
int evaluation(int n,int a)
{
	if (n==0){
		return 1+a;
	}
	else{
		int i;
		int sum=1;
		for(i=1;i<=n+1;i++){
			sum *= a;
		}
		return evaluation(n-1,a)+sum;
	}
}
