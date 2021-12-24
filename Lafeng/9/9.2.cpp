/*有n个互不相同的整数，存储在数组中。在这n个整数中查找m个整数，
如果存在，则打印出与之相邻的整数；否则就显示无此数NULL*/
#include <stdio.h>
main()
{
	int m,n;
	scanf("%d",&n);
	int in[n];
	for (int i = 0; i<n ; i++){
		scanf("%d",&in[i]);
	}
	scanf("%d",&m);
	int out[m];
	for (int i = 0;i<m;i++){
		scanf("%d",&out[i]);
	}
	for (int i = 0;i<m;i++){
		int find = 0;
		for (int p = 0;p<n;p++){
			if (out[i]==in[p]){
				if (p>0&&p<n-1&&n!=1){
					printf("%d %d\n",in[p-1],in[p+1]);
				}
				else if (p == 0&&n!=1){
					printf("%d\n",in[1]);
				} 
				else if (p==n-1&&n!=1){
					printf("%d\n",in[n-2]);
				}
				else {
					printf("NULL");
					puts("");
				}
				find = 1;
				break;
			}
		}
		if (find==0){
			printf("NULL\n");
		}
	}
	
	return 0;
}
