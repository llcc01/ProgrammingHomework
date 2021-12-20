#include <stdio.h>

#define        MAX        48

int getScore(char * s) ;

int main()
{
    char input[MAX] ;
    int score ;

    scanf("%s",input);
    score = getScore(input) ;
    printf("%d\n",score) ;

    return 0;
}

/* 请在这里填写答案 */
int getScore(char * s)
{
	int score=0;
	for (int i=0;i<MAX;i++){
		if (s[i]!='\0'){
			if (s[i]=='W') score+=3;
			else if (s[i]=='D') score+=1;
			else if (s[i]=='L') score+=0;
		}
		else break;
	}
	return score;
}
