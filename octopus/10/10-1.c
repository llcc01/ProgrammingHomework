#include<stdio.h>

void bubbleSort(int a[],int n);

//输出数组中所有元素 
void outputData(int data[],int elementCount) ;

int main()
{
    int        n , i,    num[10010] ;

    scanf("%d",&n);
    for( i = 0 ; i < n ; i++ )
        scanf("%d",&num[i]) ;
    bubbleSort(num,n) ;
    outputData(num,n) ;
    return 0 ;
}


/* 请在这里填写答案 */
void bubbleSort(int a[],int n){
    for (int j = n-1; j >=0; --j) {
        for (int i = 0; i < j; ++i) {
            if(a[i]>a[i+1]){
                int t= a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }

}
void outputData(int data[],int elementCount) {
    for (int i = 0; i < elementCount; ++i) {
        printf("%d%c",data[i]," \n"[i==elementCount-1]);
    }
}