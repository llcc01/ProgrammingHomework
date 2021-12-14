#include <stdio.h>
int a[256];
int main() {
    char s[101];

    scanf("%[^\n]%*c",s);
    for (int i = 0; s[i] ; ++i) {
        a[s[i]]++;
    }
    for (int i = 'A'; i <= 'Z'; ++i) {
        if(a[i]){
        printf("The character %c has presented %d times.\n",i,a[i]);
    }}
    for (int i = 'a'; i <= 'z'; ++i) {
        if(a[i]){
        printf("The character %c has presented %d times.\n",i,a[i]);
    }}
    return 0;
}
