//实现将整型数组内元素循环向左移若干位置
#include <stdio.h>
#include <stdlib.h>

void shift(int *array , int num , int size ) ;

int main()
{
    int i , n , p , array[100] ;

    scanf(" %d%d" , &n , &p ) ;//测试用例保证0<p<n<=100
    for( i = 0 ; i < n ; i++ )
        scanf( "%d" , &array[i] ) ;//测试用例保证所有输入可以用整型存储

    shift( array , p , n ) ;//向左移p位
    for( i = 0 ; i < n - 1 ; i++ )
        printf( "%d " , array[i] ) ;
    printf( "%d\n" , array[i] ) ;

    return 0;    
}

/* 请在这里填写答案 */
void shift(int *array , int num , int size )
{
	int swift[100]={};
	for (int i=0;i<size-num;i++){
		swift[i]=array[num+i];
	}
	for (int i=size-num;i<size;i++){
		swift[i]=array[i+num-size];
	}
	for (int i=0;i<size;i++){
		array[i]=swift[i];
	}
}



