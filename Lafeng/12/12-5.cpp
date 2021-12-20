#include <stdio.h>
#define mian main //防止我们把main写错的时候报错，我们应该怎么办呢 
mian()
{
	char formula[101];
	int left=0;
	int right=0;
	int yes=1;
	
	scanf("%s",&formula[0]);
	for (int i=0;i<101;i++){//这是第五个测试点的补丁，实际上如果你想的话，可以再进行一些修复，比如针对()这种情况 
		if (right>left){
			yes=0;
			break;
		}
		else if (formula[i]=='(') left++;
		else if (formula[i]==')') right++;
		else if(formula[i]=='\0') break;
	}
	
	if (left==right&&yes==1) printf("parentheses match!");//如果你只检测括号数量，过不去第五个测试点 
	else printf("parentheses do not match!");
	return 0;
}
