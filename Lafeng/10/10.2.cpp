//如果子弹数为奇数，则向班长再要一颗。然后每个战士再同时将自己手中的子弹分一半给下一个战士
//最后一个战士将手中的子弹分一半给第1个战士
#include<stdio.h>

#define LEN 100

//调整函数 
void distribute(int * bullets,int size,int number) ;

int main()
{
    int bullets[LEN] ;
    int n,m,i;    

    scanf("%d" , &n ) ;    //读入战士总数 
    for( i = 0 ; i < n ; i++ )
    {
        scanf("%d" , &bullets[i] ) ;//读入每个战士手中初始的子弹数 
    }
    scanf("%d",&m ) ;//读入调整的次数（m>0) 
    distribute(bullets,n,m ) ;//调整 
    for( i = 0 ; i < n - 1 ; i++ )//输出调整后结果 
    {
        printf("%d " , bullets[i] ) ;
    }
    printf("%d\n" , bullets[i] ) ;

    return 0;    
}


/* 请在这里填写答案 */
void distribute(int * bullets,int size,int number)//这个同时就很灵性，如果算出来的第一个数是13，就不是同时了 
{
	for (int p=0;p<number;p++){
		for (int i=0;i<size;i++){
			if (bullets[i]%2){
				bullets[i] += 1; 
		}
		bullets[i]/=2;
		}
		int save[size];
		for (int i=1;i<size;i++){
			save[i]=bullets[i-1]+bullets[i];
		}
		save[0]=bullets[0]+bullets[size-1];
		for (int m=0;m<size;m++){
			bullets[m]=save[m];
		}
	}
}

