#include <stdio.h>

typedef struct
{
    char id[16]; //学生账号
    int total;   //综合成绩
    int ce;      //机试成绩
    int ws;      //加权成绩
} STUDENT;

void Sort(STUDENT a[], int size);
void Swap(STUDENT *s1, STUDENT *s2);
int Comp(STUDENT *s1, STUDENT *s2);

int main()
{
    STUDENT stu[100];
    int i, n;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s%d%d", stu[i].id, &stu[i].ce, &stu[i].ws);
        stu[i].total = stu[i].ce + stu[i].ws;
    }

    Sort(stu, n);
    for (i = 0; i < n; i++)
        printf("%s %d %d %d\n", stu[i].id, stu[i].total, stu[i].ce, stu[i].ws);

    return 0;
}

void Swap(STUDENT *s1, STUDENT *s2)
{
    STUDENT temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

int Comp(STUDENT *s1, STUDENT *s2)
{
    int result;
    if (s1->total > s2->total)
    {
        result = 1;
    }
    else if (s1->total < s2->total)
    {
        result = 0;
    }
    else
    {
        if (s1->ce > s2->ce)
        {
            result = 1;
        }
        else
        {
            result = 0;
        }
    }
    return result;
}

void Sort(STUDENT a[], int size)
{
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            STUDENT *prt1 = &a[j];
            STUDENT *prt2 = &a[j + 1];
            if (Comp(prt1, prt2) == 0)
            {
                Swap(prt1, prt2);
            }
        }
    }
}