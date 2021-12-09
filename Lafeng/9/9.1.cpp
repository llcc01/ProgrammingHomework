/*已知某个学生n门课的成绩,求平均成绩。*/
#include<stdio.h>
main()
{
	int n;
	int SCORE = 0;
	double average;
	
	scanf("%d",&n);
	int score [n];
	for (int i = 0 ; i < n ; i++){
		scanf("%d",&score[i]);
	}
	for (int i = 0 ; i < n ; i++){
		SCORE += score[i];
	}
	average = (double)SCORE/n;
	printf("%.2lf",average) ;
	return 0;
} 
