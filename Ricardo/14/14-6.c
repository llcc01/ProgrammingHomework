#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[30];
    int total;
} STD;

int compareName(STD s1, STD s2);
int compareTotal(STD s1, STD s2);
void sort(STD *s, int size);

int main(void)
{
    int num;
    scanf("%d\n", &num);
    STD *people = malloc(sizeof(STD) * num);
    STD *raw = people;
    for(int i = 0; i < num; i++){
        scanf("%s", &people->name);
        scanf("%d", &people->total);
        people++;
    }
    people = raw;
    sort(people, num);
    for(int i = 0; i < num; i++){
        printf("Name:%s\n", people->name);
        printf("total:%d\n", people->total);
        printf("\n");
        people++;
    }
    free(raw);
    return 0;
}

int compareName(STD s1, STD s2){
    if(strcmp(s1.name, s2.name) < 0){
        return 1;
    }else{
        return 0;
    }
}

int compareTotal(STD s1, STD s2){
    if(s1.total > s2.total){
        return 1;
    }else if(s1.total < s2.total){
        return 0;
    }else{
        return -1;
    }
}

void sort(STD *s, int size){
    for(int i = 1; i < size; i++){
        for(int j = 0; j < size - i; j++){
            if(compareTotal(s[j], s[j + 1]) == 0){
                STD temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }else if(compareTotal(s[j], s[j + 1]) == -1){
                if(!compareName(s[j], s[j + 1])){
                    STD temp = s[j];
                    s[j] = s[j + 1];
                    s[j + 1] = temp;
                }
            }
        }
    }
}