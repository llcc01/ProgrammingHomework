/*设计递归函数void void printFactor( int, int );打印出对n进行素数分解的结果
设计程序，已知一段数据范围[a,b]，且a<=b，要求对其中的每一个数进行素数分解
你也可以设计其它辅助函数，如判断素数的函数isPrime(n)
输入与输出要求： 输入两个正整数a、b，代表所分解的区间，满足1<=a<=b<=100000，
且b-a<=100。输出b-a+1行，即b-a+1个数的分解
分解的输出形式100=2*2*5*5*/
#include<stdio.h>

void printFactor( int, int ); 

int main()
{
    int a,b,i ;

    scanf( "%d%d", &a, &b );
    for( i = a ; i <= b ; i++ )
        printFactor( i , 1 ) ;  //很神奇，这里本身输入一个i就足够了，为什么在这里还有一个1呢  

    return 0;
}

/* 请在这里填写答案 */
void printFactor( int a, int b)
{
	int i;
	 
	if(b == 1 ){
		printf("%d=",a);
	}
	if(a == 1){
		printf("1\n");
		return;
	}
	for (i = (b==1)?2:b ; i<=a ; i++){//实际上就是从小到大输出因数，而且还能使运算尽量减少 
		if(a%i==0){
			printf("%d",i);
			if (a != i){
				printf("*");
				printFactor(a/i,i);
			}
			break;
		}
		
	}
	if (a == i){
		printf("\n");
	}
}

