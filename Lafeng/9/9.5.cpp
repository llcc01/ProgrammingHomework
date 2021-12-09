/*每到月底，公司就要给员工发工资。每个员工的工资都是由（100，50，20，10，5，2，1) 
7种面值的钞票组成的。为了发工资的简便，公司会尽量给员工发较大面值的钞票，
例如某个员工的工资为1260，那么公司会给员工12张100元的、1张50元的、1张10的钞票。
你的任务是，告诉你某员工的工资，你来计算如何给员工发工资。*/
#include <stdio.h>
main()
{
	int sala[7]={};
	int n;
	
	scanf("%d",&n);
	while(n/100){
		sala[0]++;
		n -= 100;
	}
	while (n/50){
		sala[1]++;
		n -= 50;
	}
	while (n/20){
		sala[2]++;
		n -= 20;
	}
	while (n/10){
		sala[3]++;
		n -= 10;
	}
	while (n/5){
		sala[4]++;
		n -= 5;
	}
	while (n/2){
		sala[5]++;
		n -= 2;
	}
	while (n){
		sala[6]++;
		n -= 1;
	}
	if(sala[0]){
		printf("100:%d\n",sala[0]);
	}
	if(sala[1]){
		printf("50:%d\n",sala[1]);
	}
	if(sala[2]){
		printf("20:%d\n",sala[2]);
	}
	if(sala[3]){
		printf("10:%d\n",sala[3]);
	}
	if(sala[4]){
		printf("5:%d\n",sala[4]);
	}
	if(sala[5]){
		printf("2:%d\n",sala[5]);
	}
	if(sala[6]){
		printf("1:%d\n",sala[6]);
	}
	return 0;
}
