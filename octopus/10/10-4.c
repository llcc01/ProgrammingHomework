
#include<stdio.h>

//插入排序（升序） 
//参数说明：数组，数组中已有元素个数 
void InsertSort(int a[],int n);

int main()
{
    int        n , i,    num[1000] ;

    scanf( "%d" , &n );
    for( i = 0 ; i < n ; i++ )
        scanf( "%d", &num[i] ) ;
    InsertSort( num , n ) ;
    return 0 ;
}

/* 请在这里填写答案 */
void InsertSort(int a[],int n){
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i ; ++j) {
            if(a[i] < a[j]){
                int l = a[i];
                for (int k = i-1; k >= j ; --k) {
                    a[k+1]=a[k];
                }
                a[j]=l;
                break;
            }

        }
        for (int j = 0; j < n; ++j) {
            printf("%d%c",a[j]," \n"[j==n-1]);
        }
    }
}