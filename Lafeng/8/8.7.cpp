//设计递归函数int GCD(int a,int b);计算正整数a和b的最大公约数并返回
#include<stdio.h>
int GCD(int a , int b );
int main()
{
    int a,b;

    scanf("%d%d",&a,&b );
    printf( "%d\n",GCD(a,b)) ;

    return 0 ;    
}

/* 请在这里填写答案 */
int GCD(int a , int b )
{
	if(a<b){
		int i;
		i = a;
		a = b;
		b = i;
	}
	if(a%b == 0){
		return b;
	}
	else{
		return GCD(b,a%b);
	}
}
