#include <stdio.h>
main()
{
	int A[1001]={};
	int B[1001]={};
	int countA=0,countB=0;
	int Ok;
	
	for (int i=0;;i++){
		int a;
		scanf("%d",&a);
		if (a==-1){
			break;
		}
		else {
			A[i]=a;
			countA++;
		}
	}
	for (int i=0;;i++){
		int b;
		scanf("%d",&b);
		if (b==-1){
			break;
		}
		else {
			B[i]=b;
			countB++;
		}
	}
	if (countB>countA){
		printf("ListB is not the sub sequence of ListA.");
		return 0;
	}
	for (int i=0;i<countA-countB;i++){
		Ok=0;
		if(A[i]==B[0]){
			int Yes=1;
			for (int p=0;p<countB;p++){
				if (A[i+p]!=B[p]){
					Yes=0;
					break;
				}
			}
			if (Yes==1){
				Ok=1;
				break;
			}
		}
	}
	if (Ok==1){
		printf("ListB is the sub sequence of ListA.");
	}
	else{
		printf("ListB is not the sub sequence of ListA.");
	}
	return 0;
 } 
