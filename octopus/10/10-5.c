

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
    int        n , i,    num[1010] ;

    scanf("%d",&n);
    for( i = 0 ; i < n ; i++ )
        scanf("%d",&num[i]) ;
    selectSort(num,n) ;
    return 0 ;
}

/* 请在这里填写答案 */

//选择排序（升序）
//参数说明：数组，数组中已有元素个数
void selectSort(int data[],int elementCount) {
    for (int i = 0; i < elementCount-1; ++i) {
        int m= findMin(data,i,elementCount-1);
        int k= data[m];
        data[m]=data[i];
        data[i]=k;
        outputData(data,elementCount);
    }
}

//函数功能：找数组中的最小值元素，并返回其下标
//参数说明：数组名，查找起始位置下标，查找终止位置下标
int findMin(int data[], int startLoc, int endLoc) {
    int min=  startLoc;
    for (int i = startLoc; i <= endLoc; ++i) {
        if(data[i]<data[min]){
            min=i;
        }
    }
    return min;
}

//输出数组中所有元素
//参数说明：数组，数组中已有元素个数
void outputData(int data[],int elementCount) {
    for (int i = 0; i < elementCount; ++i) {
        printf("%d%c",data[i]," \n"[i==elementCount-1]);
    }
}