#include <stdio.h>

int main() {
    char c;
    int sum=0;
    do{
        c = getchar();
        if(c>='a'&&c<='z'){
            c = c +'A' - 'a';
        }
        if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')sum++;
        putchar(c);
    }while(c!='\n');
    printf("%d",sum);
    return 0;
}
