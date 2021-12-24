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

char **create1(int n)
{
    char **p = malloc(sizeof(char *) * n);
    return p;
}

char *create2(int n)
{
    char *p = malloc(sizeof(char) * n);
    return p;
}

char *compare(char *str1, char *str2)
{
    char *p1 = str1;
    char *p2 = str2;
    while (*p1 != '\0' || *p2 != '\0')
    {
        if (*p1 > *p2)
        {
            return str2;
        }
        else if (*p1 < *p2)
        {
            return str1;
        }
        p1++;
        p2++;
    }
    return NULL;
}

void sort(char **strArray, int size)
{
    for (int n = 0; n < size; n++)
    {
        for (int i = size - 1; i > n; i--)
        {
            if (strArray[i] == compare(strArray[i], strArray[i - 1]))
            {
                char *temp = strArray[i];
                strArray[i] = strArray[i - 1];
                strArray[i - 1] = temp;
            }
        }
    }
}