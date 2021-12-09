/*请写出将一个整数逆序输出的函数
其中 n 是用户传入的参数。 n 的值大于0且不超过int的范围； 
函数的返回值为空，其功能是逆序输出 n。测试用例保证输入的n末尾不为0。*/
#include <stdio.h>
void reverse(int n) ; 
int main()
{
    int n;

    scanf("%d",&n);
    reverse(n);
    printf("\n");
    return 0;
}

/* 请在这里填写答案 */
void reverse(int n) 
{
	if (n/10){
		printf("%d",n%10);
		reverse(n/10);
	}
	else{
		printf("%d",n);
	}
}
