/*输入与输出要求： 输入一个整数n，代表二进制数，其长度不大于10。输出转换后的十进制数，占一行*/
#include<stdio.h>

int convert(int n);

int main()
{
    int n ;

    scanf("%d",&n);
    printf("%d\n",convert(n));
    return 0 ;    
}

/* 请在这里填写答案 */ 
int convert(int n)
{
	if (n/10 == 0){
		return n;
	}
	else{
			return 2*convert(n/10)+(n%10);
	}
 } 
