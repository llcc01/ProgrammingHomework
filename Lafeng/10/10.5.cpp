//使用选择排序算法对数组a的前n个元素按照升序的方式排序
#include<stdio.h>
//选择排序（升序） 
//参数说明：数组，数组中已有元素个数 
void selectSort(int data[],int elementCount) ;
//函数功能：找数组中的最小值元素，并返回其下标 
//参数说明：数组名，查找起始位置下标，查找终止位置下标
int findMin(int data[], int startLoc, int endLoc) ; 
//输出数组中所有元素 
//参数说明：数组，数组中已有元素个数 
void outputData(int data[],int elementCount) ;
int main()
{
    int n,i,num[1010];

    scanf("%d",&n); 
    for( i = 0 ; i < n ; i++ ) 
        scanf("%d",&num[i]) ;
    selectSort(num,n) ; 
    return 0 ;
}

/* 请在这里填写答案 */
void selectSort(int a[],int n)
{
	for (int i=0;i<n-1;i++){
		int min=i;
		int trans;
		for (int p=i+1;p<n;p++){
			if(a[p]<a[min]){
				min=p;	
			}
		}
		trans=a[min];
		a[min]=a[i];
		a[i]=trans;
        for (int m=0;m<n-1;m++){
            printf("%d ",a[m]);
        }
        printf("%d\n",a[n-1]);
	}
}







