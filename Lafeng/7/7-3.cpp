/*设计函数int getDigit(long long n)，计算并返回正整数n的长度
 输入一个正整数n，n的取值范围不会超过long long类型变量。输出该正整数的位数
 注意单词digits的单复数形式。*/
#include<stdio.h>

int getDigit(long long n); 

int main()
{
    long long n ;
    int len ;

    scanf("%lld",&n);
    len = getDigit(n) ;
    if (len > 1)
        printf("The integer %lld has %d digits.\n",n, len) ;
    else
        printf("The integer %lld has %d digit.\n",n, 1) ;
    return 0 ;    
}

/* 请在这里填写答案 */ 
int getDigit(long long n)
{
	int ans = 0;
	
	while (n)
	{
		ans ++;
		n /= 10;
	}
	return ans;
}
