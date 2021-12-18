#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 2000

//函数题第六题的代码
char *compare(char *str1, char *str2);
void sort(char **strArray, int size);

int main(void)
{
    int num;
    int length;
    char **string_array;
    char **p;

    scanf("%d", &num);
    getchar();
    string_array = malloc(sizeof(char *) * num);
    if (string_array == NULL)
    {
        return -1;
    }
    p = string_array;
    for (int i = 0; i < num; i++)
    {
        char string[MAX];
        fgets(string, MAX, stdin);
        length = strlen(string);
        *p = malloc(sizeof(char) * (length + 1));
        if (p == NULL)
        {
            return -1;
        }
        strcpy(*p, string);
        p++;
    }
    sort(string_array, num);
    p = string_array;
    for (int i = 0; i < num; i++)
    {
        printf("%s", *p);
        free(*p);
        p++;
    }
    free(string_array);
    return 0;
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