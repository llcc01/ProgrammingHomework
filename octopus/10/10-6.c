#include<stdio.h>

//函数功能：二分查找
//函数参数：分别为被查找的数组，数组长度，所查找的元素
//函数返回值：如果找到，则返回该元素在数组中的下标，否则返回-1
int BinarySearch(int a[], int n, int key);

int main() {
    int num[20000]; //这个数组比较大，如果在你的电脑中无法分配这么大的内存，请改小后测试。
    int n, m, i;
    int key;

    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);

    for (i = 0; i < m; i++) {
        scanf("%d", &key);
        printf("%d", BinarySearch(num, n, key));
        if (i != m - 1) printf(" ");
        else printf("\n");
    }
    return 0;
}


/* 请在这里填写答案 */
int search(int a[], int x, int y, int key);


//int BinarySearch(int a[], int n, int key) {
//    return search(a, 0, n - 1, key);
//}

int search(int a[], int x, int y, int key) {
    if (x == y)return a[x] == key ? x : -1;
    return key > a[(x + y) / 2] ? search(a, (x + y) / 2 + 1, y, key) : search(a, x, (x + y) / 2, key);
}

int BinarySearch(int a[], int n, int key) {
    int left=0,right=n-1,mid = (n-1)/2;
    while(left!=right){
        mid = (left+right)/2;
        if(key>a[mid]){
            left=mid+1;
        }
        if(key<=a[mid]){
            right=mid;
        }
    }
    return a[left]==key?left:-1;
}