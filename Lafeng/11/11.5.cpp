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
	for (int i=0;i<n;i++){
		int max=matrix[i][0];
		int max_num=0;
		for (int p=1;p<m;p++){
			if (matrix[i][p]>max){
				max=matrix[i][p];
				max_num=p;
			}
		}
		int yes=1;
		int min=max;
		for (int w=0;w<n;w++){
			if(matrix[w][max_num]<min){
				yes=0;
				break;
			}
		}
		if(yes==1){
			printf("The saddle point is (%d,%d)=%d.",i,max_num,max);
			goto yes_;
		}
		
		
	}
	printf("There is no saddle point in the matrix.");
	yes_:return 0;
} 
