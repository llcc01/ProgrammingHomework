#include <stdio.h>
typedef struct
{
    char name[21];
    char id[21];
    int score[5];
    double score_avg;
    int score_sum;
} student;
int main()
{
    student student1;
    student *p;
    int i, j, t;
    p = &student1;

    gets(student1.name);
    gets(student1.id);
    student1.score_sum = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &student1.score[i]);
        student1.score_sum += student1.score[i];
    }
    student1.score_avg = student1.score_sum / 5.0;
    for (i = 4; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (student1.score[j] < student1.score[j + 1])
            {
                t = student1.score[j];
                student1.score[j] = student1.score[j + 1];
                student1.score[j + 1] = t;
            }
        }
    }

    printf(
        "Name:%s\n\
ID:%s\n\
Score:%d %d %d %d %d\n\
average:%.2lf total:%d\n",
        p->name, p->id,
        p->score[0], p->score[1], p->score[2], p->score[3], p->score[4],
        p->score_avg, p->score_sum);
    return 0;
}