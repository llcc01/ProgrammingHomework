#include <stdio.h>
int judge(int i,int p);
int judges(int i,int p);
int main()
{
	int n;
	scanf("%d",&n);
	int matrix[n][n];
	for (int i=0;i<n;i++){//只用来获得第一行的数据 
		if(i==0){
			matrix[0][i]=1;//第一列第一项肯定是1 
		}
		else if (i%2){//本列若是奇数列 
			matrix[0][i]=matrix[0][i-1]+2*(i-1)+2;//比如说，第一列的3，是由第0列的1加上2*0+2得来 
		} 
		else {//本列若是偶数列，有上一项加一得来 
			matrix[0][i]=matrix[0][i-1]+1;//比如说，第2列为4，是由第一列的3得来 
		}
	}
	for (int i=1;i<n;i++){//这下得到了一个三角矩阵，我们可以叫他“上三角矩阵，但他反过来了 
		for (int p=0;p<n-i;p++){//奇数行上一行斜上方减一，偶数行上一行斜上方加一 
			matrix[i][p]=matrix[i-1][p+1]+judge(i,p);
		}
	} 
	for (int i=n-1;i>=0;i--){//找不到太多规律，不如我们干脆再写一遍下半三角
		if (i==n-1){
			matrix[n-1][i]=n*n;//最后一列最后一项肯定是n方 
		} 
		else if (i%2){
			matrix[n-1][i] = n%2 ? matrix[n-1][i+1]-2*(n-2-i)-2 : matrix[n-1][i+1]-1;
		}
		else {
			matrix[n-1][i] = n%2 ? matrix[n-1][i+1]-1 : matrix[n-1][i+1]-2*(n-2-i)-2;
		}
		
	}
	for (int i=n-2;i>=0;i--){
		for (int p=n-1;p>=n-i;p--){
			matrix[i][p]=matrix[i+1][p-1]+judges(i,p);
		}
	}
	for (int i=0;i<n;i++){
		for (int p=0;p<n-1;p++){
			printf("%d ",matrix[i][p]);
		}
		printf("%d\n",matrix[i][n-1]);
	}
	return 0;
} 
int judge(int i,int p){//奇数行上一行斜上方减一，偶数行上一行斜上方加一
	int r=i+p;
	if (r%2){
		return -1;
	}
	else {
		return 1;
	}
}
int judges(int i,int p){
	int r=i+p;
	if (r%2) return 1;
	else return -1;
}
