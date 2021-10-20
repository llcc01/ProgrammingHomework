#include <stdio.h>

int main(void)
{
    char x;
    int character = 0;
    int space = 0;
    int number = 0;
    int other = 0;
    while(1){
        scanf("%c", &x);
        if((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z')){
            character++;
        }else if (x == ' '){
            space++;
        }else if(x >= '0' && x <= '9'){
            number++;
        }else if( x == '\n'){
            break;
        }else{
            other++;
        }
    }
    printf("%d %d %d %d\n", character, space, number, other);
    return 0;
}