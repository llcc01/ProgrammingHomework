
#include<stdio.h>

void bubbleSort(int a[],int n);

//输出数组中所有元素 
void outputData(int data[],int elementCount) ;

int main()
{
    int n,i,num[10010];

    scanf("%d",&n); 
    for( i = 0 ; i < n ; i++ ) 
        scanf("%d",&num[i]) ;
    bubbleSort(num,n) ; 
    outputData(num,n) ;
    return 0 ;
}


/* 请在这里填写答案 */
void bubbleSort(int a[],int n)
{
	for (int i=0;i<n;i++){
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
	}
}
void outputData(int data[],int elementCount)
{
	for (int _=0;_<elementCount-1;_++){
		printf("%d ",data[_]);
	}
	printf("%d\n",data[elementCount-1]);
}
