#include<stdio.h>

#define        MAXLEN        110

int isPrime( int n ) ;//判断一个整数是否是质数，是则返回1，否则返回0 
int getResult( char word[] ) ;

int main()
{
    char word[MAXLEN] ;

    scanf("%s",word);            
    printf("%d\n",getResult(word));

    return 0;
}

/* 请在这里填写答案 */
int isPrime( int n ){//woc原来不用写这个，已经有了，我还提交半天告我冲突提交不上去 
	int i;int yes=1;
	for (i=2;i*i<n;i++){
		if (n%i==0){
		yes=0;break;}
	}
	if (yes==0) return 0;
	else return 1;
}
int getResult( char word[] )
{
	int alphabet[26]={0};
	for (int i=0;i<MAXLEN;i++){
		if (word[i]>='a'&&word[i]<='z'){
			int o=word[i]-'a';
			alphabet[o]++;
		}
		if (word[i]=='\0') break;
	}
	int max=1;
	int min=110;
	for (int i=0;i<26;i++){
		if (alphabet[i]>max){
			max=alphabet[i];
		}
		if (alphabet[i]!=0&&alphabet[i]<min){
			min=alphabet[i];
		}
	}
	int ans=max-min;
	int l=isPrime(ans);
	if(l){
		return ans;
	}
	else
	{
		return -1;
	}
	
}
