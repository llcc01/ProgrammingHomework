#include <stdio.h>

int main() {
    char s[101];
    scanf("%[^\n]%*c",s);
    int f=0,b=0;
    for (int i = 0; s[i]; ++i) {
        if(s[i]=='('){
            f++;b--;
        }
        if(s[i]==')'){
            f--;b++;
        }
        if(f<0){
            printf("parentheses do not match!");
            return 0;
        }
    }
    if(f==b&&b==0){
        printf("parentheses match!");
    }
    else{
        printf("parentheses do not match!");
    }
    return 0;
}
