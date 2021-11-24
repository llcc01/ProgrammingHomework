/*设计递归函数int countBinary(int n); 用于将非负十进制整数n转换成二进制形式，
并返回该二进制数的位数。
如十进制数13的二进制形式为1101，位数为4，那么调用countBinary(13)的结果为4。
输入与输出要求： 输入一个非负整数n。输出求得的结果，如输入“13”，输出“4”，占一行*/
#include<stdio.h>
int countBinary(int);
int main()
{
    int n;

    scanf("%d",&n);
    printf("%d\n",countBinary(n));

    return 0 ;
}

/* 请在这里填写答案 */ 
int countBinary(int m)
{
	int p;
	
	if (m < 2){
		return 1;
	}
	else if(m%2 == 0){
		return countBinary(m/2)+1;
	}
	else{
		return countBinary(m-1);
	}
	
}
