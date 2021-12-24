//该函数使用插入排序算法，将数组a的前n个元素按照升序的方式排序

#include<stdio.h>

//插入排序（升序） 
//参数说明：数组，数组中已有元素个数 
void InsertSort(int a[],int n);

int main()
{
    int n , i, num[1000] ;

    scanf( "%d" , &n ); 
    for( i = 0 ; i < n ; i++ ) 
        scanf( "%d", &num[i] ) ;
    InsertSort( num , n ) ; 
    return 0 ;
}

/* 请在这里填写答案 */ 
void InsertSort(int a[],int n)
{
	int i,p;
	for (i=1;i<n;i++){
		for (p=0;p<i;p++){
			if (a[i]<a[p]){
				int save=a[i];
				for (int _=i-1;_>=p;_--){
					a[_+1]=a[_];
				}
				a[p]=save;
				break;
			}
		}
		for (int w=0;w<n-1;w++){
				printf("%d ",a[w]);
			}
			printf("%d\n",a[n-1]);
	}
}
