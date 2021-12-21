#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[30];
    char id[30];
    int score[5];
    int total;
    double average;
} STUDENT;

int main(void)
{
    int num;
    int sum;
    scanf("%d", &num);
    getchar();
    STUDENT *student = malloc(sizeof(STUDENT) * num);
    STUDENT *raw = student;
    for (int i = 0; i < num; i++)
    {
        sum = 0;
        fgets(&student->name, 30, stdin);
        fgets(&student->id, 30, stdin);
        for (int i = 0; i < 5; i++)
        {
            scanf("%d", &student->score[i]);
            getchar();
            sum = sum + student->score[i];
        }
        student->total = sum;
        student->average = (double)sum / 5.0;
        student++;
    }
    student = raw;
    for (int i = 0; i < num; i++)
    {
        printf("Name:%s", student->name);
        printf("ID:%s", student->id);
        printf("Score:%d %d %d %d %d\n", student->score[0], student->score[1], student->score[2], student->score[3], student->score[4]);
        printf("average:%.2f total:%d\n", student->average, student->total);
        printf("\n");
        student++;
    }
    free(raw);
}