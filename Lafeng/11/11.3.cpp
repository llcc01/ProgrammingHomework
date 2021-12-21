//某公司有四个销售员(代号1—4)，负责销售五种产品(代号1—5)
#include <stdio.h>
main()
{
	float matrix[6][5]={};
	int x,salesperson,product;
	float price;
	scanf("%d",&x);
	for (int m=1;m<=x;m++){
		scanf("%d %d %f",&salesperson,&product,&price);
		matrix[product-1][salesperson-1]+=price;
	}
	for (int m=0;m<6;m++){
		matrix[m][4]=matrix[m][0]+matrix[m][1]+matrix[m][2]+matrix[m][3];
	}
	for (int n=0;n<5;n++){
		matrix[5][n]=matrix[0][n]+matrix[1][n]+matrix[2][n]+matrix[3][n]+matrix[4][n];
	} 
	for (int s=0;s<6;s++){
		for (int t=0;t<4;t++){
			printf("%.1f	",matrix[s][t]);//注意要用tab分隔哦 
		}
		printf("%.1f\n",matrix[s][4]);
	}
	return 0;
}
