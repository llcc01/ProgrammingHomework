/*如果一个整数的各因子（包括1但不包括该整数本身)值之和等于该整数，则该整数称为“完全数”
你的任务是设计函数isPerfect和printPerfect，
判断并打印出区间[a,b]（1<=a<b<=20000）内的所有完全数，并统计完全数的总个数
isPerfect函数原型：int isPerfect(int n);
用于判断正整数n是否为完全数，若是，则返回值为1，否则为0 
printPerfect函数原型：void printPerfect(int n);
用于打印出一个完全数n的所有因子，当执行printPerfect(6)时，打印效果为：6=1+2+3*/ 
#include <stdio.h>
#include <math.h>

//判断一个数是否为完全数的函数
int isPerfect(int);

//打印完全数的函数 
void printPerfect(int);

int main()
{
    int i,a,b,count;

    scanf("%d%d",&a,&b);
    count = 0 ;//a,b两数间完全数的数量，初始化为0 
    for(i=a;i<=b;i++)
    {
        if (isPerfect(i))  //如果是完全数 
        {
            printPerfect(i) ;//打印该完全数 
            count ++ ;  //计数器加1 
        }        
    }
    printf("The total number is %d.\n",count);//输出a,b两数间完全数的数量 
    return 0 ;
}
/* 请在这里填写答案 */
int isPerfect(int m1)
{
	int fly,ans;
	int remake = 0;
	
	for (fly = 2 ; fly*fly < m1 ; fly++)//为了压缩时间……因数要抛去本身，按照这个算法自然也要同时抛弃掉1 
	{
		if (m1 % fly == 0)
			remake = remake+fly+(m1/fly);
	}
	if (remake+1 == m1 && m1 != 1)
		ans = 1;
	else 
		ans = 0;
	return ans;
}
void printPerfect(int j)//这main函数里面是perfect但是前面声明的是perfact……虽然很离谱，但是只要打perfect就可以 
{
	int super;
	printf("%d=1",j);
	for (super = 2 ; super < j ; super++)
	{
		if (j % super == 0)
			printf("+%d",super);
	}
	printf("\n");
}
