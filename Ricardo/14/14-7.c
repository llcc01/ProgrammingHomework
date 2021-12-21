#include <stdio.h>
#include <string.h>

#define MAX 130

typedef struct
{
    char id[20];
    char name[20];
    int math;
    int eng;
    int comp;
} STD;
STD people[MAX];
int position = 0;

int add(void);
int delete (void);
int change(void);
int show(void);

int main(void)
{
    int num;
    int input;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &input);
        switch (input)
        {
        case 1:
        {
            int result = add();
            if (result)
            {
                printf("Add success\n");
            }
            else
            {
                printf("Students already exist\n");
            }
            break;
        }
        case 2:
        {
            int result = delete ();
            if (result)
            {
                printf("Delete success\n");
            }
            else
            {
                printf("Students do not exist\n");
            }
            break;
        }
        case 3:
        {
            int result = change();
            if (result)
            {
                printf("Update success\n");
            }
            else
            {
                printf("Students do not exist\n");
            }
            break;
        }
        case 4:
        {
            int result = show();
            if (!result)
            {
                printf("Students do not exist\n");
            }
            break;
        }
        }
    }
    return 0;
}

//添加学生信息
int add(void)
{
    char id[20];
    int rubbish;
    scanf("%s", &id);
    for (int i = 0; i < position; i++)
    {
        if (strcmp(id, people[i].id) == 0)
        {
            //把缓冲区里没用的数据扔进垃圾桶
            scanf("%s", &id);
            scanf("%d %d %d", &rubbish, &rubbish, &rubbish);
            return 0;
        }
    }
    strcpy(people[position].id, id);
    scanf("%s %d %d %d", &people[position].name, &people[position].math, &people[position].eng, &people[position].comp);
    getchar();
    position++;
    return 1;
}

//删除学生信息
int delete (void)
{
    char id[20];
    int flag = 0;
    scanf("%s", &id);
    for (int i = 0; i < position; i++)
    {
        if (strcmp(id, people[i].id) == 0)
        {
            flag = 1;
            strcpy(people[i].id, " ");
            break;
        }
    }
    return flag;
}

//更改学生信息
int change(void)
{
    char id[20];
    int rubbish;
    int flag = 0;
    scanf("%s", &id);
    for (int i = 0; i < position; i++)
    {
        if (strcmp(id, people[i].id) == 0)
        {
            flag = 1;
            scanf("%d %d %d", &people[i].math, &people[i].eng, &people[i].comp);
            getchar();
            return flag;
        }
    }
    //把缓冲区里没用的数据扔进垃圾桶
    scanf("%d", &rubbish);
    scanf("%d", &rubbish);
    scanf("%d", &rubbish);
    getchar();
    return flag;
}

//展示学生的信息
int show(void)
{
    char id[20];
    int flag = 0;
    float average;
    scanf("%s", &id);
    for (int i = 0; i < position; i++)
    {
        if (strcmp(id, people[i].id) == 0)
        {
            flag = 1;
            average = (float)(people[i].math + people[i].eng + people[i].comp) / 3.0;
            printf("Student ID:%s\n", people[i].id);
            printf("Name:%s\n", people[i].name);
            printf("Average Score:%.1f\n", average);
            break;
        }
    }
    return flag;
}
