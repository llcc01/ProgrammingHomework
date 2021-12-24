#include <stdio.h>
#include "string.h"
typedef struct
{
    char name[21];
    int score;
} student;
int cmp(student *s1, student *s2)
{
    if (s1->score == s2->score)
    {
        return strcmp(s1->name, s2->name) > 0;
    }
    return s1->score < s2->score;
}
int main()
{
    student s[100], t;
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s %d", &s[i].name, &s[i].score);
    }
    for (i = n - 1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (cmp(&s[j], &s[j + 1]))
            {
                t = s[j];
                s[j] = s[j + 1];
                s[j + 1] = t;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("Name:%s\ntotal:%d\n\n", s[i].name, s[i].score);
    }
    return 0;
}