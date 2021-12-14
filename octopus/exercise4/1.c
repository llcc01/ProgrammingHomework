#include <stdio.h>

void reverseArray(int array[] , int size );

int main()
{
    int  i , n , array[100] ;

    scanf( "%d" , &n );
    for ( i = 0 ; i < n ; i++ )
        scanf( "%d" , &array[i] );
    reverseArray( array , n ) ;

    for ( i = 0 ; i < n - 1 ; i++ )
        printf( "%d " , array[i] );
    printf( "%d\n" , array[i] );

    return 0;
}

/* 请在这里填写答案 */
void reverseArray(int array[] , int size ){
    for (int i = 0; i < size/2; ++i) {
        int tem=array[i];
        array[i]=array[size-1-i];
        array[size-1-i]=tem;
    }
}