//任意给定一个n*m的矩阵，矩阵的行数为n,列数为m。你的任务是实现矩阵的转置，即行列互换
//第一行为两个整数n、m，代表矩阵的行数与列数
#include <stdio.h>
main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int matrix[n][m];
	for (int i=0;i<n;i++){
		for (int p=0;p<m;p++){
			scanf("%d",&matrix[i][p]);
		}
	}
	for (int p=0;p<m;p++){
		for (int i=0;i<n-1;i++){
			printf("%d ",matrix[i][p]);
		}
		printf("%d\n",matrix[n-1][p]);
	}
	return 0;
}
