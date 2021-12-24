#include <stdio.h>
main()
{
	int id;
	char test[11]={'1','0','X','9','8','7','6','5','4','3','2'};
	int coefficient[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	int sum=0;
	int remainder;
	char ans;
	
	scanf("%d",&id);
	for (int p=0;p<id;p++){
		char idCard[19];
		scanf("%s",idCard);
		for (int i=0;i<17;i++){
			sum += (idCard[i]-'0')*(coefficient[i]);
		}
		remainder=sum%11;
		ans = test[remainder];
		if (ans==idCard[17]){
			printf("right\n");
		}
		else {
			printf("wrong\n");
		}
		sum=0;//如果忘记把sum归零，你仍然可以过第一个测试点…… 
	}
	return 0;
}
