/*写一个函数可以读入n（0<n<100）个整数，并求出这n个整数中的最大值
此题要求递归求解*/
#include <stdio.h>

int findMax(int n) ;

int main()
{   
    int n ; 

    scanf("%d", &n); 
    printf("%d\n" , findMax( n ) ) ; 

    return 0;
}

/* 请在这里填写答案 */
int findMax(int n)
{
	int num,b;
	
	if (n){
		scanf("%d",&num);
		b = findMax(n-1);//在这如果不用b来指代而是直接用findMax套进if语句里的话，什么输出都没有 
		if(num > b){
			return num;
		}
		else{
			return b;
		}
	} 
	else{
		return 0; //这随便搞个比1小的数应该都行 
	}
}
