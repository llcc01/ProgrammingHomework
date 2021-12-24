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
    student students[100];
    student *p;
    int i, j, n;
    scanf("%d", &n);
    for (j = 0; j < n; j++)
    {
        getchar();
        gets(students[j].name);
        gets(students[j].id);
        students[j].score_sum = 0;
        for (i = 0; i < 5; i++)
        {
            scanf("%d", &students[j].score[i]);
            students[j].score_sum += students[j].score[i];
        }
        students[j].score_avg = students[j].score_sum / 5.0;
    }

    for (j = 0; j < n; j++)
    {
        printf(
            "Name:%s\n\
ID:%s\n\
Score:%d %d %d %d %d\n\
average:%.2lf total:%d\n\n",
            students[j].name, students[j].id,
            students[j].score[0], students[j].score[1], students[j].score[2], students[j].score[3], students[j].score[4],
            students[j].score_avg, students[j].score_sum);
    }
    return 0;
}