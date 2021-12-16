#include <stdio.h>
#include <stdlib.h>

char **create1(int n);
void create2(char **strPtr, int n);
void fill(char **strPtr, int n);

int main()
{
    int n, i;
    char **strPtr;

    scanf("%d", &n);
    strPtr = create1(n * 2 + 1);
    create2(strPtr, n * 2 + 1);
    fill(strPtr, n);

    for (i = 0; i < 2 * n + 1; i++)
    {
        printf("%s\n", strPtr[i]);
    }

    for (i = 0; i < n * 2 + 1; i++)
        free(strPtr[i]);
    free(strPtr);

    return 0;
}

char **create1(int n){
    char **p = malloc(sizeof(char*) * n);
    return p;
}

void create2(char **strPtr, int n)
{
    for(int i = 0; i < n; i++)
    {
        *strPtr = malloc(sizeof(char) * (n + 1));
        strPtr++;
    }
}

void fill(char **strPtr, int n){
    char **p = strPtr;
    //先填第一行
    for(int i = 1; i < n; i++){
        **p = ' ';
        *p = *p + 1;
    }
    **p = 'X';
    *p = *p + 1;
    **p = '\0';
    //填上中间的部分
    for(int i = 1; i < n; i++)
    {
        p++;
        for(int j = 1; j < n - i; j++){
            **p = ' ';
            *p = *p + 1;
        }
        **p = '/';
        for(int j = 0; j <= i * 2; j++){
            *p = *p + 1;
            **p = ' ';
        }
        *p = *p + 1;
        **p = '\\';
        *p = *p + 1;
        **p = '\0';
    }
    //填中间的那一行
    p++;
    **p = 'X';
    for(int i = 0; i < i * 2; i++){
        *p = *p + 1;
        **p = ' ';
    }
    *p = *p + 1;
    **p = 'X';
    *p = *p + 1;
    **p = '\0';
    //填下中间的部分
    for(int i = 1; i < n; i++){
        p++;
        for(int j = 1; j < i; j++){
            **p = ' ';
            *p = *p + 1;
        }
        **p = '\\';
        for(int j = 1; j < (n - i) * 2; j++){
            *p = *p + 1;
            **p = ' ';
        }
        **p = '/';
        *p = *p + 1;
        **p = '\0';
    }
    p++;
    for(int i = 0; i < n; i++){
        **p = ' ';
        *p = *p + 1;
    }
    **p = 'X';
    *p = *p + 1;
    **p = '\0';
}
