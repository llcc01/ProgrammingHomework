/*请写程序计算并输出向量的内积
共两行，第一行一个整数n，1<=n<=10，第二行2Xn个整数（以空格分隔），即两个长度为n的一维数组（向量)*/
#include <stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	
	int Vector1[n];
	int Vector2[n];
	int answer[n];
	int ans=0;
	
	for (int i=0;i<n;i++){
		scanf("%d",&Vector1[i]);
	}
	for (int i=0;i<n;i++){
		scanf("%d",&Vector2[i]);
	}
	for (int i=0;i<n;i++){
		ans+=Vector1[i]*Vector2[i];
	}
	printf("%d",ans);
	return 0;
}
