#include<stdio.h>
#define mian main
mian()
{
	char word[102];
	int capitalLetter[26]={0};
	int lowerCase[26]={0};
	
	scanf("%s",word);
	for (int i=0;i<101;i++){
		if (word[i]>='A'&&word[i]<='Z'){
			int p=word[i];
			capitalLetter[p-'A']++;
		}
		else if(word[i]>='a'&&word[i]<='z'){
			int p=word[i];
			lowerCase[p-'a']++;
		}
		else if(word[i]=='\0') break;//不加break会冒出一些奇怪的字母 
	}
	for (int i=0;i<26;i++){
		if (capitalLetter[i]>0){
			printf("The character %c has presented %d times.\n",i+'A',capitalLetter[i]);
		}
	}
	for (int i=0;i<26;i++){
		if (lowerCase[i]>0){
			printf("The character %c has presented %d times.\n",i+'a',lowerCase[i]);
		}
	}
	return 0;
	
} 
