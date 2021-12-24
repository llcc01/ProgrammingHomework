#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 101

char **create1(int n);
char *create2(int n);
void sort(char **strArray, int size);

int main()
{
    char **strArray;
    int n, i;

    scanf("%d", &n);
    strArray = create1(n);
    if (strArray != NULL)
    {
        for (i = 0; i < n; i++)
        {
            strArray[i] = create2(MAX);
            if (strArray[i] == NULL)
                return -1;
        }
    }
    else
        return -1; //这里两个 return -1 都是无法获得内存时直接结束程序

    getchar(); //吃掉前边输入的回车符

    for (i = 0; i < n; i++)
        gets(strArray[i]); //读入字符串

    sort(strArray, n); //排序

    for (i = 0; i < n; i++)
        printf("%s\n", strArray[i]); //输出

    for (i = 0; i < n; i++)
        free(strArray[i]);
    free(strArray);

    return 0;
}

/* 请在这里填写答案 */
char **create1(int n)
{
    return (char **)malloc(sizeof(void *) * n);
}
char *create2(int n)
{
    return (char *)malloc(sizeof(char) * n);
}
void sort(char **strArray, int size)
{
    int i, j;
    char *t;
    for (i = size - 1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (strcmp(*(strArray + j), *(strArray + j + 1)) > 0)
            {
                t = *(strArray + j);
                *(strArray + j) = *(strArray + j + 1);
                *(strArray + j + 1) = t;
            }
        }
    }
}
