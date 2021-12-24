#include <stdio.h>
#include <stdlib.h>

char **create1(int n);
void create2(char **strPtr, int n);
void fill(char **strPtr, int n);

int main()
{
    int n, i, j;
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

/* 请在这里填写答案 */
char **create1(int n)
{
    return (char **)malloc(sizeof(void *) * n);
}
void create2(char **strPtr, int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        *(strPtr + i) = (char *)malloc(n + 1);
    }
}
void fill(char **strPtr, int n)
{
    int i = 0, j = 0;
    if(!n)
    {
        **strPtr='X';
        *((*strPtr)+1)='\0';
        return;
    }
    //第一行
    for (; j < n; j++)
    {
        *(*(strPtr + i) + j) = ' ';
    }
    *(*(strPtr + i) + j) = 'X';
    *(*(strPtr + i) + j + 1) = '\0';
    i++;

    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            *(*(strPtr + i) + j) = ' ';
        }
        *(*(strPtr + i) + j) = '/';
        j++;
        for (; j < n + i; j++)
        {
            *(*(strPtr + i) + j) = ' ';
        }
        *(*(strPtr + i) + j) = '\\';
        j++;
        *(*(strPtr + i) + j) = '\0';
    }

    //中间行
    **(strPtr + i) = 'X';
    for (j = 1; j < 2 * n; j++)
    {
        *(*(strPtr + i) + j) = ' ';
    }
    *(*(strPtr + i) + j) = 'X';
    *(*(strPtr + i) + j + 1) = '\0';
    i++;

    for (; i < 2 * n; i++)
    {
        for (j = 0; j < i - n; j++)
        {
            *(*(strPtr + i) + j) = ' ';
        }
        *(*(strPtr + i) + j) = '\\';
        j++;
        for (; j < 2 * n - (i - n); j++)
        {
            *(*(strPtr + i) + j) = ' ';
        }
        *(*(strPtr + i) + j) = '/';
        j++;
        *(*(strPtr + i) + j) = '\0';
    }

    //最后一行
    for (j = 0; j < n; j++)
    {
        *(*(strPtr + i) + j) = ' ';
    }
    *(*(strPtr + i) + j) = 'X';
    j++;
    *(*(strPtr + i) + j) = '\0';
}
//      X
//     / \
//    /   \
//   /     \
//  /       \
// X         X
//  \       /
//   \     /
//    \   /
//     \ /
//      X
