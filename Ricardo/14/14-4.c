#include <stdio.h>

typedef struct
{
    char name[30];
    char id[30];
    int score[5];
    int total;
    double average;
} STUDENT;

void sort(int array[], int size);

int main(void)
{
    int sum = 0;
    STUDENT stduent;
    STUDENT *p = &stduent;
    fgets(&stduent.name, 30, stdin);
    scanf("%s", &stduent.id);
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &stduent.score[i]);
        sum = sum + stduent.score[i];
    }
    stduent.total = sum;
    stduent.average = (double)sum / 5.0;
    sort(stduent.score, 5);
    printf("Name:%s", p->name);
    printf("ID:%s\n", p->id);
    printf("Score:%d %d %d %d %d\n", p->score[0], p->score[1], p->score[2], p->score[3], p->score[4]);
    printf("average:%.2f total:%d\n", p->average, p->total);
    return 0;
}

void sort(int array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (array[j] < array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}