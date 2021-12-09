#include <stdio.h>

int main(void)
{
    while(1){
        int cha = getchar();
        if(cha >= 'A' && cha <= 'Z'){
            cha = cha + 32;
        }else if(cha >= 'a' && cha <= 'z'){
            cha = cha - 32;
        }
        printf("%c", cha);
        if(cha == '\n'){
            break;
        }
    }
    return 0;
}
