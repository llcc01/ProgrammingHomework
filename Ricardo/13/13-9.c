#include <stdio.h>
#include <stdlib.h>
#define MAX 100000

//函数题第六题的代码
char *compare(char *str1, char *str2);
void sort(char **strArray, int size);

int main(void)
{
    int num;
    int pos = 1;
    char **string_array;
    char string[MAX];
    char *p = &string;

    scanf("%d", &num);
    getchar();
    string_array = malloc(sizeof(char *) * num);
    if (string_array == NULL)
    {
        return -1;
    }
    string_array[0] = &string;
    while (1)
    {
        char temp = getchar();
        if (temp == EOF)
        {
            break;
        }
        if (temp == '\n')
        {
            *p = '\0';
            string_array[pos] = p + 1;
            pos++;
        }
        else
        {
            *p = temp;
        }
        p++;
    }
    sort(string_array, num);
    for (int i = 0; i < num; i++)
    {
        puts(string_array[i]);
    }
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