#include <stdio.h>
#define MAX_SIZE 200

int main(void)
{
    char string[MAX_SIZE];
    scanf("%s", string);
    char letter = 'A';
    for(; letter <= 'Z'; letter++){
        char* p = string;
        int result = 0;
        while(*p != '\0'){
            if(*p == letter){
                result++;
            }
            p++;
        }
        if(result != 0){
            printf("The character %c has presented %d times.\n", letter, result);
        }
    }
    letter = 'a';
    for(; letter <= 'z'; letter++){
        char* p = string;
        int result = 0;
        while(*p != '\0'){
            if(*p == letter){
                result++;
            }
            p++;
        }
        if(result != 0){
            printf("The character %c has presented %d times.\n", letter, result);
        }
    }
    return 0;
}