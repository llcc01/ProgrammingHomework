#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    fgets(str, 99, stdin);
    int length = strlen(str);
    for(int i = 0; i < length - 1; i++){
        str[i] = str[i] + 3;
        if((str[i] > 90 && str[i] < 97) || (str[i] > 122)){
            str[i] = str[i] - 26;
        }
    }
    printf(str);
    getchar();
    return 0;
}