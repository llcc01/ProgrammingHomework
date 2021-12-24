#include <stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int matrix[n][n];
	int ev[n];
	for (int i=0;i<n;i++){
		int sum=0;
		for (int p=0;p<n;p++){
			scanf("%d",&matrix[i][p]);
			sum+=matrix[i][p];
		}
		ev[i]=sum;
	}
	int a[n];
	for (int i=0;i<n;i++){
		int min=0;
		int min_num=ev[0];
		for (int p=0;p<n;p++){
			if (ev[p]<min_num){
				min_num=ev[p];
				min=p;
			}
		}
		a[i]=min;
		ev[min]=2147483647;
	}
	
	for (int i=0;i<n;i++){
		int m=a[i];
		for (int l=0;l<n-1;l++){
			printf("%d ",matrix[m][l]);
		}
		printf("%d\n",matrix[m][n-1]);
	}
	return 0;
}
